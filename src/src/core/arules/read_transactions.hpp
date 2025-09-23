#ifndef UU_CORE_ARULES_READTRANSACTIONS_H_
#define UU_CORE_ARULES_READTRANSACTIONS_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace uu {
namespace core {

void
read_transactions(
      const std::string& file_name,
      std::unordered_map<std::size_t,std::string>& trans,
      std::unordered_map<std::size_t,std::string>& items,
      std::vector<std::vector<std::size_t>>& data,
      bool has_tid = false
      );

}
}

#endif
