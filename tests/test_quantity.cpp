#include "doctest/doctest.h"

#include "../include/calculisto/units/quantity.hpp"
    using namespace calculisto::units;

/*
    template <class T>
    struct
erase_dimension;

    template <dimension_t Dimension, class ValueType>
    struct
erase_dimension <quantity_t <Dimension, ValueType>>
{
        using
    type = ValueType;
};
    template <class T>
    using
erase_dimension_t = erase_dimension <T>::type;
*/
#if 0
    template <class...> struct S;

TEST_CASE("quantity.hpp")
{
SUBCASE("quantity_t")
{
        constexpr auto
    l = quantity_t <dimension::length, double> { 4.0 };
        constexpr auto
    t = quantity_t <dimension::time, int> { 2 };

    {
            constexpr auto
        a = l * t;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length * dimension::time, double>>
        );
        static_assert (a.magnitude == 8.0);
    }
    {
            constexpr auto
        a = l / t;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length / dimension::time, double>
        >);
        static_assert (a.magnitude == 2.0);
    }

        constexpr auto
    h = quantity_t <dimension::length, int> { 2 };

    {
            constexpr auto
        a = l + h;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length, double>>
        );
        static_assert (a.magnitude == 6.0);
    }
    {
            constexpr auto
        a = l - h;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length, double>>
        );
        static_assert (a.magnitude == 2.0);
    }

    static_assert (h < l);
    static_assert (h <= l);
    static_assert (l > h);
    static_assert (l >= h);
    static_assert (l != h);
    static_assert (!(l == h));

    {
            constexpr auto
        a = 2 * l;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length, double>>
        );
        static_assert (a.magnitude == 8.0);
    }
    {
        // TODO
        /*
            constexpr auto
        a = 1 * l;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <inverse (dimension::length), double>>
        );
        static_assert (a.magnitude == 8.0);
        */
    }
    {
            constexpr auto
        a = 2 * unit::metre <>;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , quantity_t <dimension::length, double>>
        );
        static_assert (a.magnitude == 2.0);

    }
}
SUBCASE("any_quantity_t")
{
        constexpr auto
    l = any_quantity_t <double> { 4.0, dimension::length };
        constexpr auto
    t = any_quantity_t <int> { 2, dimension::time };

    {
            constexpr auto
        a = l * t;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <double>>
        );
        static_assert (a.magnitude == 8.0);
        static_assert (a.dimension == dimension::length * dimension::time);
    }
    {
            constexpr auto
        a = l / t;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <double>>
        );
        static_assert (a.magnitude == 2.0);
        static_assert (a.dimension == dimension::length / dimension::time);
    }

        constexpr auto
    h = any_quantity_t <int> { 2, dimension::length };

    {
            constexpr auto
        a = l + h;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <double>>
        );
        static_assert (a.magnitude == 6.0);
        static_assert (a.dimension == dimension::length);
    }
    {
            constexpr auto
        a = l - h;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <double>>
        );
        static_assert (a.magnitude == 2.0);
        static_assert (a.dimension == dimension::length);
    }

    static_assert (h < l);
    static_assert (h <= l);
    static_assert (l > h);
    static_assert (l >= h);
    static_assert (l != h);
    static_assert (!(l == h));

    // Nope.
    /*
    {
            constexpr auto
        a = any_quantity_t { 1 };
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <int>>
        );
        static_assert (a.magnitude == 1);
        static_assert (a.dimension == dimension::one);
    }
    */
    // Not these ones
    /*
    {
            constexpr auto
        a = 2 * l;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <double>>
        );
        static_assert (a.magnitude == 8.0);
        static_assert (a.dimension == dimension::length);
    }
    {
            constexpr auto
        a = 1 * l;
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (a)>
            , any_quantity_t <inverse (dimension::length), double>>
        );
        static_assert (a.magnitude == 8.0);
    }
    */
    {
            constexpr auto
        a = 1 * unit::metre <double>;
            constexpr auto
        b = any_quantity_t { a };
        static_assert (std::is_same_v <
              std::remove_cv_t <decltype (b)>
            , any_quantity_t <double>>
        );
        static_assert (b.magnitude == 1);
        static_assert (b.dimension == dimension::length);

    }
}
SUBCASE("mix")
{
        constexpr auto
    D1 = 1. * unit::kilogram <> / pow <3> (unit::metre <>);
        constexpr auto
    T1 = 300. * unit::kelvin <>;
        constexpr auto
    P1 = pressure (D1, T1);

        auto
    D2 = any_quantity_t { D1 };
        auto
    T2 = any_quantity_t { T1 };

        [[maybe_unused]]
        auto
    D3 = density_t { D2 };

    // TODO: find a way to get rid of the template argument
        auto
    P2 = pressure <double> (D2, T2);
    CHECK(P2 == P1);
}
SUBCASE("RS")
{
        auto
    a = any_quantity_t { 1., dimension::length };
        auto
    b = any_quantity_t { 1., dimension::length };
        using
    f_t = double (*)(double, double);
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wcast-function-type"
        auto
    g = reinterpret_cast <f_t>(f <double>);
    #pragma GCC diagnostic pop
        auto
    c = any_quantity_t { g (a.magnitude, b.magnitude), dimension::length };
    CHECK (c == any_quantity_t <double> { 2., dimension::length });
}
SUBCASE("best unit")
{
    CHECK(best_unit <double> (unit::kilometre <>.dimension) == unit::metre <>);
    CHECK(best_unit <double> (dimension::pressure) == unit::pascal <>);
        /*
    {
            constexpr auto
        m = unit::metre <>;
            auto const
        u = best_unit (m);
        CHECK (u == unit::metre <>);
    }
    {
            constexpr auto
        m = pow <2> (unit::kilometre <>);
            auto const
        u = best_unit (m);
        CHECK (u == pow <2> (unit::metre <>));
    }
    {
            constexpr auto
        p = unit::megapascal <>;
            auto const
        u = best_unit (p);
        CHECK (u == unit::pascal <>);
    }
    {
            constexpr auto
        p = unit::megapascal <> / unit::kelvin <>;
            auto const
        u = best_unit (p);
            auto const
        q = u == unit::pascal <> / unit::kelvin <>;
        CHECK (u == unit::pascal <> / unit::kelvin <>);
    }
    */
}
}
#endif
