#include "io/read_multilayer_communities.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"
#include "core/exceptions/WrongFormatException.hpp"
#include "core/utils/CSVReader.hpp"
#include "objects/MLVertex.hpp"

#include <vector>
#include <set>
#include <unordered_map>

namespace uu {
namespace net {


template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    read_multilayer_communities(
                                        const std::string& infile,
                                        const M* mnet,
                                        char separator
                                    )
{
    core::assert_not_null(mnet, "read_multilayer_communities", "mnet");

    core::CSVReader csv;
    csv.trim_fields(true);
    csv.set_field_separator(separator);
    csv.open(infile);

    std::unordered_map<std::string, std::set<MLVertex> > result;


    while (csv.has_next())
    {
        auto line = csv.get_next();

        if (line.size()==3)
        {
            std::string community_id = line.at(2);
            std::string layer_name = line.at(1);
            auto l = mnet->layers()->get(layer_name);

            if (!l)
            {
                throw core::ElementNotFoundException("layer " + layer_name);
            }

            std::string actor_name = line.at(0);
            auto a = l->vertices()->get(actor_name);

            if (!a)
            {
                throw core::ElementNotFoundException("vertex " + actor_name + "@" + layer_name);
            }

            auto v = MLVertex(a,l);
            result[community_id].insert(v);
        }

        else if (line.size()==2)
        {
            std::string community_id = line.at(1);
            std::string actor_name = line.at(0);

            for (auto l: *mnet->layers())
            {
                auto a = l->vertices()->get(actor_name);

                if (!a)
                {
                    continue;
                }

                auto v = MLVertex(a,l);
                result[community_id].insert(v);
            }
        }

        else
        {
            throw core::WrongFormatException("the ground truth file must specify Actor,Layer,CommunityID or Actor,CommunityID");
        }
    }

    auto communities = std::make_unique<CommunityStructure<M>>();

    for (auto pair: result)
    {
        auto com = std::make_unique<Community<M>>();

        for (auto vertex: pair.second)
        {
            com->add(vertex);
        }

        communities->add(std::move(com));
    }

    return communities;
}

}
}
