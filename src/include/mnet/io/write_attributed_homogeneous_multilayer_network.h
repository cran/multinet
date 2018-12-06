/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_WRITEATTRIBUTEDHOMOGENEOUSMULTILAYER_H_
#define UU_MNET_IO_WRITEATTRIBUTEDHOMOGENEOUSMULTILAYER_H_

#include <string>
#include <memory>
#include "mnet/datastructures/graphs/AttributedHomogeneousMultilayerNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

template <typename LayerIterator>
void
write_attributed_homogeneous_multilayer_network(
    const AttributedHomogeneousMultilayerNetwork* net,
    LayerIterator begin,
    LayerIterator end,
    const std::string& outfile,
    char separator
);

template <typename LayerIterator>
void
write_graphml(
    const AttributedHomogeneousMultilayerNetwork* mnet,
    LayerIterator begin,
    LayerIterator end,
    const std::string& path,
    bool merge_actors,
    bool include_all_actors
);





template <typename LayerIterator>
void
write_attributed_homogeneous_multilayer_network(
    const AttributedHomogeneousMultilayerNetwork* mnet,
    LayerIterator begin,
    LayerIterator end,
    const std::string& path,
    char sep
)
{
    std::ofstream outfile;
    outfile.open(path.data());

    outfile << "#TYPE multilayer" << std::endl;
    outfile << std::endl;

    outfile << "#LAYERS" << std::endl;

    for (auto layer=begin; layer!=end; ++layer)
    {
        outfile << (*layer)->name << sep << (*layer)->name << sep << ((*layer)->is_directed()?"DIRECTED":"UNDIRECTED") << std::endl;
    }

    for (auto layer1=begin; layer1!=end; ++layer1)
    {
        for (auto layer2=begin; layer2!=end; ++layer2)
        {
            if (layer1==layer2)
            {
                continue;
            }

            outfile << (*layer1)->name << sep << (*layer2)->name << sep << (mnet->interlayer_edges()->is_directed((*layer1),(*layer2))?"DIRECTED":"UNDIRECTED") << std::endl;
        }
    }

    outfile << std::endl;

    outfile << "#ACTOR ATTRIBUTES" << std::endl;

    for (auto attr: *mnet->vertices()->attr())
    {
        outfile << attr->name << sep << core::to_string(attr->type) << std::endl;
    }

    outfile << std::endl;

    outfile << "#VERTEX ATTRIBUTES" << std::endl;

    for (auto layer=begin; layer!=end; ++layer)
    {
        for (auto attr: *(*layer)->vertices()->attr())
        {
            outfile << (*layer)->name << sep << attr->name << sep << core::to_string(attr->type) << std::endl;
        }
    }

    outfile << std::endl;

    outfile << "#EDGE ATTRIBUTES" << std::endl;

    for (auto layer1=begin; layer1!=end; ++layer1)
    {
        for (auto layer2=begin; layer2!=end; ++layer2)
        {
            for (auto attr: *mnet->interlayer_edges()->attr())
            {
                outfile << (*layer1)->name << sep << (*layer2)->name << sep << attr->name << sep << core::to_string(attr->type) << std::endl;
            }
        }
    }

    outfile << std::endl;

    outfile << "#ACTORS" << std::endl;

    for (auto actor: *mnet->vertices())
    {
        outfile << actor->name;
        auto actor_attrs = mnet->vertices()->attr();

        for (auto attr: *actor_attrs)
        {
            switch (attr->type)
            {
            case core::AttributeType::NUMERIC:
            case core::AttributeType::DOUBLE:
                outfile << sep << actor_attrs->get_double(actor,attr->name);
                break;

            case core::AttributeType::STRING:
                outfile << sep << actor_attrs->get_string(actor,attr->name);
                break;

            case core::AttributeType::TIME:
            case core::AttributeType::TEXT:
            case core::AttributeType::INTEGER:
                break;
            }
        }

        outfile << std::endl;
    }

    outfile << std::endl;

    outfile << "#VERTICES" << std::endl;

    for (auto layer=begin; layer!=end; ++layer)
    {
        for (auto actor: *(*layer)->vertices())
        {
            outfile << actor->name << sep << (*layer)->name;
            auto node_attrs = (*layer)->vertices()->attr();

            for (auto attr: *node_attrs)
            {
                switch (attr->type)
                {
                case core::AttributeType::NUMERIC:
                case core::AttributeType::DOUBLE:
                    outfile << sep << node_attrs->get_double(actor,attr->name);
                    break;

                case core::AttributeType::STRING:
                    outfile << sep << node_attrs->get_string(actor,attr->name);
                    break;

                case core::AttributeType::TIME:
                case core::AttributeType::TEXT:
                case core::AttributeType::INTEGER:
                    break;
                }
            }

            outfile << std::endl;
        }
    }

    outfile << std::endl;

    outfile << "#EDGES" << std::endl;

    for (auto layer=begin; layer!=end; ++layer)
    {
        for (auto edge: *(*layer)->edges())
        {
            outfile << edge->v1->name << sep << (*layer)->name << sep << edge->v2->name << sep << (*layer)->name;
            auto edge_attrs = (*layer)->edges()->attr();

            for (auto attr: *edge_attrs)
            {
                switch (attr->type)
                {
                case core::AttributeType::NUMERIC:
                case core::AttributeType::DOUBLE:
                    outfile << sep << edge_attrs->get_double(edge,attr->name);
                    break;

                case core::AttributeType::STRING:
                    outfile << sep << edge_attrs->get_string(edge,attr->name);
                    break;

                case core::AttributeType::TIME:
                case core::AttributeType::TEXT:
                case core::AttributeType::INTEGER:
                    break;
                }
            }

            outfile << std::endl;
        }
    }

    for (auto layer1=begin; layer1!=end; ++layer1)
    {
        for (auto layer2=begin; layer2!=end; ++layer2)
        {
            if (layer1==layer2)
            {
                continue;
            }

            for (auto edge: *mnet->interlayer_edges()->get((*layer1),(*layer2)))
            {
                outfile << edge->v1->name << sep << (*layer1)->name << sep << edge->v2->name << sep << (*layer2)->name;
                auto edge_attrs = mnet->interlayer_edges()->attr();

                for (auto attr: *edge_attrs)
                {
                    switch (attr->type)
                    {
                    case core::AttributeType::NUMERIC:
                    case core::AttributeType::DOUBLE:
                        outfile << sep << edge_attrs->get_double(edge,attr->name);
                        break;

                    case core::AttributeType::STRING:
                        outfile << sep << edge_attrs->get_string(edge,attr->name);
                        break;

                    case core::AttributeType::TIME:
                    case core::AttributeType::TEXT:
                    case core::AttributeType::INTEGER:
                        break;
                    }
                }

                outfile << std::endl;
            }
        }
    }

    outfile.close();
}


template <typename LayerIterator>
void
write_graphml(
    const AttributedHomogeneousMultilayerNetwork* mnet,
    LayerIterator begin,
    LayerIterator end,
    const std::string& path,
    bool merge_actors,
    bool include_all_actors
)
{

    std::ofstream outfile;
    outfile.open(path.data());

    outfile << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << std::endl;
    outfile << "<graphml xmlns=\"http://graphml.graphdrawing.org/xmlns\"" << std::endl;
    outfile << "    xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\""  << std::endl;
    outfile << "    xsi:schemaLocation=\"http://graphml.graphdrawing.org/xmlns" << std::endl;
    outfile << "     http://graphml.graphdrawing.org/xmlns/1.0/graphml.xsd\">" << std::endl;

    // if there are directed edges, then the output graph will be directed
    // and undirected edges will be split into pairs of directed edges
    bool directed = false;

    for (auto layer=begin; layer!=end; ++layer)
    {
        if ((*layer)->is_directed())
        {
            directed = true;
            goto end_loop;
        }
    }

    for (auto layer1=begin; layer1!=end; ++layer1)
    {
        for (auto layer2=layer1; layer2!=end; ++layer2)
        {
            if (layer1==layer2)
            {
                continue;    // @todo check if layer2=layer1+1 can be used above
            }

            if (mnet->interlayer_edges()->is_directed(*layer1,*layer2))
            {
                directed = true;
                goto end_loop;
            }
        }
    }

end_loop:


    // Node attributes
    for (auto layer=begin; layer!=end; ++layer)
    {
        outfile << "    <key id=\"" << (*layer)->name << "\" for=\"node\" attr.name=\"" << (*layer)->name << "\" attr.type=\"string\"/>" << std::endl;

        for (auto attr: *(*layer)->vertices()->attr())
        {
            if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
            {
                outfile << "    <key id=\"" << (*layer)->name << ":" << attr->name << "\" for=\"node\" attr.name=\"" << (*layer)->name << ":" << attr->name << "\" attr.type=\"double\"/>" << std::endl;
            }

            else if (attr->type==core::AttributeType::STRING)
            {
                outfile << "    <key id=\"" << (*layer)->name << ":" << attr->name << "\" for=\"node\" attr.name=\"" << (*layer)->name << ":" << attr->name << "\" attr.type=\"string\"/>" << std::endl;
            }
        }
    }

    // Actor attributes
    for (auto attr: *mnet->vertices()->attr())
    {
        if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
        {
            outfile << "    <key id=\"" << attr->name << "\" for=\"node\" attr.name=\"" << attr->name << "\" attr.type=\"double\"/>" << std::endl;
        }

        else if (attr->type==core::AttributeType::STRING)
        {
            outfile << "    <key id=\"" << attr->name << "\" for=\"node\" attr.name=\"" << attr->name << "\" attr.type=\"string\"/>" << std::endl;
        }
    }

    outfile << "    <key id=\"v_name\" for=\"node\" attr.name=\"name\" attr.type=\"string\"/>" << std::endl;
    outfile << "    <key id=\"e_type\" for=\"edge\" attr.name=\"e_type\" attr.type=\"string\"/>" << std::endl;

    // Edge attributes
    for (auto layer1=begin; layer1!=end; ++layer1)
    {
        for (auto layer2=begin; layer2!=end; ++layer2)
        {
            for (auto attr: *mnet->interlayer_edges()->attr())
            {
                if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                {
                    outfile << "    <key id=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\" for=\"edge\" attr.name=\"" << (*layer1)->name << "-" << (*layer2)->name << ": "  << attr->name << "\" attr.type=\"double\"/>" << std::endl;
                }

                else if (attr->type==core::AttributeType::STRING)
                {
                    outfile << "    <key id=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\" for=\"edge\" attr.name=\"" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\" attr.type=\"string\"/>" << std::endl;
                }
            }
        }
    }

    outfile << "  <graph id=\"" << mnet->name << "\" edgedefault=\"" << (directed?"directed":"undirected") << "\">" << std::endl;

    // Nodes
    if (merge_actors)
    {
        // one for each actor
        for (auto actor: *mnet->vertices())
        {
            // except if only layer-specific actors must be used
            if (!include_all_actors)
            {
                bool is_in_input_layers = false;

                for (auto layer=begin; layer!=end; ++layer)
                {
                    if ((*layer)->vertices()->contains(actor))
                    {
                        is_in_input_layers = true;
                    }
                }

                if (!is_in_input_layers)
                {
                    continue;
                }
            }

            outfile << "    <node id=\"" << actor << "\">" << std::endl;
            outfile << "        <data key=\"v_name\">" << actor->name << "</data>" << std::endl;

            for (auto layer=begin; layer!=end; ++layer)
            {
                if (!(*layer)->vertices()->contains(actor))
                {
                    // no content
                }
                else
                {
                    outfile << "        <data key=\"" << (*layer)->name << "\">T</data>" << std::endl;
                    auto attrs = (*layer)->vertices()->attr();

                    for (auto attr: *attrs)
                    {
                        if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                        {
                            outfile << "        <data key=\"" << (*layer)->name << ":" << attr->name << "\">" << attrs->get_double(actor,attr->name) << "</data>" << std::endl;
                        }

                        else if (attr->type==core::AttributeType::STRING)
                        {
                            outfile << "        <data key=\"" << (*layer)->name << ":" << attr->name << "\">" << attrs->get_string(actor,attr->name) << "</data>" << std::endl;
                        }
                    }
                }
            }

            auto attrs = mnet->vertices()->attr();

            for (auto attr: *attrs)
            {
                if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                {
                    outfile << "        <data key=\"" << attr->name << "\">" << attrs->get_double(actor,attr->name) << "</data>" << std::endl;
                }

                else if (attr->type==core::AttributeType::STRING)
                {
                    outfile << "        <data key=\"" << attr->name << "\">" << attrs->get_string(actor,attr->name) << "</data>" << std::endl;
                }
            }

            outfile << "    </node>" << std::endl;
        }
    }

    else
    {
        // No actor merging: one node for each node in the original multilayer network.
        // Only actors present in at least one layer are included: the include_all_actors parameter is not used in this case.
        for (auto layer=begin; layer!=end; ++layer)
        {
            for (auto actor: *(*layer)->vertices())
            {
                outfile << "    <node id=\"" << actor << ":" << (*layer) << "\">" << std::endl;
                outfile << "        <data key=\"v_name\">" << actor->name << ":" << (*layer)->name << "</data>" << std::endl;
                auto attrs = (*layer)->vertices()->attr();

                for (auto attr: *attrs)
                {
                    if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                    {
                        outfile << "        <data key=\"" << (*layer)->name << ":" << attr->name << "\">" << attrs->get_double(actor,attr->name) << "</data>" << std::endl;
                    }

                    else if (attr->type==core::AttributeType::STRING)
                    {
                        outfile << "        <data key=\"" << (*layer)->name << ":" << attr->name << "\">" << attrs->get_string(actor,attr->name) << "</data>" << std::endl;
                    }
                }

                outfile << "    </node>" << std::endl;
            }
        }
    }

    outfile << "    <key id=\"e_type\" for=\"edge\" attr.name=\"e_type\" attr.type=\"string\"/>" << std::endl;

    // Edges
    if (merge_actors)
    {
        // connect actor ids
        for (auto layer1=begin; layer1!=end; ++layer1)
        {
            for (auto layer2=layer1; layer2!=end; ++layer2)
            {
                if (layer1==layer2)
                {
                    for (auto edge: *(*layer1)->edges())
                    {
                        outfile << "    <edge id=\"e" << edge << "\" source=\"" << edge->v1 << "\" target=\"" << edge->v2 << "\">" << std::endl;
                        outfile << "        <data key=\"e_type\">" << (*layer1)->name << "</data>" << std::endl;
                        auto attrs = (*layer1)->edges()->attr();

                        for (auto attr: *attrs)
                        {
                            if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_double(edge,attr->name) << "</data>" << std::endl;
                            }

                            else if (attr->type==core::AttributeType::STRING)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_string(edge,attr->name) << "</data>" << std::endl;
                            }
                        }

                        outfile << "    </edge>" << std::endl;
                    }
                }

                else
                {
                    for (auto edge: *mnet->interlayer_edges()->get((*layer1),(*layer2)))
                    {
                        outfile << "    <edge id=\"e" << edge << "\" source=\"" << edge->v1 << "\" target=\"" << edge->v2 << "\">" << std::endl;
                        outfile << "        <data key=\"e_type\">" << (*layer1)->name << "-" << (*layer2)->name << "</data>" << std::endl;
                        auto attrs = mnet->interlayer_edges()->attr();

                        for (auto attr: *attrs)
                        {
                            if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_double(edge,attr->name) << "</data>" << std::endl;
                            }

                            else if (attr->type==core::AttributeType::STRING)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_string(edge,attr->name) << "</data>" << std::endl;
                            }
                        }

                        outfile << "    </edge>" << std::endl;
                    }
                }
            }
        }
    }

    else
    {
        // connect node ids
        for (auto layer1=begin; layer1!=end; ++layer1)
        {
            for (auto layer2=layer1; layer2!=end; ++layer2)
            {
                if (layer1==layer2)
                {
                    for (auto edge: *(*layer1)->edges())
                    {
                        outfile << "    <edge id=\"e" << edge << "\" source=\"" << edge->v1 << ":" << (*layer1) << "\" target=\"" << edge->v2 << ":" << (*layer1) << "\">" << std::endl;
                        outfile << "        <data key=\"e_type\">" << (*layer1)->name << "-" << (*layer1)->name << "</data>" << std::endl;
                        auto attrs = (*layer1)->edges()->attr();

                        for (auto attr: *attrs)
                        {
                            if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer1)->name << ": " << attr->name << "\">" << attrs->get_double(edge,attr->name) << "</data>" << std::endl;
                            }

                            else if (attr->type==core::AttributeType::STRING)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer1)->name << ": " << attr->name << "\">" << attrs->get_string(edge,attr->name) << "</data>" << std::endl;
                            }
                        }

                        outfile << "    </edge>" << std::endl;
                    }
                }

                else
                {
                    for (auto edge: *mnet->interlayer_edges()->get((*layer1),(*layer2)))
                    {
                        outfile << "    <edge id=\"e" << edge << "\" source=\"" << edge->v1 << ":" << (*layer1) << "\" target=\"" << edge->v2 << ":" << (*layer2) << "\">" << std::endl;
                        outfile << "        <data key=\"e_type\">" << (*layer1)->name << "-" << (*layer2)->name << "</data>" << std::endl;
                        auto attrs = mnet->interlayer_edges()->attr();

                        for (auto attr: *attrs)
                        {
                            if (attr->type==core::AttributeType::NUMERIC || attr->type==core::AttributeType::DOUBLE)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_double(edge,attr->name) << "</data>" << std::endl;
                            }

                            else if (attr->type==core::AttributeType::STRING)
                            {
                                outfile << "        <data key=\"e" << (*layer1)->name << "-" << (*layer2)->name << ": " << attr->name << "\">" << attrs->get_string(edge,attr->name) << "</data>" << std::endl;
                            }
                        }

                        outfile << "    </edge>" << std::endl;
                    }
                }
            }
        }
    }

    outfile << "  </graph>" << std::endl;
    outfile << "</graphml>" << std::endl;
}

}
}

#endif
