namespace uu {
namespace core {


template <typename InputIterator>
double
mean(
    InputIterator begin,
    InputIterator end
)
{
    double sum = 0;
    int n = 0;

    for (auto it=begin; it!=end; ++it)
    {
        sum += *it;
        n++;
    }

    return sum / n;
}


template <typename InputIterator>
double
stdev(
    InputIterator begin,
    InputIterator end
)
{

    // mean
    double m = mean(begin,end);

    // variance
    double variance = 0.0;

    int n = 0;

    for (auto it=begin; it!=end; ++it)
    {
        variance += (*it - m) * (*it - m);
        n++;
    }

    // The POPULATION stdev is computed: divide by n
    variance /= n;

    // standard deviation
    return std::sqrt(variance);
}


template <class T>
double
jaccard_similarity(
    const std::vector<std::unordered_set<T> >& sets
)
{
    long union_size = s_union(sets).size();

    if (union_size==0)
    {
        return 0;
    }

    long intersection_size = s_intersection(sets).size();
    return (double)intersection_size/union_size;
}


template <class T>
int
intersection_size(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
)
{
    int common_elements = 0;

    if (set1.size()<set2.size())
    {
        for (T el: set1)
        {
            if (set2.count(el)>0)
            {
                common_elements++;
            }
        }
    }

    else
    {
        for (T el: set2)
        {
            if (set1.count(el)>0)
            {
                common_elements++;
            }
        }
    }

    return common_elements;
}


template <class T>
std::unordered_set<T>
s_intersection(
    const std::vector<std::unordered_set<T> >& sets
)
{
    std::unordered_set<T> result;
    size_t idx = 0; // index of the smallest set

    for (size_t i=1; i<sets.size(); i++)
    {
        if (sets.at(i).size() < sets.at(idx).size())
        {
            idx=i;
        }
    }

    for (T element: sets.at(idx))
    {
        bool in_intersection = true;

        for (size_t i=0; i<sets.size(); i++)
        {
            if (i==idx)
            {
                continue;
            }

            if (sets.at(i).count(element)==0)
            {
                in_intersection = false;
                break;
            }
        }

        if (in_intersection)
        {
            result.insert(element);
        }
    }

    return result;
}


template <class T>
std::unordered_set<T>
s_intersection(
    const std::vector<std::set<T> >& sets
)
{
    // NOTE: it can be made more efficient exploiting sorting
    std::unordered_set<T> result;
    size_t idx = 0; // index of the smallest set

    for (size_t i=1; i<sets.size(); i++)
    {
        if (sets.at(i).size() < sets.at(idx).size())
        {
            idx=i;
        }
    }

    for (T element: sets.at(idx))
    {
        bool in_intersection = true;

        for (size_t i=0; i<sets.size(); i++)
        {
            if (i==idx)
            {
                continue;
            }

            if (sets.at(i).count(element)==0)
            {
                in_intersection = false;
                break;
            }
        }

        if (in_intersection)
        {
            result.insert(element);
        }
    }

    return result;
}



template <class T>
std::unordered_set<T>
s_intersection(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
)
{
    std::vector<std::unordered_set<T> > sets({set1,set2});
    return s_intersection(sets);
}


template <class T>
std::unordered_set<T>
s_intersection(
    const std::set<T>& set1,
    const std::set<T>& set2
)
{
    std::vector<std::set<T> > sets({set1,set2});
    return s_intersection(sets);
}


template <class T>
std::unordered_set<T>
s_intersection(
    const std::set<T>& set1,
    const std::unordered_set<T>& set2
)
{
    std::unordered_set<T> result;

    for (T element: set1)
    {
        if (set2.count(element)>0)
        {
            result.insert(element);
        }
    }

    return result;
}


template <class T>
std::unordered_set<T>
s_intersection(
    const std::unordered_set<T>& set1,
    const std::set<T>& set2
)
{
    std::unordered_set<T> result;

    for (T element: set2)
    {
        if (set1.count(element)>0)
        {
            result.insert(element);
        }
    }

    return result;
}



template <class T>
std::unordered_set<T>
s_union(
    const std::vector<std::unordered_set<T> >& sets
)
{
    std::unordered_set<T> result;

    for (std::unordered_set<T> S: sets)
    {
        result.insert(S.begin(), S.end());
    }

    return result;
}


template <class T>
std::unordered_set<T>
s_union(
    const std::vector<std::set<T> >& sets
)
{
    std::unordered_set<T> result;

    for (std::set<T> S: sets)
    {
        result.insert(S.begin(), S.end());
    }

    return result;
}


template <class T>
std::unordered_set<T>
s_union(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
)
{
    std::unordered_set<T> result;
    result.insert(set1.begin(), set1.end());
    result.insert(set2.begin(), set2.end());
    return result;
}


template <class T>
std::unordered_set<T>
s_union(
    const std::set<T>& set1,
    const std::set<T>& set2
)
{
    std::unordered_set<T> result;
    result.insert(set1.begin(), set1.end());
    result.insert(set2.begin(), set2.end());
    return result;
}


}
}

