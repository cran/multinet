/**
 * History:
 * - 2018.03.19 file created, with code taken from other existing files.
 */

#ifndef UU_XNET_DATASTRUCTURES_STORES_TEXTS_H_
#define UU_XNET_DATASTRUCTURES_STORES_TEXTS_H_

#include <memory>
#include "net/datastructures/stores2/AttributeStore.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"

namespace uu {
namespace net {


const
std::string
kDEFAULT_TEXT_ATTRIBUTE_NAME = "uu::net::txt";

template <typename OT>
class Texts
{

  protected:

    /**
     * Constructor.
     */
    Texts(AttributeStore<OT>* attr);

  public:

    /**
     *
     */
    void
    set_text(
        const OT* obj,
        core::Text val
    );

    /**
     *
     */
    core::Value<core::Text>
    get_text(
        const OT* obj
    ) const;

    /**
     * If the AttributeStore used by this class to store the times contains other attributes
     * of type Time, this function can be used so that subsequent calls to get_time and
     * set_time will get/set values from one of these attributes.
     * @param name the name of the attribute to be used from now on to set/get times
     * @throw ElementNotFoundException if a Time-typed attribute with that name does not exist
     */
    void
    set_text_attribute(
        const std::string& name
    );


  private:

    AttributeStore<OT>* attr_;
    std::string text_attribute_;

};



template <typename OT>
Texts<OT>::
Texts(AttributeStore<OT>* attr)
{
    attr_ = attr;
    text_attribute_ = kDEFAULT_TEXT_ATTRIBUTE_NAME;
    attr_->add(text_attribute_, core::AttributeType::TEXT);
}


template <typename OT>
void
Texts<OT>::
set_text(
    const OT* obj,
    core::Text val
)
{
    attr_->set_text(obj, text_attribute_, val);
}


template <typename OT>
core::Value<core::Text>
Texts<OT>::
get_text(
    const OT* obj
) const
{
    return attr_->get_text(obj, text_attribute_);
}


template <typename OT>
void
Texts<OT>::
set_text_attribute(
    const std::string& name
)
{
    if (!attr_->get(name))
    {
        throw core::ElementNotFoundException("attribute " + name);
    }

    text_attribute_ = name;
}


}
}

#endif
