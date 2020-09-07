#include "doctest/doctest.h"
#include "../include/isto/units/dimension.hpp"
    using namespace isto::units;

    TEST_CASE("dimension.hpp")
{
        constexpr auto
    d = dimension_t {{ 0 }};
    static_assert (d.is_dimensionless ());
};
