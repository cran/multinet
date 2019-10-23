/**
 * History:
 * - 2018.03.19 file created, with code taken from other existing files.
 */

#ifndef UU_WNET_DATASTRUCTURES_STORES_WEIGHTS_H_
#define UU_WNET_DATASTRUCTURES_STORES_WEIGHTS_H_

#include <memory>
#include "net/datastructures/stores2/AttributeStore.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"

namespace uu {
namespace net {


const
std::string
kDEFAULT_WEIGHT_ATTRIBUTE_NAME = "uu::net::weight";

template <typename OT>
class Weights
{

  protected:

    /**
     * Constructor.
     */
    Weights(AttributeStore<OT>* attr);

  public:

    /**
     *
     */
    void
    set_weight(
        const OT* obj,
        double val
    );

    /**
     *
     */
    core::Value<double>
    get_weight(
        const OT* obj
    ) const;

    /**
     * If the AttributeStore used by this class to store the weights contains other attributes
     * of type double, this function can be used so that subsequent calls to get_weight and
     * set_weight will get/set values from one of these attributes.
     * @param name the name of the attribute to be used from now on to set/get weights
     * @throw ElementNotFoundException if a double-typed attribute with that name does not exist
     */
    void
    set_weight_attribute(
        const std::string& name
    );


    /*
    void
    read_attributes(
        std::shared_ptr<OT>& v,
        const std::vector<std::string>& fields,
        size_t offset,
        const std::vector<core::Attribute>& attributes,
        size_t line_number);
    */

  private:

    AttributeStore<OT>* attr_;
    std::string weight_attribute_;

};



template <typename OT>
Weights<OT>::
Weights(AttributeStore<OT>* attr)
{
    attr_ = attr;
    weight_attribute_ = kDEFAULT_WEIGHT_ATTRIBUTE_NAME;
    attr_->add(core::Attribute::create(weight_attribute_, core::AttributeType::DOUBLE));
}


template <typename OT>
void
Weights<OT>::
set_weight(
    const OT* obj,
    double weight
)
{
    attr_->set_double(obj, weight_attribute_, weight);
}


template <typename OT>
core::Value<double>
Weights<OT>::
get_weight(
    const OT* obj
) const
{
    return attr_->get_double(obj, weight_attribute_);
}


template <typename OT>
void
Weights<OT>::
set_weight_attribute(
    const std::string& name
)
{
    if (!attr_->get(name))
    {
        throw core::ElementNotFoundException("attribute " + name);
    }

    weight_attribute_ = name;
}

/*
template <typename OT>
void
Weights<OT>::
read_attributes(
const OT* v,
const std::vector<std::string>& fields,
size_t offset,
const std::vector<core::Attribute>& attributes,
size_t line_number)
{

int idx = offset;

if (offset+attributes.size()>fields.size())
    throw core::WrongFormatException("Line " +
                                     std::to_string(line_number) +
                                     ": not enough attribute values");

set_as_string(weight_attribute_,v,fields[idx]);
idx++;

for (core::Attribute attribute: attributes)
{
    set_as_string(attribute.name(),v,fields[idx]);
    idx++;
}
}
*/

}
}

#endif
