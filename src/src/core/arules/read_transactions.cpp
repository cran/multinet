#include "core/arules/read_transactions.hpp"
#include "core/utils/CSVReader.hpp"

namespace uu {
namespace core {

void
read_transactions(
                  const std::string& file_name,
                  std::unordered_map<size_t,std::string>& trans,
                  std::unordered_map<size_t,std::string>& items,
                  std::vector<std::vector<size_t>>& data,
                  bool has_tid
                  )
{
    std::unordered_map<std::string, size_t> trans_id;
    std::unordered_map<std::string, size_t> items_id;
    uu::core::CSVReader r;
    r.open(file_name);
    size_t tid = 0;
    size_t iid = 0;
    size_t fstart = has_tid?1:0;
    while (r.has_next())
    {
        auto row = r.get_next();
        std::string tname = has_tid?row[0]:(std::to_string(tid));
        trans_id[tname] = tid;
        trans[tid] = tname;
        for (size_t idx = fstart; idx < row.size(); idx++)
        {
            if (items_id.find(row[idx]) == items_id.end())
            {
                items_id[row[idx]] = iid;
                items[iid] = row[idx];
                iid++;
                std::vector<size_t> tids;
                data.push_back(tids);
            }
            data[items_id[row[idx]]].push_back(tid);
        }
        tid++;
    }
    r.close();
}

}
}
