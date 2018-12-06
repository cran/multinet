/**
 *
 */

#ifndef UU_NET_IO_WRITE_COMMON_H_
#define UU_NET_IO_WRITE_COMMON_H_

#include <string>
#include <vector>
#include "core/attributes/Attribute.h"
#include "core/attributes/AttributeStore.h"
#include "core/utils/CSVReader.h"
#include "core/datastructures/Object.h"
#include "net/datastructures/Graph.h"
#include "net/datastructures/Vertex.h"
#include "net/datastructures/Edge.h"
#include "tnet/datastructures/TemporalAttributeStore.h"

namespace uu {
namespace net {

/**
 * Utility function to write attribute definitions.
 * @param store attribute store where the attribute values are saved
 * @param id identifier of the object for which the attributes should be read
 * @param attr_types vector with the expected types of attributes
 * @param attr_names vector with the expected names of attributes
 * @param line a vector of strings where the attribute values are stores
 * @param idx the index of the first attribute value in the line vector
 * @param line_number current line in the input file, for error management
 */
void
write_attr_defs(std::ofstream& outfile,
                char separator,
                const core::AttributeStoreSharedPtr& store);

/**
 * Utility function to write attribute values.
 * @param outfile output file
 * @param separator character to separate fields
 * @param store attribute store where the attribute values are saved
 * @param id identifier of the object for which the attributes should be written
 */
void
write_attr_values(
    std::ofstream& outfile,
    char separator,
    const core::AttributeStoreSharedPtr& store,
    core::ObjectId id);

/*
template <typename OT>
void
read_attributes(
    int from_idx, std::shared_ptr<AttributeStore<OT> >& as, std::shared_ptr<OT>& obj, const std::vector<std::string>& fields, const std::vector<core::Attribute>& attributes,
    size_t line_number);

template <typename OT>
void
read_attributes(
    int from_idx, std::shared_ptr<TemporalAttributeStore<OT> >& as, std::shared_ptr<OT>& obj, const std::vector<std::string>& fields, const std::vector<core::Attribute>& attributes,
    size_t line_number);
*/

} // namespace net
} // namespace uu

#endif
