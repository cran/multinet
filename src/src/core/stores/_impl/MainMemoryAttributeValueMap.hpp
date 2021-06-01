#ifndef UU_CORE_ATTRIBUTES_MAINMEMORYATTRIBUTEVALUEMAP_H_
#define UU_CORE_ATTRIBUTES_MAINMEMORYATTRIBUTEVALUEMAP_H_

#include <map>
#include <unordered_map>
#include "core/stores/_impl/AttributeValueMap.hpp"

namespace uu {
namespace core {

/**
 * An AttributeValueMap implemented as main memory maps.
 */
template <typename ID>
class MainMemoryAttributeValueMap :
    public AttributeValueMap<ID>
{
  private:
    typedef AttributeValueMap<ID> super;

  public:

    MainMemoryAttributeValueMap();

    virtual
    ~MainMemoryAttributeValueMap() {}

    using super::add;
    using super::erase;
    using super::get;

    virtual
    const Attribute *
    add(
        std::unique_ptr<const Attribute> att
    ) override;


    void
    set_string(ID id,
               const std::string& attribute_name,
               const std::string& value
              ) override;


    void
    add_string(ID id,
               const std::string& attribute_name,
               const std::string& value
              ) override;


    void
    set_double(ID id,
               const std::string& attribute_name, double value
              ) override;


    void
    add_double(ID id,
               const std::string& attribute_name, double value
              ) override;


    void
    set_int(ID id,
            const std::string& attribute_name, int value
           ) override;


    void
    add_int(ID id,
            const std::string& attribute_name, int value
           ) override;


    void
    set_time(
        ID id,
        const std::string& attribute_name,
        const Time& value
    ) override;

    void
    add_time(
        ID id,
        const std::string& attribute_name,
        const Time& value
    ) override;


    void
    set_text(
        ID id,
        const std::string& attribute_name,
        const Text& value
    ) override;


    Value<std::string>
    get_string(ID id,
               const std::string& attribute_name
              ) const override;


    const std::set<std::string>&
    get_strings(ID id,
                const std::string& attribute_name
               ) const override;

    Value<double>
    get_double(ID id,
               const std::string& attribute_name
              ) const override;


    const std::set<double>&
    get_doubles(ID id,
                const std::string& attribute_name
               ) const override;


    Value<int>
    get_int(ID id,
            const std::string& attribute_name
           ) const override;


    const std::set<int>&
    get_ints(ID id,
             const std::string& attribute_name
            ) const override;

    Value<Time>
    get_time(
        ID oid,
        const std::string& attribute_name
    ) const override;


    const std::set<Time>&
    get_times(
        ID oid,
        const std::string& attribute_name
    ) const override;


    Value<Text>
    get_text(
        ID oid,
        const std::string& attribute_name
    ) const override;


    bool
    reset(
        ID oid,
        const std::string& attribute_name
    ) override;


    bool
    add_index(
        const std::string& attribute_name
    ) override;


    std::vector<ID>
    range_query_string(
        const std::string& attribute_name,
        const std::string& min_value,
        const std::string& max_value
    ) const override;


    std::vector<ID>
    range_query_int(
        const std::string& attribute_name,
        const int& min_value,
        const int& max_value
    ) const override;


    std::vector<ID>
    range_query_double(
        const std::string& attribute_name,
        const double& min_value,
        const double& max_value
    ) const override;


    std::vector<ID>
    range_query_time(
        const std::string& attribute_name,
        const Time& min_value,
        const Time& max_value
    ) const override;


    Value<double>
    get_min_double(
        const std::string& attribute_name
    ) const override;


    Value<double>
    get_max_double(
        const std::string& attribute_name
    ) const override;


    Value<int>
    get_min_int(
        const std::string& attribute_name
    ) const override;


    Value<int>
    get_max_int(
        const std::string& attribute_name
    ) const override;


    Value<std::string>
    get_min_string(
        const std::string& attribute_name
    ) const override;


    Value<std::string>
    get_max_string(
        const std::string& attribute_name
    ) const override;


    Value<Time>
    get_min_time(
        const std::string& attribute_name
    ) const override;


    Value<Time>
    get_max_time(
        const std::string& attribute_name
    ) const override;

  private:

    /* These hash maps are structured as: map[AttributeName][ID][AttributeValue] */
    std::unordered_map<std::string, std::unordered_map<ID, std::string> > string_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, std::set<std::string> > > string_set_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, double> > double_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, std::set<double> > > double_set_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, int> > int_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, std::set<int> > > int_set_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, Time> > time_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, std::set<Time> > > time_set_attribute;
    std::unordered_map<std::string, std::unordered_map<ID, Text> > text_attribute;
    /* Empty sets to be returned when no value is present */
    std::set<std::string> empty_stringset = std::set<std::string>();
    std::set<double> empty_doubleset = std::set<double>();
    std::set<int> empty_intset = std::set<int>();
    std::set<Time> empty_timeset = std::set<Time>();
    /* These hash map are structured as: map[AttributeName][AttributeValue][IDs]*/
    std::unordered_map<std::string, std::multimap<std::string, ID> > string_attribute_idx;
    std::unordered_map<std::string, std::multimap<double, ID> > double_attribute_idx;
    std::unordered_map<std::string, std::multimap<int, ID> > int_attribute_idx;
    std::unordered_map<std::string, std::multimap<Time, ID> > time_attribute_idx;
    std::unordered_map<std::string, std::multimap<Text, ID> > text_attribute_idx;
} ;

}
}

#include "MainMemoryAttributeValueMap.ipp"

#endif
