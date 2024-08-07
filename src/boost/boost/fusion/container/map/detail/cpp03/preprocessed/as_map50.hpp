/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost {
namespace fusion {
namespace detail {
BOOST_FUSION_BARRIER_BEGIN
template <bool is_assoc>
struct as_map<1, is_assoc>
{
    template <typename I0>
    struct apply
    {

        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef map<T0> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;

        return result(gen::D0::call(i0));
    }
};
template <bool is_assoc>
struct as_map<2, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef map<T0, T1> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        return result(gen::D0::call(i0), gen::D1::call(i1));
    }
};
template <bool is_assoc>
struct as_map<3, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef map<T0, T1, T2> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2));
    }
};
template <bool is_assoc>
struct as_map<4, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef map<T0, T1, T2, T3> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3));
    }
};
template <bool is_assoc>
struct as_map<5, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef map<T0, T1, T2, T3, T4> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4));
    }
};
template <bool is_assoc>
struct as_map<6, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef map<T0, T1, T2, T3, T4, T5> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5));
    }
};
template <bool is_assoc>
struct as_map<7, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef map<T0, T1, T2, T3, T4, T5, T6> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6));
    }
};
template <bool is_assoc>
struct as_map<8, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7));
    }
};
template <bool is_assoc>
struct as_map<9, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8));
    }
};
template <bool is_assoc>
struct as_map<10, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9));
    }
};
template <bool is_assoc>
struct as_map<11, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10));
    }
};
template <bool is_assoc>
struct as_map<12, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11));
    }
};
template <bool is_assoc>
struct as_map<13, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12));
    }
};
template <bool is_assoc>
struct as_map<14, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13));
    }
};
template <bool is_assoc>
struct as_map<15, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14));
    }
};
template <bool is_assoc>
struct as_map<16, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15));
    }
};
template <bool is_assoc>
struct as_map<17, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16));
    }
};
template <bool is_assoc>
struct as_map<18, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17));
    }
};
template <bool is_assoc>
struct as_map<19, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18));
    }
};
template <bool is_assoc>
struct as_map<20, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19));
    }
};
template <bool is_assoc>
struct as_map<21, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20));
    }
};
template <bool is_assoc>
struct as_map<22, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21));
    }
};
template <bool is_assoc>
struct as_map<23, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22));
    }
};
template <bool is_assoc>
struct as_map<24, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23));
    }
};
template <bool is_assoc>
struct as_map<25, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24));
    }
};
template <bool is_assoc>
struct as_map<26, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25));
    }
};
template <bool is_assoc>
struct as_map<27, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26));
    }
};
template <bool is_assoc>
struct as_map<28, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27));
    }
};
template <bool is_assoc>
struct as_map<29, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28));
    }
};
template <bool is_assoc>
struct as_map<30, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29));
    }
};
template <bool is_assoc>
struct as_map<31, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30));
    }
};
template <bool is_assoc>
struct as_map<32, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31));
    }
};
template <bool is_assoc>
struct as_map<33, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32));
    }
};
template <bool is_assoc>
struct as_map<34, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33));
    }
};
template <bool is_assoc>
struct as_map<35, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34));
    }
};
template <bool is_assoc>
struct as_map<36, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35));
    }
};
template <bool is_assoc>
struct as_map<37, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36));
    }
};
template <bool is_assoc>
struct as_map<38, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37));
    }
};
template <bool is_assoc>
struct as_map<39, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38));
    }
};
template <bool is_assoc>
struct as_map<40, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39));
    }
};
template <bool is_assoc>
struct as_map<41, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40));
    }
};
template <bool is_assoc>
struct as_map<42, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41));
    }
};
template <bool is_assoc>
struct as_map<43, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42));
    }
};
template <bool is_assoc>
struct as_map<44, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43));
    }
};
template <bool is_assoc>
struct as_map<45, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44));
    }
};
template <bool is_assoc>
struct as_map<46, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef typename fusion::result_of::next<I44>::type I45;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef pair_from<I45, is_assoc> D45;
        typedef typename D45::type T45;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        typename gen::I45 i45 = fusion::next(i44);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44), gen::D45::call(i45));
    }
};
template <bool is_assoc>
struct as_map<47, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef typename fusion::result_of::next<I44>::type I45;
        typedef typename fusion::result_of::next<I45>::type I46;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef pair_from<I45, is_assoc> D45;
        typedef typename D45::type T45;
        typedef pair_from<I46, is_assoc> D46;
        typedef typename D46::type T46;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        typename gen::I45 i45 = fusion::next(i44);
        typename gen::I46 i46 = fusion::next(i45);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44), gen::D45::call(i45), gen::D46::call(i46));
    }
};
template <bool is_assoc>
struct as_map<48, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef typename fusion::result_of::next<I44>::type I45;
        typedef typename fusion::result_of::next<I45>::type I46;
        typedef typename fusion::result_of::next<I46>::type I47;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef pair_from<I45, is_assoc> D45;
        typedef typename D45::type T45;
        typedef pair_from<I46, is_assoc> D46;
        typedef typename D46::type T46;
        typedef pair_from<I47, is_assoc> D47;
        typedef typename D47::type T47;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        typename gen::I45 i45 = fusion::next(i44);
        typename gen::I46 i46 = fusion::next(i45);
        typename gen::I47 i47 = fusion::next(i46);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44), gen::D45::call(i45), gen::D46::call(i46), gen::D47::call(i47));
    }
};
template <bool is_assoc>
struct as_map<49, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef typename fusion::result_of::next<I44>::type I45;
        typedef typename fusion::result_of::next<I45>::type I46;
        typedef typename fusion::result_of::next<I46>::type I47;
        typedef typename fusion::result_of::next<I47>::type I48;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef pair_from<I45, is_assoc> D45;
        typedef typename D45::type T45;
        typedef pair_from<I46, is_assoc> D46;
        typedef typename D46::type T46;
        typedef pair_from<I47, is_assoc> D47;
        typedef typename D47::type T47;
        typedef pair_from<I48, is_assoc> D48;
        typedef typename D48::type T48;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        typename gen::I45 i45 = fusion::next(i44);
        typename gen::I46 i46 = fusion::next(i45);
        typename gen::I47 i47 = fusion::next(i46);
        typename gen::I48 i48 = fusion::next(i47);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44), gen::D45::call(i45), gen::D46::call(i46), gen::D47::call(i47), gen::D48::call(i48));
    }
};
template <bool is_assoc>
struct as_map<50, is_assoc>
{
    template <typename I0>
    struct apply
    {
        typedef typename fusion::result_of::next<I0>::type I1;
        typedef typename fusion::result_of::next<I1>::type I2;
        typedef typename fusion::result_of::next<I2>::type I3;
        typedef typename fusion::result_of::next<I3>::type I4;
        typedef typename fusion::result_of::next<I4>::type I5;
        typedef typename fusion::result_of::next<I5>::type I6;
        typedef typename fusion::result_of::next<I6>::type I7;
        typedef typename fusion::result_of::next<I7>::type I8;
        typedef typename fusion::result_of::next<I8>::type I9;
        typedef typename fusion::result_of::next<I9>::type I10;
        typedef typename fusion::result_of::next<I10>::type I11;
        typedef typename fusion::result_of::next<I11>::type I12;
        typedef typename fusion::result_of::next<I12>::type I13;
        typedef typename fusion::result_of::next<I13>::type I14;
        typedef typename fusion::result_of::next<I14>::type I15;
        typedef typename fusion::result_of::next<I15>::type I16;
        typedef typename fusion::result_of::next<I16>::type I17;
        typedef typename fusion::result_of::next<I17>::type I18;
        typedef typename fusion::result_of::next<I18>::type I19;
        typedef typename fusion::result_of::next<I19>::type I20;
        typedef typename fusion::result_of::next<I20>::type I21;
        typedef typename fusion::result_of::next<I21>::type I22;
        typedef typename fusion::result_of::next<I22>::type I23;
        typedef typename fusion::result_of::next<I23>::type I24;
        typedef typename fusion::result_of::next<I24>::type I25;
        typedef typename fusion::result_of::next<I25>::type I26;
        typedef typename fusion::result_of::next<I26>::type I27;
        typedef typename fusion::result_of::next<I27>::type I28;
        typedef typename fusion::result_of::next<I28>::type I29;
        typedef typename fusion::result_of::next<I29>::type I30;
        typedef typename fusion::result_of::next<I30>::type I31;
        typedef typename fusion::result_of::next<I31>::type I32;
        typedef typename fusion::result_of::next<I32>::type I33;
        typedef typename fusion::result_of::next<I33>::type I34;
        typedef typename fusion::result_of::next<I34>::type I35;
        typedef typename fusion::result_of::next<I35>::type I36;
        typedef typename fusion::result_of::next<I36>::type I37;
        typedef typename fusion::result_of::next<I37>::type I38;
        typedef typename fusion::result_of::next<I38>::type I39;
        typedef typename fusion::result_of::next<I39>::type I40;
        typedef typename fusion::result_of::next<I40>::type I41;
        typedef typename fusion::result_of::next<I41>::type I42;
        typedef typename fusion::result_of::next<I42>::type I43;
        typedef typename fusion::result_of::next<I43>::type I44;
        typedef typename fusion::result_of::next<I44>::type I45;
        typedef typename fusion::result_of::next<I45>::type I46;
        typedef typename fusion::result_of::next<I46>::type I47;
        typedef typename fusion::result_of::next<I47>::type I48;
        typedef typename fusion::result_of::next<I48>::type I49;
        typedef pair_from<I0, is_assoc> D0;
        typedef typename D0::type T0;
        typedef pair_from<I1, is_assoc> D1;
        typedef typename D1::type T1;
        typedef pair_from<I2, is_assoc> D2;
        typedef typename D2::type T2;
        typedef pair_from<I3, is_assoc> D3;
        typedef typename D3::type T3;
        typedef pair_from<I4, is_assoc> D4;
        typedef typename D4::type T4;
        typedef pair_from<I5, is_assoc> D5;
        typedef typename D5::type T5;
        typedef pair_from<I6, is_assoc> D6;
        typedef typename D6::type T6;
        typedef pair_from<I7, is_assoc> D7;
        typedef typename D7::type T7;
        typedef pair_from<I8, is_assoc> D8;
        typedef typename D8::type T8;
        typedef pair_from<I9, is_assoc> D9;
        typedef typename D9::type T9;
        typedef pair_from<I10, is_assoc> D10;
        typedef typename D10::type T10;
        typedef pair_from<I11, is_assoc> D11;
        typedef typename D11::type T11;
        typedef pair_from<I12, is_assoc> D12;
        typedef typename D12::type T12;
        typedef pair_from<I13, is_assoc> D13;
        typedef typename D13::type T13;
        typedef pair_from<I14, is_assoc> D14;
        typedef typename D14::type T14;
        typedef pair_from<I15, is_assoc> D15;
        typedef typename D15::type T15;
        typedef pair_from<I16, is_assoc> D16;
        typedef typename D16::type T16;
        typedef pair_from<I17, is_assoc> D17;
        typedef typename D17::type T17;
        typedef pair_from<I18, is_assoc> D18;
        typedef typename D18::type T18;
        typedef pair_from<I19, is_assoc> D19;
        typedef typename D19::type T19;
        typedef pair_from<I20, is_assoc> D20;
        typedef typename D20::type T20;
        typedef pair_from<I21, is_assoc> D21;
        typedef typename D21::type T21;
        typedef pair_from<I22, is_assoc> D22;
        typedef typename D22::type T22;
        typedef pair_from<I23, is_assoc> D23;
        typedef typename D23::type T23;
        typedef pair_from<I24, is_assoc> D24;
        typedef typename D24::type T24;
        typedef pair_from<I25, is_assoc> D25;
        typedef typename D25::type T25;
        typedef pair_from<I26, is_assoc> D26;
        typedef typename D26::type T26;
        typedef pair_from<I27, is_assoc> D27;
        typedef typename D27::type T27;
        typedef pair_from<I28, is_assoc> D28;
        typedef typename D28::type T28;
        typedef pair_from<I29, is_assoc> D29;
        typedef typename D29::type T29;
        typedef pair_from<I30, is_assoc> D30;
        typedef typename D30::type T30;
        typedef pair_from<I31, is_assoc> D31;
        typedef typename D31::type T31;
        typedef pair_from<I32, is_assoc> D32;
        typedef typename D32::type T32;
        typedef pair_from<I33, is_assoc> D33;
        typedef typename D33::type T33;
        typedef pair_from<I34, is_assoc> D34;
        typedef typename D34::type T34;
        typedef pair_from<I35, is_assoc> D35;
        typedef typename D35::type T35;
        typedef pair_from<I36, is_assoc> D36;
        typedef typename D36::type T36;
        typedef pair_from<I37, is_assoc> D37;
        typedef typename D37::type T37;
        typedef pair_from<I38, is_assoc> D38;
        typedef typename D38::type T38;
        typedef pair_from<I39, is_assoc> D39;
        typedef typename D39::type T39;
        typedef pair_from<I40, is_assoc> D40;
        typedef typename D40::type T40;
        typedef pair_from<I41, is_assoc> D41;
        typedef typename D41::type T41;
        typedef pair_from<I42, is_assoc> D42;
        typedef typename D42::type T42;
        typedef pair_from<I43, is_assoc> D43;
        typedef typename D43::type T43;
        typedef pair_from<I44, is_assoc> D44;
        typedef typename D44::type T44;
        typedef pair_from<I45, is_assoc> D45;
        typedef typename D45::type T45;
        typedef pair_from<I46, is_assoc> D46;
        typedef typename D46::type T46;
        typedef pair_from<I47, is_assoc> D47;
        typedef typename D47::type T47;
        typedef pair_from<I48, is_assoc> D48;
        typedef typename D48::type T48;
        typedef pair_from<I49, is_assoc> D49;
        typedef typename D49::type T49;
        typedef map<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48, T49> type;
    };
    template <typename Iterator>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    static typename apply<Iterator>::type
    call(Iterator const& i0)
    {
        typedef apply<Iterator> gen;
        typedef typename gen::type result;
        typename gen::I1 i1 = fusion::next(i0);
        typename gen::I2 i2 = fusion::next(i1);
        typename gen::I3 i3 = fusion::next(i2);
        typename gen::I4 i4 = fusion::next(i3);
        typename gen::I5 i5 = fusion::next(i4);
        typename gen::I6 i6 = fusion::next(i5);
        typename gen::I7 i7 = fusion::next(i6);
        typename gen::I8 i8 = fusion::next(i7);
        typename gen::I9 i9 = fusion::next(i8);
        typename gen::I10 i10 = fusion::next(i9);
        typename gen::I11 i11 = fusion::next(i10);
        typename gen::I12 i12 = fusion::next(i11);
        typename gen::I13 i13 = fusion::next(i12);
        typename gen::I14 i14 = fusion::next(i13);
        typename gen::I15 i15 = fusion::next(i14);
        typename gen::I16 i16 = fusion::next(i15);
        typename gen::I17 i17 = fusion::next(i16);
        typename gen::I18 i18 = fusion::next(i17);
        typename gen::I19 i19 = fusion::next(i18);
        typename gen::I20 i20 = fusion::next(i19);
        typename gen::I21 i21 = fusion::next(i20);
        typename gen::I22 i22 = fusion::next(i21);
        typename gen::I23 i23 = fusion::next(i22);
        typename gen::I24 i24 = fusion::next(i23);
        typename gen::I25 i25 = fusion::next(i24);
        typename gen::I26 i26 = fusion::next(i25);
        typename gen::I27 i27 = fusion::next(i26);
        typename gen::I28 i28 = fusion::next(i27);
        typename gen::I29 i29 = fusion::next(i28);
        typename gen::I30 i30 = fusion::next(i29);
        typename gen::I31 i31 = fusion::next(i30);
        typename gen::I32 i32 = fusion::next(i31);
        typename gen::I33 i33 = fusion::next(i32);
        typename gen::I34 i34 = fusion::next(i33);
        typename gen::I35 i35 = fusion::next(i34);
        typename gen::I36 i36 = fusion::next(i35);
        typename gen::I37 i37 = fusion::next(i36);
        typename gen::I38 i38 = fusion::next(i37);
        typename gen::I39 i39 = fusion::next(i38);
        typename gen::I40 i40 = fusion::next(i39);
        typename gen::I41 i41 = fusion::next(i40);
        typename gen::I42 i42 = fusion::next(i41);
        typename gen::I43 i43 = fusion::next(i42);
        typename gen::I44 i44 = fusion::next(i43);
        typename gen::I45 i45 = fusion::next(i44);
        typename gen::I46 i46 = fusion::next(i45);
        typename gen::I47 i47 = fusion::next(i46);
        typename gen::I48 i48 = fusion::next(i47);
        typename gen::I49 i49 = fusion::next(i48);
        return result(gen::D0::call(i0), gen::D1::call(i1), gen::D2::call(i2), gen::D3::call(i3), gen::D4::call(i4), gen::D5::call(i5), gen::D6::call(i6), gen::D7::call(i7), gen::D8::call(i8), gen::D9::call(i9), gen::D10::call(i10), gen::D11::call(i11), gen::D12::call(i12), gen::D13::call(i13), gen::D14::call(i14), gen::D15::call(i15), gen::D16::call(i16), gen::D17::call(i17), gen::D18::call(i18), gen::D19::call(i19), gen::D20::call(i20), gen::D21::call(i21), gen::D22::call(i22), gen::D23::call(i23), gen::D24::call(i24), gen::D25::call(i25), gen::D26::call(i26), gen::D27::call(i27), gen::D28::call(i28), gen::D29::call(i29), gen::D30::call(i30), gen::D31::call(i31), gen::D32::call(i32), gen::D33::call(i33), gen::D34::call(i34), gen::D35::call(i35), gen::D36::call(i36), gen::D37::call(i37), gen::D38::call(i38), gen::D39::call(i39), gen::D40::call(i40), gen::D41::call(i41), gen::D42::call(i42), gen::D43::call(i43), gen::D44::call(i44), gen::D45::call(i45), gen::D46::call(i46), gen::D47::call(i47), gen::D48::call(i48), gen::D49::call(i49));
    }
};
BOOST_FUSION_BARRIER_END
}
}
}
