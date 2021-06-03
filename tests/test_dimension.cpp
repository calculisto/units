#include "doctest/doctest.h"
#include "../include/isto/units/dimension.hpp"
    using namespace isto::units;

TEST_CASE("dimension.hpp")
{
        constexpr auto
    d = dimension_t {{ 0 }};
    static_assert (d.is_dimensionless ());
    /*
    SUBCASE("bug 98216")
    {
            constexpr auto
        d = dimension_t {{ 1 }};
            constexpr auto
        e = pow <-2> (d);
        static_assert (e == dimension_t { -2 });
    };
    */
};
