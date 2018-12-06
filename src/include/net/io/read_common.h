/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_IO_READCOMMON_H_
#define UU_NET_IO_READCOMMON_H_

#include <string>
#include <vector>
#include "core/exceptions/OperationNotSupportedException.h"
#include "core/attributes/Attribute.h"
#include "core/attributes/AttributeStore.h"
#include "core/utils/CSVReader.h"
#include "core/datastructures/objects/Object.h"
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/Edge.h"
#include "net/io/GraphMetadata.h"
#include "net/io/GraphIOFileSection.h"

namespace uu {
namespace net {

/** Default edge directionality (undirected). */
const EdgeDir kDEFAULT_EDGE_DIRECTIONALITY = EdgeDir::UNDIRECTED;

GraphMetadata
read_metadata(
    const std::string& infile,
    char separator
);


template <typename G>
void
read_data(
    G* g,
    GraphMetadata meta,
    const std::string& infile,
    char separator
);

/**
 * Utility function to read ...
 * @param input the line of the file where the version is indicated
 * @param line_number current line in the input file, for error management
 * @return the version of the file format (2.0 or 1.0 for the previous version)
 */
std::string
read_version(
    const std::string& input,
    size_t line_number
);

/**
 * Utility function to read ...
 * @param graph_type...
 * @param line_number current line in the input file, for error management
 */
void
read_graph_type(
    const std::string& graph_type,
    GraphType& meta,
    size_t line_number
);

/**
 * Utility function to read an attribute definition.
 * @param store attribute store where the attribute values are saved
 * @param id identifier of the object for which the attributes should be read
 * @param attr_types vector with the expected types of attributes
 * @param attr_names vector with the expected names of attributes
 * @param line a vector of strings where the attribute values are stores
 * @param idx the index of the first attribute value in the line vector
 * @param line_number current line in the input file, for error management
 */
core::Attribute
read_attr_def(
    const std::vector<std::string>& line,
    size_t from_idx,
    size_t line_number
);

template <typename ASPtr, typename EPtr>
void
read_attr_values(
    ASPtr store,
    EPtr element,
    const std::vector<core::Attribute>& attributes,
    const std::vector<std::string>& line,
    size_t from_idx,
    size_t line_number
);


template <typename G>
const Vertex*
read_vertex(
    G* g,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <typename G>
const Edge*
read_edge(
    G* g,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <typename G>
void
read_vertex(
    G* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
);


template <typename G>
void
read_edge(
    G* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
);


template <typename G>
void
read_data(
    G* g,
    GraphMetadata meta,
    const std::string& infile,
    char separator
)
{

    // PASS 2: read the graph data

    core::CSVReader csv;
    csv.trim_fields(true);
    csv.set_field_separator(separator);
    csv.set_comment("--");
    csv.open(infile);

    GraphIOFileSection section = GraphIOFileSection::EDGES;

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


        // if new section starts here, set the current section and proceed
        if (new_section_start(line))
        {
            section = get_section(line);
            fields = csv.get_next();
        }

        switch (section)
        {
        case GraphIOFileSection::VERTICES:
        {
            read_vertex(g, fields, meta.vertex_attributes, csv.row_num());
            break;
        }

        case GraphIOFileSection::EDGES:
        {
            read_edge(g, fields, meta.edge_attributes, csv.row_num());
            break;
        }

        default:
            break;
        }
    }

}


template <typename G>
const Vertex*
read_vertex(
    G* g,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    assert_not_null(g, "read_vertex", "g");

    std::string vertex_name = fields.at(from_idx);

    auto vertex = g->vertices()->add(vertex_name);

    if (!vertex)
    {
        vertex = g->vertices()->get(vertex_name);
    }

    return vertex;
}

template <typename G>
const Edge*
read_edge(
    G* g,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    assert_not_null(g, "read_edge", "g");

    std::string from_vertex = fields.at(from_idx);
    std::string to_vertex = fields.at(from_idx+1);

    auto vertex1 = g->vertices()->add(from_vertex);

    if (!vertex1)
    {
        vertex1 = g->vertices()->get(from_vertex);
    }

    auto vertex2 = g->vertices()->add(to_vertex);

    if (!vertex2)
    {
        vertex2 = g->vertices()->get(to_vertex);
    }

    auto edge = g->edges()->add(vertex1,vertex2);

    if (!edge)
    {
        edge = g->edges()->get(vertex1,vertex2);
    }

    return edge;
}

template <typename G>
void
read_vertex(
    G* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Graph type not supported (IO)");
}


template <typename G>
void
read_edge(
    G* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Graph type not supported (IO)");
}


/* This function assumes that all the attribute values are present. */
template <typename ASPtr, typename EPtr>
void
read_attr_values(
    ASPtr store,
    EPtr element,
    const std::vector<core::Attribute>& attributes,
    const std::vector<std::string>& line,
    size_t from_idx,
    size_t line_number
)
{

    for (size_t i=from_idx; i<from_idx+attributes.size(); i++)
    {
        store->set_as_string(element, attributes.at(i-from_idx).name, line.at(i));
    }
}

}
}

#endif
