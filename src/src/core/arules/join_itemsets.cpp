#include "core/arules/join_itemsets.hpp"
#include "core/arules/join_items.hpp"
#include "core/arules/intersect_tids.hpp"

namespace uu {
namespace core {

freq_itemset
join_itemsets(
              const freq_itemset& fr1,
              const freq_itemset& fr2
              )
{
    auto items = join_items(fr1.items, fr2.items);
    auto tids = intersect_tids(fr1.tids, fr2.tids);
    return freq_itemset(items, tids);
}

}
}
