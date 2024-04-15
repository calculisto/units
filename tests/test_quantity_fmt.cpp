#include "doctest/doctest.h"
#include "../include/calculisto/units/quantity_fmt.hpp"
    using namespace calculisto::units;

TEST_CASE("quantity_fmt.hpp")
{
    CHECK(fmt::format ("{:g}", 2.0 * unit::kilometre <>) == "2000m");
    CHECK(fmt::format ("{:g}", 1.0 * unit::metre <> / unit::second <>) == "1m.s-1");
};
