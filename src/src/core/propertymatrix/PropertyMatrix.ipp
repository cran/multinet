namespace uu {
namespace core {


template <class STRUCTURE, class CONTEXT, class VALUE>
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
PropertyMatrix(
    long num_structures,
    long num_contexts,
    VALUE default_value
) :
    num_structures(num_structures),
    num_contexts(num_contexts),
    default_value(default_value)
{

}

template <class STRUCTURE, class CONTEXT, class VALUE>
Value<VALUE>
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
get(
    const STRUCTURE& s,
    const CONTEXT& c
) const
{
    if (data.count(c)==0)
    {
        return  Value<VALUE>(default_value,false);
    }

    if (data.at(c).count(s)==0)
    {
        return  Value<VALUE>(default_value,false);
    }

    return data.at(c).at(s);
}

template <class STRUCTURE, class CONTEXT, class VALUE>
void
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
set(
    const STRUCTURE& s,
    const CONTEXT& c,
    VALUE v
)
{
    data[c][s] = Value<VALUE>(v,false);
    _contexts.insert(c); // @todo this might slow down the function significantly - check
    _structures.insert(s);
}

template <class STRUCTURE, class CONTEXT, class VALUE>
void
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
set_na(
    const STRUCTURE& s,
    const CONTEXT& c
)
{
    Value<VALUE> v = get(s,c);

    if (!v.null)
    {
        na.inc(c);
    }

    data[c][s] =  Value<VALUE>(v.value,true);
    _contexts.insert(c); // @todo this might slow down the function significantly - check
    _structures.insert(s);
}

template <class STRUCTURE, class CONTEXT, class VALUE>
long
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
num_na(
    const CONTEXT& c
) const
{
    return na.count(c);
}

template <class STRUCTURE, class CONTEXT, class VALUE>
const
std::unordered_set<CONTEXT>&
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
contexts(
) const
{
    return _contexts;
}

template <class STRUCTURE, class CONTEXT, class VALUE>
const
std::unordered_set<STRUCTURE>&
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
structures(
) const
{
    return _structures;
}


template <class STRUCTURE, class CONTEXT, class VALUE>
VALUE
PropertyMatrix<STRUCTURE,CONTEXT,VALUE>::
get_default(
) const
{
    return default_value;
}

// rankify is defined in summarization.hpp

}
}
