namespace uu {
namespace net {


template <typename COMM>
double
nmi(
    const COMM& com1,
    const COMM& com2,
    int n
)
{
    double entropy_c1 = 0;

    for (auto community: *com1)
    {
        int size1 = community->size();

        if (size1 == 0)
        {
            continue;
        }

        entropy_c1 -= (double)size1/n * std::log2((double)size1/n);
    }

    double entropy_c2 = 0;

    for (auto community: *com2)
    {
        int size2 = community->size();

        if (size2 == 0)
        {
            continue;
        }

        entropy_c2 -= (double)size2/n * std::log2((double)size2/n);
    }

    double info = 0;

    for (auto community1: *com1)
    {
        for (auto community2: *com2)
        {
            // intersection - @todo call some existing function...
            size_t common_nodes = 0;

            for (auto v: *community1)
            {
                if (community2->contains(v))
                {
                    common_nodes++;
                }
            }

            int size1 = community1->size();
            int size2 = community2->size();

            if (size1==0 || size2==0 || common_nodes==0)
            {
                continue;
            }

            info += (double)common_nodes/n * std::log2((double)n*common_nodes/(size1*size2));
        }
    }

    return info/((entropy_c1+entropy_c2)/2);
}

}
}
