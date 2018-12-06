/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "xnet/io/read_temporal_text_network.h"
#include "net/io/read_common.h"


namespace uu {
namespace net {

std::unique_ptr<TemporalTextNetwork>
read_temporal_text_network(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    MultilayerMetadata meta = read_multilayer_metadata(infile, ',');
    //EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph

    auto mpx = create_temporal_text_network(name);

    // @todo create layers

    // Read data (vertices, edges, attribute values)
    read_multilayer_data(mpx.get(),  meta, infile, separator);

    return mpx;

}

/*
template <>
SimpleGraph*
read_layer(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    std::string layer_name = fields.at(from_idx);

    auto layer = ml->layers()->get(layer_name);

    if (!layer)
    {
        auto ptr = uu::net::create_simple_graph(layer_name, uu::net::EdgeDir::UNDIRECTED);
        layer = ml->layers()->add(std::move(ptr));
    }

    return layer;
}


template <>
void
read_vertex(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_vertex", "ml");
    read_vertex(ml, fields, 0, line_number);
}
*/

template <>
void
read_intralayer_vertex(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{

    assert_not_null(ml, "read_intralayer_vertex", "ml");

    if (fields.at(1)=="M")
    {
        std::string txt = fields.at(2);
        auto v = read_vertex(ml->messages(), fields, 0, line_number);
        ml->messages()->vertices()->add(v);
        ml->messages()->vertices()->attr()->set_text(v, core::Text(txt));
    }

    else if (fields.at(1)=="A")
    {
        auto v = read_vertex(ml->actors(), fields, 0, line_number);
        ml->actors()->vertices()->add(v);
    }

    else
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": expected M or A as the 2nd field");
    }
}


template <>
void
read_intralayer_edge(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    throw core::WrongFormatException("Line " +
                                     std::to_string(line_number) +
                                     ": Temporal Text Networks do not allow intralayer edges");

}

template <>
void
read_interlayer_edge(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_interlayer_edge", "ml");

    if (fields.at(1)=="M" && fields.at(3)=="A")
    {
        auto msg = read_vertex(ml->messages(), fields, 0, line_number);
        auto act = read_vertex(ml->actors(), fields, 2, line_number);
        ml->interlayer_edges()->add(msg, act);
    }

    else if (fields.at(1)=="A" && fields.at(3)=="M")
    {
        auto act = read_vertex(ml->actors(), fields, 0, line_number);
        auto msg = read_vertex(ml->messages(), fields, 2, line_number);
        ml->interlayer_edges()->add(act, msg);
    }

    else
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": expected M and A (or A and M) as the 2nd and 4th fields");
    }


}


}
}
