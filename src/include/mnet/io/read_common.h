/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_READCOMMON_H_
#define UU_MNET_IO_READCOMMON_H_

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
#include "mnet/io/MultilayerMetadata.h"
#include "mnet/io/MultilayerIOFileSection.h"

namespace uu {
namespace net {

/**
 * Checks if the input line indicates the start of a new section.
 */
bool
new_multilayer_section_start(
    const std::string& line
);

/**
 * Returns the new section starting on this input line.
 */
MultilayerIOFileSection
get_multilayer_section(
    const std::string& line
);


MultilayerMetadata
read_multilayer_metadata(
    const std::string& infile,
    char separator
);


template <typename ML>
void
read_multilayer_data(
    ML* ml,
    const MultilayerMetadata& meta,
    const std::string& infile,
    char separator
);

/**
 * Utility function to read ...
 * @param graph_type...
 * @param line_number current line in the input file, for error management
 */
void
read_multilayer_type(
    const std::string& graph_type,
    MultilayerMetadata& meta,
    size_t line_number
);

/*
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
*/

template <typename ML>
void
read_multilayer_data(
    ML* ml,
    const MultilayerMetadata& meta,
    const std::string& infile,
    char separator
)
{

    // PASS 2: read the data

    core::CSVReader csv;
    csv.trim_fields(true);
    csv.set_field_separator(separator);
    csv.set_comment("--");
    csv.open(infile);

    MultilayerIOFileSection section = MultilayerIOFileSection::INTRALAYER_EDGES;

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
        if (new_multilayer_section_start(line))
        {
            section = get_multilayer_section(line);
            //fields = csv.get_next();
            continue;
        }

        switch (section)
        {
        case MultilayerIOFileSection::VERTICES:
        {
            read_vertex(ml, fields, meta, csv.row_num());
            break;
        }

        case MultilayerIOFileSection::INTRALAYER_VERTICES:
        {
            read_intralayer_vertex(ml, fields, meta, csv.row_num());
            break;
        }

        case MultilayerIOFileSection::INTRALAYER_EDGES:
        {
            read_intralayer_edge(ml, fields, meta, csv.row_num());
            break;
        }

        case MultilayerIOFileSection::INTERLAYER_EDGES:
        {
            read_interlayer_edge(ml, fields, meta, csv.row_num());
            break;
        }

        default:
            break;
        }
    }

}



template <typename ML, typename G>
G*
read_layer(
    ML* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}

template <typename ML, typename G>
G*
read_layer(
    ML* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}

template <typename ML>
void
read_vertex(
    ML* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}

template <typename ML>
void
read_intralayer_vertex(
    ML* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}

template <typename ML>
void
read_intralayer_edge(
    ML* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}

template <typename ML>
void
read_interlayer_edge(
    ML* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::OperationNotSupportedException("Network type not supported (IO)");
}


}
}

#endif
