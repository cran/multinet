#include "core/arules/bottom_up_search.hpp"
#include "core/arules/join_itemsets.hpp"
#include "core/arules/generate_subsets.hpp"

namespace uu {
namespace core {

void
bottom_up_search(
     const std::vector<freq_itemset>& atoms,
     std::vector<freq_itemset>& freq,
     std::vector<freq_itemset>& closed,
     std::map<std::vector<size_t>, std::vector<freq_itemset>>& freq_supersets,
     size_t min_sup,
     size_t min_size
     )
{
    std::vector<std::vector<freq_itemset>> T;
    for (size_t fr1 = 0; fr1 < atoms.size(); fr1++)
    {
        std::vector<freq_itemset> new_atoms;
        for (size_t fr2 = fr1 + 1; fr2 < atoms.size(); fr2++)
        {
            auto fr = join_itemsets(atoms[fr1], atoms[fr2]);
            if (fr.s >= min_sup)
            {
                new_atoms.push_back(fr);
                if (min_size <= fr.items.size()) freq.push_back(fr);
                // add to frequentset graphs
                for (auto items: generate_subsets(fr.items))
                {
                    auto it = freq_supersets.find(items);
                    if (it == freq_supersets.end())
                    {
                        std::vector<freq_itemset> v;
                        v.push_back(fr);
                        freq_supersets[items] = v;
                    }
                    else {
                        it->second.push_back(fr);
                    }
                }
            }
        }
        if (new_atoms.size() > 0)
        {
            T.push_back(new_atoms);
        }
        // Is this also closed?
        if (min_size > atoms[fr1].items.size()) continue;
        bool is_closed = true;
        for (auto superset: freq_supersets[atoms[fr1].items])
        {
            if (superset.s == atoms[fr1].s)
            {
                is_closed = false;
                break;
            }
        }
        if (is_closed)
        {
            closed.push_back(atoms[fr1]);
        }
    }
    for (auto new_atoms: T)
    {
        bottom_up_search(new_atoms, freq, closed, freq_supersets, min_sup, min_size);
    }
}


}
}
