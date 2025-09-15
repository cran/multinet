#ifndef UU_CORE_ARULES_JOINITEMSETS_H_
#define UU_CORE_ARULES_JOINITEMSETS_H_

#include "core/arules/freq_itemset.hpp"

namespace uu {
namespace core {

freq_itemset
join_itemsets(
              const freq_itemset& fr1,
              const freq_itemset& fr2
              );

}
}

#endif
