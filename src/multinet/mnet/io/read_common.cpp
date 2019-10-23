#include "mnet/io/read_common.hpp"
#include "net/io/read_common.hpp"
#include "core/utils/string.hpp"
#include <iostream>
#include "core/exceptions/WrongFormatException.hpp"

namespace uu {
namespace net {

bool
new_multilayer_section_start(const std::string& line)
{
    if (!(line.find("#")==0))
    {
        return false;
    }

    std::string line_copy = line;
    core::to_upper_case(line_copy);

    if (
        line_copy=="#VERSION" ||
        line_copy.find("#TYPE") == 0 ||
        line_copy=="#LAYERS" ||
        line_copy=="#ACTORS" ||
        line_copy=="#ACTOR ATTRIBUTES" ||
        line_copy=="#VERTICES" ||
        line_copy=="#VERTEX ATTRIBUTES" ||
        line_copy=="#INTRALAYER EDGES" ||
        line_copy=="#INTERLAYER EDGES" ||
        // alternative for: #INTRALAYER EDGES
        line_copy=="#EDGES" ||
        line_copy=="#EDGE ATTRIBUTES" ||
        // deprecated
        line_copy=="#VERTEXES")
    {
        return true;
    }

    return false;
}

MultilayerIOFileSection
get_multilayer_section(
    const std::string& line
)
{
    std::string line_copy = line;
    core::to_upper_case(line_copy);

    if (line_copy=="#VERSION")
    {
        return MultilayerIOFileSection::VERSION;
    }

    if (line_copy.find("#TYPE") == 0) // for backward compatibility, if the type is on the same line
    {
        return MultilayerIOFileSection::TYPE;
    }

    if (line_copy=="#LAYERS")
    {
        return MultilayerIOFileSection::LAYERS;
    }

    if (line_copy=="#ACTORS")
    {
        return MultilayerIOFileSection::VERTICES;
    }

    if (line_copy=="#ACTOR ATTRIBUTES")
    {
        return MultilayerIOFileSection::ACTOR_ATTRIBUTES;
    }

    if (line_copy=="#VERTICES" || line_copy=="#NODES")
    {
        return MultilayerIOFileSection::INTRALAYER_VERTICES;
    }

    if (line_copy=="#VERTEX ATTRIBUTES" || line_copy=="#NODE ATTRIBUTES")
    {
        return MultilayerIOFileSection::VERTEX_ATTRIBUTES;
    }

    if (line_copy=="#EDGES" || line_copy=="#INTRALAYER EDGES")
    {
        return MultilayerIOFileSection::INTRALAYER_EDGES;
    }

    if (line_copy=="#INTERLAYER EDGES")
    {
        return MultilayerIOFileSection::INTERLAYER_EDGES;
    }

    if (line_copy=="#EDGE ATTRIBUTES")
    {
        return MultilayerIOFileSection::EDGE_ATTRIBUTES;
    }

    // DEPRECATED
    if (line_copy=="#VERTEXES")
    {
        // std::cerr << "[WARNING] usage of #VERTEXES deprecated. Use #VERTICES instead." << std::endl;
        return MultilayerIOFileSection::INTRALAYER_VERTICES;
    }

    return MultilayerIOFileSection::DEFAULT; // cannot get here
}


MultilayerMetadata
read_multilayer_metadata(
    const std::string& infile,
    char separator
)
{

    MultilayerMetadata meta;

    // Set up CSV Reader

    core::CSVReader csv;
    csv.trim_fields(true);
    csv.set_field_separator(separator);
    csv.set_comment("--");

    std::string version;

    MultilayerIOFileSection section = MultilayerIOFileSection::DEFAULT;

    csv.open(infile);

    while (csv.has_next())
    {
        std::vector<std::string> fields = csv.get_next();
        std::string line = csv.get_current_raw_line();
        // remove trailing spaces
        line.erase(line.find_last_not_of(" \t")+1);
        line.erase(0,line.find_first_not_of(" \t"));

        if (line.size()==0)
        {
            continue;
        }


        if (new_multilayer_section_start(line))
        {
            section = get_multilayer_section(line);
            //fields = csv.get_next();
            //line = csv.get_current_raw_line();
            // remove trailing spaces
            //line.erase(line.find_last_not_of(" \t")+1);
            //line.erase(0,line.find_first_not_of(" \t"));
            continue;
        }


        switch (section)
        {
        case MultilayerIOFileSection::VERSION:
        {
            version = read_version(line, csv.row_num());
            break;
        }


        case MultilayerIOFileSection::LAYERS:
        {
            //@todo sanity check

            if (fields.size()==2)
            {
                std::string layer_name = fields.at(0);
                meta.layers[layer_name];

                for (size_t idx = 1; idx<fields.size(); idx++)
                {
                    read_graph_type(fields.at(idx), meta.layers[layer_name], csv.row_num());
                }
            }

            else if (fields.size()>2)
            {
                std::string layer_name1 = fields.at(0);
                meta.layers[layer_name1];
                std::string layer_name2 = fields.at(1);
                meta.layers[layer_name2];

                if (layer_name1!=layer_name2)
                {
                    continue;    //@todo currently not supported
                }

                for (size_t idx = 2; idx<fields.size(); idx++)
                {
                    read_graph_type(fields.at(idx), meta.layers[layer_name1], csv.row_num());
                }

            }

            break;
        }

        case MultilayerIOFileSection::TYPE:
        {
            // std::cout << "[WARNING] #TYPE section not implented" << std::endl;
            // read_multilayer_type(line, meta, csv.row_num());
            // @todo
            break;
        }


        case MultilayerIOFileSection::ACTOR_ATTRIBUTES:
        {
            if (fields.size()==2)
            {
                size_t from_idx = 0;
                core::Attribute vertex_att = read_attr_def(fields, from_idx, csv.row_num());
                meta.vertex_attributes.push_back(vertex_att);
            }

            else
            {
                throw core::WrongFormatException("Line " + std::to_string(csv.row_num()) +
                                                 ": attribute name and attribute type expected");
            }

            break;
        }


        case MultilayerIOFileSection::VERTEX_ATTRIBUTES:
        {

            // global vertex ( = actor) attributes
            // for compatibility with previous version
            if (fields.size()==2)
            {
                size_t from_idx = 0;
                core::Attribute vertex_att = read_attr_def(fields, from_idx, csv.row_num());
                meta.vertex_attributes.push_back(vertex_att);
            }

            // intralayer vertex attributes
            else if (fields.size()==3)
            {
                // add layer if not previously defined
                std::string layer_name = fields[0];

                if (meta.layers.find(layer_name) == meta.layers.end())
                {
                    GraphType gt;
                    meta.layers[layer_name] = gt;
                }

                // read attribute
                size_t from_idx = 1;
                core::Attribute vertex_att = read_attr_def(fields, from_idx, csv.row_num());
                meta.intralayer_vertex_attributes[layer_name].push_back(vertex_att);
            }

            else
            {
                // @todo throw wrong format exception
            }

            break;
        }

        case MultilayerIOFileSection::EDGE_ATTRIBUTES:
        {
            if (fields.size()==2)
            {
                int from_idx = 0;
                core::Attribute edge_att = read_attr_def(fields, from_idx, csv.row_num());
                meta.interlayer_edge_attributes.push_back(edge_att);
            }

            else if (fields.size()==3)
            {
                // add layer if not previously defined
                std::string layer_name = fields[0];

                if (meta.layers.find(layer_name) == meta.layers.end())
                {
                    GraphType gt;
                    meta.layers[layer_name] = gt;
                }

                // read attribute
                int from_idx = 1;
                core::Attribute edge_att = read_attr_def(fields, from_idx, csv.row_num());
                meta.intralayer_edge_attributes[layer_name].push_back(edge_att);
            }

            else
            {
                // @todo throw wrong format exception
            }

            break;
        }

        default:
            break;
        }
    }

    csv.close();
    return meta;
}

}
}
