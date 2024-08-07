/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost {
namespace fusion {
struct vector_tag;
struct fusion_sequence_tag;
struct random_access_traversal_tag;
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
struct vector_data31
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data31()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data31(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data31(
        vector_data31&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data31(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data31(
        vector_data31 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data31&
    operator=(vector_data31 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data31
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        return vector_data31(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data31
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        return vector_data31(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
struct vector31
    : vector_data31<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30>
    , sequence_base<vector31<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> >
{
    typedef vector31<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> this_type;
    typedef vector_data31<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> base_type;
    typedef mpl::vector31<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<31> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector31(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector31(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31(vector31&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31(vector31 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31&
    operator=(vector31 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31&
    operator=(vector31&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector31(
        vector31<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector31(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector31(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector31&
    operator=(vector31<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
struct vector_data32
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data32()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data32(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data32(
        vector_data32&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data32(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data32(
        vector_data32 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data32&
    operator=(vector_data32 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data32
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        return vector_data32(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data32
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        return vector_data32(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
struct vector32
    : vector_data32<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31>
    , sequence_base<vector32<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> >
{
    typedef vector32<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> this_type;
    typedef vector_data32<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> base_type;
    typedef mpl::vector32<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<32> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector32(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector32(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32(vector32&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32(vector32 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32&
    operator=(vector32 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32&
    operator=(vector32&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector32(
        vector32<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector32(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector32(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector32&
    operator=(vector32<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
struct vector_data33
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data33()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data33(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data33(
        vector_data33&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data33(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data33(
        vector_data33 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data33&
    operator=(vector_data33 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data33
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        return vector_data33(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data33
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        return vector_data33(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
struct vector33
    : vector_data33<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32>
    , sequence_base<vector33<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> >
{
    typedef vector33<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> this_type;
    typedef vector_data33<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> base_type;
    typedef mpl::vector33<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<33> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector33(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector33(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33(vector33&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33(vector33 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33&
    operator=(vector33 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33&
    operator=(vector33&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector33(
        vector33<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector33(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector33(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector33&
    operator=(vector33<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33>
struct vector_data34
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data34()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data34(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data34(
        vector_data34&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data34(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data34(
        vector_data34 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data34&
    operator=(vector_data34 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data34
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        return vector_data34(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data34
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        return vector_data34(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33>
struct vector34
    : vector_data34<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33>
    , sequence_base<vector34<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> >
{
    typedef vector34<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> this_type;
    typedef vector_data34<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> base_type;
    typedef mpl::vector34<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<34> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector34(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector34(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34(vector34&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34(vector34 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34&
    operator=(vector34 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34&
    operator=(vector34&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector34(
        vector34<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector34(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector34(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector34&
    operator=(vector34<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
struct vector_data35
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data35()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data35(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data35(
        vector_data35&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data35(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data35(
        vector_data35 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data35&
    operator=(vector_data35 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data35
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        return vector_data35(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data35
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        return vector_data35(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
struct vector35
    : vector_data35<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34>
    , sequence_base<vector35<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> >
{
    typedef vector35<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> this_type;
    typedef vector_data35<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> base_type;
    typedef mpl::vector35<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<35> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector35(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector35(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35(vector35&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35(vector35 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35&
    operator=(vector35 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35&
    operator=(vector35&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector35(
        vector35<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector35(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector35(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector35&
    operator=(vector35<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35>
struct vector_data36
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data36()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34(), m35() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data36(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)), m35(std::forward<U35>( arg35)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data36(
        vector_data36&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)), m35(std::forward<T35>( other.m35)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data36(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34), m35(arg35) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data36(
        vector_data36 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34), m35(other.m35) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data36&
    operator=(vector_data36 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data36
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        return vector_data36(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data36
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        return vector_data36(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
    T35 m35;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35>
struct vector36
    : vector_data36<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35>
    , sequence_base<vector36<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> >
{
    typedef vector36<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> this_type;
    typedef vector_data36<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> base_type;
    typedef mpl::vector36<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<36> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector36(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector36(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34), std::forward<U35>( arg35)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36(vector36&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36(vector36 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36&
    operator=(vector36 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36&
    operator=(vector36&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        this->m35 = std::forward< T35>(vec.m35);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector36(
        vector36<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34, vec.m35) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector36(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector36(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector36&
    operator=(vector36<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        this->m35 = *i35;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T35>::type at_impl(mpl::int_<35>)
    {
        return this->m35;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T35>::type>::type at_impl(mpl::int_<35>) const
    {
        return this->m35;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
struct vector_data37
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data37()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34(), m35(), m36() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data37(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)), m35(std::forward<U35>( arg35)), m36(std::forward<U36>( arg36)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data37(
        vector_data37&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)), m35(std::forward<T35>( other.m35)), m36(std::forward<T36>( other.m36)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data37(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34), m35(arg35), m36(arg36) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data37(
        vector_data37 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34), m35(other.m35), m36(other.m36) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data37&
    operator=(vector_data37 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data37
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        return vector_data37(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data37
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        return vector_data37(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
    T35 m35;
    T36 m36;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
struct vector37
    : vector_data37<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36>
    , sequence_base<vector37<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> >
{
    typedef vector37<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> this_type;
    typedef vector_data37<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> base_type;
    typedef mpl::vector37<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<37> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector37(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector37(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34), std::forward<U35>( arg35), std::forward<U36>( arg36)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37(vector37&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37(vector37 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37&
    operator=(vector37 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37&
    operator=(vector37&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        this->m35 = std::forward< T35>(vec.m35);
        this->m36 = std::forward< T36>(vec.m36);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector37(
        vector37<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34, vec.m35, vec.m36) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector37(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector37(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector37&
    operator=(vector37<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        this->m35 = *i35;
        this->m36 = *i36;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T35>::type at_impl(mpl::int_<35>)
    {
        return this->m35;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T35>::type>::type at_impl(mpl::int_<35>) const
    {
        return this->m35;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T36>::type at_impl(mpl::int_<36>)
    {
        return this->m36;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T36>::type>::type at_impl(mpl::int_<36>) const
    {
        return this->m36;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37>
struct vector_data38
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data38()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34(), m35(), m36(), m37() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data38(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)), m35(std::forward<U35>( arg35)), m36(std::forward<U36>( arg36)), m37(std::forward<U37>( arg37)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data38(
        vector_data38&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)), m35(std::forward<T35>( other.m35)), m36(std::forward<T36>( other.m36)), m37(std::forward<T37>( other.m37)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data38(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34), m35(arg35), m36(arg36), m37(arg37) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data38(
        vector_data38 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34), m35(other.m35), m36(other.m36), m37(other.m37) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data38&
    operator=(vector_data38 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data38
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        return vector_data38(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data38
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        return vector_data38(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
    T35 m35;
    T36 m36;
    T37 m37;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37>
struct vector38
    : vector_data38<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37>
    , sequence_base<vector38<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> >
{
    typedef vector38<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> this_type;
    typedef vector_data38<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> base_type;
    typedef mpl::vector38<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<38> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector38(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector38(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34), std::forward<U35>( arg35), std::forward<U36>( arg36), std::forward<U37>( arg37)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38(vector38&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38(vector38 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38&
    operator=(vector38 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38&
    operator=(vector38&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        this->m35 = std::forward< T35>(vec.m35);
        this->m36 = std::forward< T36>(vec.m36);
        this->m37 = std::forward< T37>(vec.m37);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector38(
        vector38<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34, vec.m35, vec.m36, vec.m37) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector38(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector38(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector38&
    operator=(vector38<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        this->m35 = *i35;
        this->m36 = *i36;
        this->m37 = *i37;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T35>::type at_impl(mpl::int_<35>)
    {
        return this->m35;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T35>::type>::type at_impl(mpl::int_<35>) const
    {
        return this->m35;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T36>::type at_impl(mpl::int_<36>)
    {
        return this->m36;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T36>::type>::type at_impl(mpl::int_<36>) const
    {
        return this->m36;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T37>::type at_impl(mpl::int_<37>)
    {
        return this->m37;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T37>::type>::type at_impl(mpl::int_<37>) const
    {
        return this->m37;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
struct vector_data39
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data39()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34(), m35(), m36(), m37(), m38() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data39(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37, U38 && arg38
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)), m35(std::forward<U35>( arg35)), m36(std::forward<U36>( arg36)), m37(std::forward<U37>( arg37)), m38(std::forward<U38>( arg38)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data39(
        vector_data39&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)), m35(std::forward<T35>( other.m35)), m36(std::forward<T36>( other.m36)), m37(std::forward<T37>( other.m37)), m38(std::forward<T38>( other.m38)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data39(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37, typename detail::call_param<T38 >::type arg38)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34), m35(arg35), m36(arg36), m37(arg37), m38(arg38) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data39(
        vector_data39 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34), m35(other.m35), m36(other.m36), m37(other.m37), m38(other.m38) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data39&
    operator=(vector_data39 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        this->m38 = vec.m38;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data39
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        return vector_data39(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37, *i38);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data39
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        return vector_data39(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37, *i38);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
    T35 m35;
    T36 m36;
    T37 m37;
    T38 m38;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
struct vector39
    : vector_data39<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38>
    , sequence_base<vector39<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> >
{
    typedef vector39<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> this_type;
    typedef vector_data39<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> base_type;
    typedef mpl::vector39<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<39> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector39(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37, typename detail::call_param<T38 >::type arg38)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector39(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37, U38 && arg38)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34), std::forward<U35>( arg35), std::forward<U36>( arg36), std::forward<U37>( arg37), std::forward<U38>( arg38)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39(vector39&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39(vector39 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39&
    operator=(vector39 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39&
    operator=(vector39&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        this->m35 = std::forward< T35>(vec.m35);
        this->m36 = std::forward< T36>(vec.m36);
        this->m37 = std::forward< T37>(vec.m37);
        this->m38 = std::forward< T38>(vec.m38);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector39(
        vector39<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34, vec.m35, vec.m36, vec.m37, vec.m38) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector39(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector39(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector39&
    operator=(vector39<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        this->m38 = vec.m38;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        this->m35 = *i35;
        this->m36 = *i36;
        this->m37 = *i37;
        this->m38 = *i38;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T35>::type at_impl(mpl::int_<35>)
    {
        return this->m35;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T35>::type>::type at_impl(mpl::int_<35>) const
    {
        return this->m35;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T36>::type at_impl(mpl::int_<36>)
    {
        return this->m36;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T36>::type>::type at_impl(mpl::int_<36>) const
    {
        return this->m36;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T37>::type at_impl(mpl::int_<37>)
    {
        return this->m37;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T37>::type>::type at_impl(mpl::int_<37>) const
    {
        return this->m37;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T38>::type at_impl(mpl::int_<38>)
    {
        return this->m38;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T38>::type>::type at_impl(mpl::int_<38>) const
    {
        return this->m38;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39>
struct vector_data40
{
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data40()
        : m0(), m1(), m2(), m3(), m4(), m5(), m6(), m7(), m8(), m9(), m10(), m11(), m12(), m13(), m14(), m15(), m16(), m17(), m18(), m19(), m20(), m21(), m22(), m23(), m24(), m25(), m26(), m27(), m28(), m29(), m30(), m31(), m32(), m33(), m34(), m35(), m36(), m37(), m38(), m39() {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data40(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37, U38 && arg38, U39 && arg39
                  , typename boost::enable_if<is_convertible<U0, T0> >::type* = 0
                 )
        : m0(std::forward<U0>( arg0)), m1(std::forward<U1>( arg1)), m2(std::forward<U2>( arg2)), m3(std::forward<U3>( arg3)), m4(std::forward<U4>( arg4)), m5(std::forward<U5>( arg5)), m6(std::forward<U6>( arg6)), m7(std::forward<U7>( arg7)), m8(std::forward<U8>( arg8)), m9(std::forward<U9>( arg9)), m10(std::forward<U10>( arg10)), m11(std::forward<U11>( arg11)), m12(std::forward<U12>( arg12)), m13(std::forward<U13>( arg13)), m14(std::forward<U14>( arg14)), m15(std::forward<U15>( arg15)), m16(std::forward<U16>( arg16)), m17(std::forward<U17>( arg17)), m18(std::forward<U18>( arg18)), m19(std::forward<U19>( arg19)), m20(std::forward<U20>( arg20)), m21(std::forward<U21>( arg21)), m22(std::forward<U22>( arg22)), m23(std::forward<U23>( arg23)), m24(std::forward<U24>( arg24)), m25(std::forward<U25>( arg25)), m26(std::forward<U26>( arg26)), m27(std::forward<U27>( arg27)), m28(std::forward<U28>( arg28)), m29(std::forward<U29>( arg29)), m30(std::forward<U30>( arg30)), m31(std::forward<U31>( arg31)), m32(std::forward<U32>( arg32)), m33(std::forward<U33>( arg33)), m34(std::forward<U34>( arg34)), m35(std::forward<U35>( arg35)), m36(std::forward<U36>( arg36)), m37(std::forward<U37>( arg37)), m38(std::forward<U38>( arg38)), m39(std::forward<U39>( arg39)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data40(
        vector_data40&& other)
        : m0(std::forward<T0>( other.m0)), m1(std::forward<T1>( other.m1)), m2(std::forward<T2>( other.m2)), m3(std::forward<T3>( other.m3)), m4(std::forward<T4>( other.m4)), m5(std::forward<T5>( other.m5)), m6(std::forward<T6>( other.m6)), m7(std::forward<T7>( other.m7)), m8(std::forward<T8>( other.m8)), m9(std::forward<T9>( other.m9)), m10(std::forward<T10>( other.m10)), m11(std::forward<T11>( other.m11)), m12(std::forward<T12>( other.m12)), m13(std::forward<T13>( other.m13)), m14(std::forward<T14>( other.m14)), m15(std::forward<T15>( other.m15)), m16(std::forward<T16>( other.m16)), m17(std::forward<T17>( other.m17)), m18(std::forward<T18>( other.m18)), m19(std::forward<T19>( other.m19)), m20(std::forward<T20>( other.m20)), m21(std::forward<T21>( other.m21)), m22(std::forward<T22>( other.m22)), m23(std::forward<T23>( other.m23)), m24(std::forward<T24>( other.m24)), m25(std::forward<T25>( other.m25)), m26(std::forward<T26>( other.m26)), m27(std::forward<T27>( other.m27)), m28(std::forward<T28>( other.m28)), m29(std::forward<T29>( other.m29)), m30(std::forward<T30>( other.m30)), m31(std::forward<T31>( other.m31)), m32(std::forward<T32>( other.m32)), m33(std::forward<T33>( other.m33)), m34(std::forward<T34>( other.m34)), m35(std::forward<T35>( other.m35)), m36(std::forward<T36>( other.m36)), m37(std::forward<T37>( other.m37)), m38(std::forward<T38>( other.m38)), m39(std::forward<T39>( other.m39)) {}
# endif
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector_data40(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37, typename detail::call_param<T38 >::type arg38, typename detail::call_param<T39 >::type arg39)
        : m0(arg0), m1(arg1), m2(arg2), m3(arg3), m4(arg4), m5(arg5), m6(arg6), m7(arg7), m8(arg8), m9(arg9), m10(arg10), m11(arg11), m12(arg12), m13(arg13), m14(arg14), m15(arg15), m16(arg16), m17(arg17), m18(arg18), m19(arg19), m20(arg20), m21(arg21), m22(arg22), m23(arg23), m24(arg24), m25(arg25), m26(arg26), m27(arg27), m28(arg28), m29(arg29), m30(arg30), m31(arg31), m32(arg32), m33(arg33), m34(arg34), m35(arg35), m36(arg36), m37(arg37), m38(arg38), m39(arg39) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data40(
        vector_data40 const& other)
        : m0(other.m0), m1(other.m1), m2(other.m2), m3(other.m3), m4(other.m4), m5(other.m5), m6(other.m6), m7(other.m7), m8(other.m8), m9(other.m9), m10(other.m10), m11(other.m11), m12(other.m12), m13(other.m13), m14(other.m14), m15(other.m15), m16(other.m16), m17(other.m17), m18(other.m18), m19(other.m19), m20(other.m20), m21(other.m21), m22(other.m22), m23(other.m23), m24(other.m24), m25(other.m25), m26(other.m26), m27(other.m27), m28(other.m28), m29(other.m29), m30(other.m30), m31(other.m31), m32(other.m32), m33(other.m33), m34(other.m34), m35(other.m35), m36(other.m36), m37(other.m37), m38(other.m38), m39(other.m39) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector_data40&
    operator=(vector_data40 const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        this->m38 = vec.m38;
        this->m39 = vec.m39;
        return *this;
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data40
    init_from_sequence(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        typedef typename result_of::next< I38>::type I39;
        I39 i39 = fusion::next(i38);
        return vector_data40(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37, *i38, *i39);
    }
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    static vector_data40
    init_from_sequence(Sequence& seq)
    {
        typedef typename result_of::begin<Sequence>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        typedef typename result_of::next< I38>::type I39;
        I39 i39 = fusion::next(i38);
        return vector_data40(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11, *i12, *i13, *i14, *i15, *i16, *i17, *i18, *i19, *i20, *i21, *i22, *i23, *i24, *i25, *i26, *i27, *i28, *i29, *i30, *i31, *i32, *i33, *i34, *i35, *i36, *i37, *i38, *i39);
    }
    T0 m0;
    T1 m1;
    T2 m2;
    T3 m3;
    T4 m4;
    T5 m5;
    T6 m6;
    T7 m7;
    T8 m8;
    T9 m9;
    T10 m10;
    T11 m11;
    T12 m12;
    T13 m13;
    T14 m14;
    T15 m15;
    T16 m16;
    T17 m17;
    T18 m18;
    T19 m19;
    T20 m20;
    T21 m21;
    T22 m22;
    T23 m23;
    T24 m24;
    T25 m25;
    T26 m26;
    T27 m27;
    T28 m28;
    T29 m29;
    T30 m30;
    T31 m31;
    T32 m32;
    T33 m33;
    T34 m34;
    T35 m35;
    T36 m36;
    T37 m37;
    T38 m38;
    T39 m39;
};
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39>
struct vector40
    : vector_data40<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39>
    , sequence_base<vector40<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> >
{
    typedef vector40<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> this_type;
    typedef vector_data40<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> base_type;
    typedef mpl::vector40<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> types;
    typedef vector_tag fusion_tag;
    typedef fusion_sequence_tag tag;
    typedef mpl::false_ is_view;
    typedef random_access_traversal_tag category;
    typedef mpl::int_<40> size;
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40() {}
# if !defined(BOOST_CLANG)
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector40(
        typename detail::call_param<T0 >::type arg0, typename detail::call_param<T1 >::type arg1, typename detail::call_param<T2 >::type arg2, typename detail::call_param<T3 >::type arg3, typename detail::call_param<T4 >::type arg4, typename detail::call_param<T5 >::type arg5, typename detail::call_param<T6 >::type arg6, typename detail::call_param<T7 >::type arg7, typename detail::call_param<T8 >::type arg8, typename detail::call_param<T9 >::type arg9, typename detail::call_param<T10 >::type arg10, typename detail::call_param<T11 >::type arg11, typename detail::call_param<T12 >::type arg12, typename detail::call_param<T13 >::type arg13, typename detail::call_param<T14 >::type arg14, typename detail::call_param<T15 >::type arg15, typename detail::call_param<T16 >::type arg16, typename detail::call_param<T17 >::type arg17, typename detail::call_param<T18 >::type arg18, typename detail::call_param<T19 >::type arg19, typename detail::call_param<T20 >::type arg20, typename detail::call_param<T21 >::type arg21, typename detail::call_param<T22 >::type arg22, typename detail::call_param<T23 >::type arg23, typename detail::call_param<T24 >::type arg24, typename detail::call_param<T25 >::type arg25, typename detail::call_param<T26 >::type arg26, typename detail::call_param<T27 >::type arg27, typename detail::call_param<T28 >::type arg28, typename detail::call_param<T29 >::type arg29, typename detail::call_param<T30 >::type arg30, typename detail::call_param<T31 >::type arg31, typename detail::call_param<T32 >::type arg32, typename detail::call_param<T33 >::type arg33, typename detail::call_param<T34 >::type arg34, typename detail::call_param<T35 >::type arg35, typename detail::call_param<T36 >::type arg36, typename detail::call_param<T37 >::type arg37, typename detail::call_param<T38 >::type arg38, typename detail::call_param<T39 >::type arg39)
        : base_type(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector40(U0 && arg0, U1 && arg1, U2 && arg2, U3 && arg3, U4 && arg4, U5 && arg5, U6 && arg6, U7 && arg7, U8 && arg8, U9 && arg9, U10 && arg10, U11 && arg11, U12 && arg12, U13 && arg13, U14 && arg14, U15 && arg15, U16 && arg16, U17 && arg17, U18 && arg18, U19 && arg19, U20 && arg20, U21 && arg21, U22 && arg22, U23 && arg23, U24 && arg24, U25 && arg25, U26 && arg26, U27 && arg27, U28 && arg28, U29 && arg29, U30 && arg30, U31 && arg31, U32 && arg32, U33 && arg33, U34 && arg34, U35 && arg35, U36 && arg36, U37 && arg37, U38 && arg38, U39 && arg39)
        : base_type(std::forward<U0>( arg0), std::forward<U1>( arg1), std::forward<U2>( arg2), std::forward<U3>( arg3), std::forward<U4>( arg4), std::forward<U5>( arg5), std::forward<U6>( arg6), std::forward<U7>( arg7), std::forward<U8>( arg8), std::forward<U9>( arg9), std::forward<U10>( arg10), std::forward<U11>( arg11), std::forward<U12>( arg12), std::forward<U13>( arg13), std::forward<U14>( arg14), std::forward<U15>( arg15), std::forward<U16>( arg16), std::forward<U17>( arg17), std::forward<U18>( arg18), std::forward<U19>( arg19), std::forward<U20>( arg20), std::forward<U21>( arg21), std::forward<U22>( arg22), std::forward<U23>( arg23), std::forward<U24>( arg24), std::forward<U25>( arg25), std::forward<U26>( arg26), std::forward<U27>( arg27), std::forward<U28>( arg28), std::forward<U29>( arg29), std::forward<U30>( arg30), std::forward<U31>( arg31), std::forward<U32>( arg32), std::forward<U33>( arg33), std::forward<U34>( arg34), std::forward<U35>( arg35), std::forward<U36>( arg36), std::forward<U37>( arg37), std::forward<U38>( arg38), std::forward<U39>( arg39)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40(vector40&& rhs)
        : base_type(std::forward<base_type>(rhs)) {}
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40(vector40 const& rhs)
        : base_type(static_cast<base_type const&>(rhs)) {}
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40&
    operator=(vector40 const& vec)
    {
        base_type::operator=(vec);
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40&
    operator=(vector40&& vec)
    {
        this->m0 = std::forward< T0>(vec.m0);
        this->m1 = std::forward< T1>(vec.m1);
        this->m2 = std::forward< T2>(vec.m2);
        this->m3 = std::forward< T3>(vec.m3);
        this->m4 = std::forward< T4>(vec.m4);
        this->m5 = std::forward< T5>(vec.m5);
        this->m6 = std::forward< T6>(vec.m6);
        this->m7 = std::forward< T7>(vec.m7);
        this->m8 = std::forward< T8>(vec.m8);
        this->m9 = std::forward< T9>(vec.m9);
        this->m10 = std::forward< T10>(vec.m10);
        this->m11 = std::forward< T11>(vec.m11);
        this->m12 = std::forward< T12>(vec.m12);
        this->m13 = std::forward< T13>(vec.m13);
        this->m14 = std::forward< T14>(vec.m14);
        this->m15 = std::forward< T15>(vec.m15);
        this->m16 = std::forward< T16>(vec.m16);
        this->m17 = std::forward< T17>(vec.m17);
        this->m18 = std::forward< T18>(vec.m18);
        this->m19 = std::forward< T19>(vec.m19);
        this->m20 = std::forward< T20>(vec.m20);
        this->m21 = std::forward< T21>(vec.m21);
        this->m22 = std::forward< T22>(vec.m22);
        this->m23 = std::forward< T23>(vec.m23);
        this->m24 = std::forward< T24>(vec.m24);
        this->m25 = std::forward< T25>(vec.m25);
        this->m26 = std::forward< T26>(vec.m26);
        this->m27 = std::forward< T27>(vec.m27);
        this->m28 = std::forward< T28>(vec.m28);
        this->m29 = std::forward< T29>(vec.m29);
        this->m30 = std::forward< T30>(vec.m30);
        this->m31 = std::forward< T31>(vec.m31);
        this->m32 = std::forward< T32>(vec.m32);
        this->m33 = std::forward< T33>(vec.m33);
        this->m34 = std::forward< T34>(vec.m34);
        this->m35 = std::forward< T35>(vec.m35);
        this->m36 = std::forward< T36>(vec.m36);
        this->m37 = std::forward< T37>(vec.m37);
        this->m38 = std::forward< T38>(vec.m38);
        this->m39 = std::forward< T39>(vec.m39);
        return *this;
    }
# endif
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector40(
        vector40<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39> const& vec)
        : base_type(vec.m0, vec.m1, vec.m2, vec.m3, vec.m4, vec.m5, vec.m6, vec.m7, vec.m8, vec.m9, vec.m10, vec.m11, vec.m12, vec.m13, vec.m14, vec.m15, vec.m16, vec.m17, vec.m18, vec.m19, vec.m20, vec.m21, vec.m22, vec.m23, vec.m24, vec.m25, vec.m26, vec.m27, vec.m28, vec.m29, vec.m30, vec.m31, vec.m32, vec.m33, vec.m34, vec.m35, vec.m36, vec.m37, vec.m38, vec.m39) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector40(
        Sequence const& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename Sequence>
# if !defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    vector40(
        Sequence& seq
        , typename boost::enable_if<traits::is_sequence<Sequence> >::type* = 0
    )
        : base_type(base_type::init_from_sequence(seq)) {}
    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    vector40&
    operator=(vector40<U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39> const& vec)
    {
        this->m0 = vec.m0;
        this->m1 = vec.m1;
        this->m2 = vec.m2;
        this->m3 = vec.m3;
        this->m4 = vec.m4;
        this->m5 = vec.m5;
        this->m6 = vec.m6;
        this->m7 = vec.m7;
        this->m8 = vec.m8;
        this->m9 = vec.m9;
        this->m10 = vec.m10;
        this->m11 = vec.m11;
        this->m12 = vec.m12;
        this->m13 = vec.m13;
        this->m14 = vec.m14;
        this->m15 = vec.m15;
        this->m16 = vec.m16;
        this->m17 = vec.m17;
        this->m18 = vec.m18;
        this->m19 = vec.m19;
        this->m20 = vec.m20;
        this->m21 = vec.m21;
        this->m22 = vec.m22;
        this->m23 = vec.m23;
        this->m24 = vec.m24;
        this->m25 = vec.m25;
        this->m26 = vec.m26;
        this->m27 = vec.m27;
        this->m28 = vec.m28;
        this->m29 = vec.m29;
        this->m30 = vec.m30;
        this->m31 = vec.m31;
        this->m32 = vec.m32;
        this->m33 = vec.m33;
        this->m34 = vec.m34;
        this->m35 = vec.m35;
        this->m36 = vec.m36;
        this->m37 = vec.m37;
        this->m38 = vec.m38;
        this->m39 = vec.m39;
        return *this;
    }
    template <typename Sequence>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename boost::disable_if<is_convertible<Sequence, T0>, this_type&>::type
    operator=(Sequence const& seq)
    {
        typedef typename result_of::begin<Sequence const>::type I0;
        I0 i0 = fusion::begin(seq);
        typedef typename result_of::next< I0>::type I1;
        I1 i1 = fusion::next(i0);
        typedef typename result_of::next< I1>::type I2;
        I2 i2 = fusion::next(i1);
        typedef typename result_of::next< I2>::type I3;
        I3 i3 = fusion::next(i2);
        typedef typename result_of::next< I3>::type I4;
        I4 i4 = fusion::next(i3);
        typedef typename result_of::next< I4>::type I5;
        I5 i5 = fusion::next(i4);
        typedef typename result_of::next< I5>::type I6;
        I6 i6 = fusion::next(i5);
        typedef typename result_of::next< I6>::type I7;
        I7 i7 = fusion::next(i6);
        typedef typename result_of::next< I7>::type I8;
        I8 i8 = fusion::next(i7);
        typedef typename result_of::next< I8>::type I9;
        I9 i9 = fusion::next(i8);
        typedef typename result_of::next< I9>::type I10;
        I10 i10 = fusion::next(i9);
        typedef typename result_of::next< I10>::type I11;
        I11 i11 = fusion::next(i10);
        typedef typename result_of::next< I11>::type I12;
        I12 i12 = fusion::next(i11);
        typedef typename result_of::next< I12>::type I13;
        I13 i13 = fusion::next(i12);
        typedef typename result_of::next< I13>::type I14;
        I14 i14 = fusion::next(i13);
        typedef typename result_of::next< I14>::type I15;
        I15 i15 = fusion::next(i14);
        typedef typename result_of::next< I15>::type I16;
        I16 i16 = fusion::next(i15);
        typedef typename result_of::next< I16>::type I17;
        I17 i17 = fusion::next(i16);
        typedef typename result_of::next< I17>::type I18;
        I18 i18 = fusion::next(i17);
        typedef typename result_of::next< I18>::type I19;
        I19 i19 = fusion::next(i18);
        typedef typename result_of::next< I19>::type I20;
        I20 i20 = fusion::next(i19);
        typedef typename result_of::next< I20>::type I21;
        I21 i21 = fusion::next(i20);
        typedef typename result_of::next< I21>::type I22;
        I22 i22 = fusion::next(i21);
        typedef typename result_of::next< I22>::type I23;
        I23 i23 = fusion::next(i22);
        typedef typename result_of::next< I23>::type I24;
        I24 i24 = fusion::next(i23);
        typedef typename result_of::next< I24>::type I25;
        I25 i25 = fusion::next(i24);
        typedef typename result_of::next< I25>::type I26;
        I26 i26 = fusion::next(i25);
        typedef typename result_of::next< I26>::type I27;
        I27 i27 = fusion::next(i26);
        typedef typename result_of::next< I27>::type I28;
        I28 i28 = fusion::next(i27);
        typedef typename result_of::next< I28>::type I29;
        I29 i29 = fusion::next(i28);
        typedef typename result_of::next< I29>::type I30;
        I30 i30 = fusion::next(i29);
        typedef typename result_of::next< I30>::type I31;
        I31 i31 = fusion::next(i30);
        typedef typename result_of::next< I31>::type I32;
        I32 i32 = fusion::next(i31);
        typedef typename result_of::next< I32>::type I33;
        I33 i33 = fusion::next(i32);
        typedef typename result_of::next< I33>::type I34;
        I34 i34 = fusion::next(i33);
        typedef typename result_of::next< I34>::type I35;
        I35 i35 = fusion::next(i34);
        typedef typename result_of::next< I35>::type I36;
        I36 i36 = fusion::next(i35);
        typedef typename result_of::next< I36>::type I37;
        I37 i37 = fusion::next(i36);
        typedef typename result_of::next< I37>::type I38;
        I38 i38 = fusion::next(i37);
        typedef typename result_of::next< I38>::type I39;
        I39 i39 = fusion::next(i38);
        this->m0 = *i0;
        this->m1 = *i1;
        this->m2 = *i2;
        this->m3 = *i3;
        this->m4 = *i4;
        this->m5 = *i5;
        this->m6 = *i6;
        this->m7 = *i7;
        this->m8 = *i8;
        this->m9 = *i9;
        this->m10 = *i10;
        this->m11 = *i11;
        this->m12 = *i12;
        this->m13 = *i13;
        this->m14 = *i14;
        this->m15 = *i15;
        this->m16 = *i16;
        this->m17 = *i17;
        this->m18 = *i18;
        this->m19 = *i19;
        this->m20 = *i20;
        this->m21 = *i21;
        this->m22 = *i22;
        this->m23 = *i23;
        this->m24 = *i24;
        this->m25 = *i25;
        this->m26 = *i26;
        this->m27 = *i27;
        this->m28 = *i28;
        this->m29 = *i29;
        this->m30 = *i30;
        this->m31 = *i31;
        this->m32 = *i32;
        this->m33 = *i33;
        this->m34 = *i34;
        this->m35 = *i35;
        this->m36 = *i36;
        this->m37 = *i37;
        this->m38 = *i38;
        this->m39 = *i39;
        return *this;
    }
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T0>::type
    at_impl(mpl::int_<0>)
    {
        return this->m0;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T0>::type>::type at_impl(mpl::int_<0>) const
    {
        return this->m0;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T1>::type at_impl(mpl::int_<1>)
    {
        return this->m1;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T1>::type>::type at_impl(mpl::int_<1>) const
    {
        return this->m1;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T2>::type at_impl(mpl::int_<2>)
    {
        return this->m2;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T2>::type>::type at_impl(mpl::int_<2>) const
    {
        return this->m2;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T3>::type at_impl(mpl::int_<3>)
    {
        return this->m3;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T3>::type>::type at_impl(mpl::int_<3>) const
    {
        return this->m3;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T4>::type at_impl(mpl::int_<4>)
    {
        return this->m4;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T4>::type>::type at_impl(mpl::int_<4>) const
    {
        return this->m4;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T5>::type at_impl(mpl::int_<5>)
    {
        return this->m5;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T5>::type>::type at_impl(mpl::int_<5>) const
    {
        return this->m5;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T6>::type at_impl(mpl::int_<6>)
    {
        return this->m6;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T6>::type>::type at_impl(mpl::int_<6>) const
    {
        return this->m6;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T7>::type at_impl(mpl::int_<7>)
    {
        return this->m7;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T7>::type>::type at_impl(mpl::int_<7>) const
    {
        return this->m7;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T8>::type at_impl(mpl::int_<8>)
    {
        return this->m8;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T8>::type>::type at_impl(mpl::int_<8>) const
    {
        return this->m8;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T9>::type at_impl(mpl::int_<9>)
    {
        return this->m9;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T9>::type>::type at_impl(mpl::int_<9>) const
    {
        return this->m9;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T10>::type at_impl(mpl::int_<10>)
    {
        return this->m10;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T10>::type>::type at_impl(mpl::int_<10>) const
    {
        return this->m10;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T11>::type at_impl(mpl::int_<11>)
    {
        return this->m11;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T11>::type>::type at_impl(mpl::int_<11>) const
    {
        return this->m11;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T12>::type at_impl(mpl::int_<12>)
    {
        return this->m12;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T12>::type>::type at_impl(mpl::int_<12>) const
    {
        return this->m12;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T13>::type at_impl(mpl::int_<13>)
    {
        return this->m13;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T13>::type>::type at_impl(mpl::int_<13>) const
    {
        return this->m13;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T14>::type at_impl(mpl::int_<14>)
    {
        return this->m14;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T14>::type>::type at_impl(mpl::int_<14>) const
    {
        return this->m14;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T15>::type at_impl(mpl::int_<15>)
    {
        return this->m15;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T15>::type>::type at_impl(mpl::int_<15>) const
    {
        return this->m15;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T16>::type at_impl(mpl::int_<16>)
    {
        return this->m16;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T16>::type>::type at_impl(mpl::int_<16>) const
    {
        return this->m16;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T17>::type at_impl(mpl::int_<17>)
    {
        return this->m17;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T17>::type>::type at_impl(mpl::int_<17>) const
    {
        return this->m17;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T18>::type at_impl(mpl::int_<18>)
    {
        return this->m18;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T18>::type>::type at_impl(mpl::int_<18>) const
    {
        return this->m18;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T19>::type at_impl(mpl::int_<19>)
    {
        return this->m19;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T19>::type>::type at_impl(mpl::int_<19>) const
    {
        return this->m19;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T20>::type at_impl(mpl::int_<20>)
    {
        return this->m20;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T20>::type>::type at_impl(mpl::int_<20>) const
    {
        return this->m20;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T21>::type at_impl(mpl::int_<21>)
    {
        return this->m21;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T21>::type>::type at_impl(mpl::int_<21>) const
    {
        return this->m21;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T22>::type at_impl(mpl::int_<22>)
    {
        return this->m22;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T22>::type>::type at_impl(mpl::int_<22>) const
    {
        return this->m22;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T23>::type at_impl(mpl::int_<23>)
    {
        return this->m23;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T23>::type>::type at_impl(mpl::int_<23>) const
    {
        return this->m23;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T24>::type at_impl(mpl::int_<24>)
    {
        return this->m24;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T24>::type>::type at_impl(mpl::int_<24>) const
    {
        return this->m24;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T25>::type at_impl(mpl::int_<25>)
    {
        return this->m25;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T25>::type>::type at_impl(mpl::int_<25>) const
    {
        return this->m25;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T26>::type at_impl(mpl::int_<26>)
    {
        return this->m26;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T26>::type>::type at_impl(mpl::int_<26>) const
    {
        return this->m26;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T27>::type at_impl(mpl::int_<27>)
    {
        return this->m27;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T27>::type>::type at_impl(mpl::int_<27>) const
    {
        return this->m27;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T28>::type at_impl(mpl::int_<28>)
    {
        return this->m28;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T28>::type>::type at_impl(mpl::int_<28>) const
    {
        return this->m28;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T29>::type at_impl(mpl::int_<29>)
    {
        return this->m29;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T29>::type>::type at_impl(mpl::int_<29>) const
    {
        return this->m29;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T30>::type at_impl(mpl::int_<30>)
    {
        return this->m30;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T30>::type>::type at_impl(mpl::int_<30>) const
    {
        return this->m30;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T31>::type at_impl(mpl::int_<31>)
    {
        return this->m31;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T31>::type>::type at_impl(mpl::int_<31>) const
    {
        return this->m31;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T32>::type at_impl(mpl::int_<32>)
    {
        return this->m32;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T32>::type>::type at_impl(mpl::int_<32>) const
    {
        return this->m32;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T33>::type at_impl(mpl::int_<33>)
    {
        return this->m33;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T33>::type>::type at_impl(mpl::int_<33>) const
    {
        return this->m33;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T34>::type at_impl(mpl::int_<34>)
    {
        return this->m34;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T34>::type>::type at_impl(mpl::int_<34>) const
    {
        return this->m34;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T35>::type at_impl(mpl::int_<35>)
    {
        return this->m35;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T35>::type>::type at_impl(mpl::int_<35>) const
    {
        return this->m35;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T36>::type at_impl(mpl::int_<36>)
    {
        return this->m36;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T36>::type>::type at_impl(mpl::int_<36>) const
    {
        return this->m36;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T37>::type at_impl(mpl::int_<37>)
    {
        return this->m37;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T37>::type>::type at_impl(mpl::int_<37>) const
    {
        return this->m37;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T38>::type at_impl(mpl::int_<38>)
    {
        return this->m38;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T38>::type>::type at_impl(mpl::int_<38>) const
    {
        return this->m38;
    } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<T39>::type at_impl(mpl::int_<39>)
    {
        return this->m39;
    } BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED typename add_reference<typename add_const<T39>::type>::type at_impl(mpl::int_<39>) const
    {
        return this->m39;
    }
    template<typename I>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename mpl::at<types, I>::type>::type
    at_impl(I)
    {
        return this->at_impl(mpl::int_<I::value>());
    }
    template<typename I>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename add_reference<typename add_const<typename mpl::at<types, I>::type>::type>::type
    at_impl(I) const
    {
        return this->at_impl(mpl::int_<I::value>());
    }
};
}
}
