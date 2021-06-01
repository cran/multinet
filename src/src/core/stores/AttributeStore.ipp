namespace uu {
namespace core {


template <typename OBJECT_TYPE>
AttributeStore<OBJECT_TYPE>::
AttributeStore()
{
}


template <typename OBJECT_TYPE>
void
AttributeStore<OBJECT_TYPE>::
notify_erase(
    const OBJECT_TYPE* const obj
)
{
    core::assert_not_null(obj, "AttributeStore::notify_erase", "obj");

    for (auto att: *this)
    {
        this->reset(obj, att->name);
    }
}


template <typename OBJECT_TYPE>
void
AttributeStore<OBJECT_TYPE>::
notify_add(
    const OBJECT_TYPE* const obj
)
{
    core::assert_not_null(obj, "AttributeStore::notify_add", "obj");
}


template <typename OBJECT_TYPE>
void
AttributeStore<OBJECT_TYPE>::
read_attributes(
    const OBJECT_TYPE* const obj,
    const std::vector<std::string>& fields,
    size_t offset,
    const std::vector<Attribute>& attributes,
    size_t line_number
)
{

    int idx = offset;

    if (offset+attributes.size()>fields.size())
        throw WrongFormatException("Line " +
                                   std::to_string(line_number) +
                                   ": not enough attribute values");

    for (Attribute attribute: attributes)
    {
        this->set_as_string(obj, attribute.name, fields[idx]);
        idx++;
    }
}


}
}
