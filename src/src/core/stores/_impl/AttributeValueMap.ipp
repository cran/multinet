namespace uu {
namespace core {

template <typename ID>
void
AttributeValueMap<ID>::
set_as_string(
    ID oid,
    const std::string& attribute_name,
    const std::string& value
)
{

    const Attribute* att = get(attribute_name);

    if (!att)
    {
        throw ElementNotFoundException("attribute " + attribute_name);
    }

    switch (att->type)
    {
    case AttributeType::NUMERIC:
    case AttributeType::DOUBLE:
        set_double(oid,attribute_name,core::to_double(value));
        break;

    case AttributeType::INTEGER:
        set_int(oid,attribute_name,core::to_int(value));
        break;

    case AttributeType::STRING:
        set_string(oid,attribute_name,value);
        break;

    case AttributeType::TIME:
        set_time(oid,attribute_name, core::to_time(value));
        break;

    case AttributeType::TEXT:
        set_text(oid, attribute_name, core::to_text(value));
        break;

    case AttributeType::INTEGERSET:
    case AttributeType::DOUBLESET:
    case AttributeType::STRINGSET:
    case AttributeType::TIMESET:
        throw OperationNotSupportedException("cannot set a value for a set attribute");
    }
}


template <typename ID>
void
AttributeValueMap<ID>::
add_as_string(
    ID oid,
    const std::string& attribute_name,
    const std::string& value
)
{

    const Attribute* att = get(attribute_name);

    if (!att)
    {
        throw ElementNotFoundException("attribute " + attribute_name);
    }

    switch (att->type)
    {
    case AttributeType::DOUBLESET:
        add_double(oid, attribute_name, core::to_double(value));
        break;

    case AttributeType::INTEGERSET:
        add_int(oid, attribute_name, core::to_int(value));
        break;

    case AttributeType::STRINGSET:
        add_string(oid, attribute_name, value);
        break;

    case AttributeType::TIMESET:
        add_time(oid, attribute_name, core::to_time(value));
        break;

    case AttributeType::INTEGER:
    case AttributeType::NUMERIC: // for backward compatibility
    case AttributeType::DOUBLE:
    case AttributeType::STRING:
    case AttributeType::TIME:
    case AttributeType::TEXT:
        throw OperationNotSupportedException("cannot add a value for a non-set attribute");
    }
}


template <typename ID>
const Attribute*
AttributeValueMap<ID>::
add(
    std::string name,
    AttributeType t
)
{
    std::unique_ptr<Attribute> a = std::make_unique<Attribute>(name, t);
    const Attribute* a_ptr = a.get();
    add(std::move(a));
    return a_ptr;
}

template <typename ID>
Value<std::string>
AttributeValueMap<ID>::
get_as_string(
    ID oid,
    const std::string& attribute_name
) const
{
    const Attribute* att = get(attribute_name);

    if (!att)
    {
        throw ElementNotFoundException("attribute " + attribute_name);
    }

    switch (att->type)
    {

    case AttributeType::NUMERIC:
    case AttributeType::DOUBLE:
        return core::to_string(get_double(oid,att->name));

    case AttributeType::INTEGER:
        return core::to_string(get_int(oid,att->name));

    case AttributeType::STRING:
        return get_string(oid,att->name);

    case AttributeType::TIME:
        return core::to_string(get_time(oid, att->name));

    case AttributeType::TEXT:
        return core::to_string(get_text(oid, att->name));

    case AttributeType::INTEGERSET:
    case AttributeType::DOUBLESET:
    case AttributeType::STRINGSET:
    case AttributeType::TIMESET:
        throw OperationNotSupportedException("cannot set a value for a set attribute");
    }
}


}
}
