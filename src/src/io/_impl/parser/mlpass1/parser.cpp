#include "io/_impl/parser/mlpass1/parser.hpp"

#include <boost/spirit/include/support_multi_pass.hpp>

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <utility>
#include "core/exceptions/FileNotFoundException.hpp"
#if defined(CRAN)
    #include <Rcpp.h>
#endif

namespace uu {
namespace net {
namespace parser {
namespace mlpass1 {

bool
parse(
    std::string const& file_name,
    MultilayerNetwork* net,
    MultilayerMetadata& meta
)
{
    std::ifstream fin(file_name);

    if (!fin.is_open())
    {
        throw core::FileNotFoundException(file_name);
    }

    fin.unsetf(std::ios::skipws);

    typedef std::istreambuf_iterator<char> base_iterator_type;
    typedef boost::spirit::multi_pass<base_iterator_type> multipass_iterator_type;

    multipass_iterator_type iter =
        boost::spirit::make_default_multi_pass(base_iterator_type(fin));
    multipass_iterator_type end = boost::spirit::make_default_multi_pass(base_iterator_type());

    using boost::spirit::x3::ascii::space;

    using boost::spirit::x3::with;
    using boost::spirit::x3::error_handler_tag;
    using error_handler_type = boost::spirit::x3::error_handler<multipass_iterator_type>;

    // Our error handler
    #if defined(CRAN)
    error_handler_type error_handler(iter, end, Rcpp::Rcout);
    #else
    error_handler_type error_handler(iter, end, std::cerr);
    #endif

    auto data = std::make_pair(net, std::ref(meta));
    auto const parser_err =
        with<parser::mlpass1::data_tag>(std::ref(data))
        [
            with<error_handler_tag>(std::ref(error_handler))
            [
                parser::mlpass1::start
            ]
        ];

    bool r = parse(iter, end, parser_err);

    return (r && iter == end);
}

}
}
}
}
