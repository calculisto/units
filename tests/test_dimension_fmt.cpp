#include "doctest/doctest.h"

#include "../include/calculisto/units/dimension_fmt.hpp"
#include "../include/calculisto/units/units.hpp"
    using namespace calculisto::units;


TEST_CASE("dimension_fmt.hpp")
{
        using namespace dimension;
    CHECK(fmt::format ("{}", none) == "");
    CHECK(fmt::format ("{}", length) == "L");
    CHECK(fmt::format ("{}", mass) == "M");
    CHECK(fmt::format ("{}", dimension::time) == "T");
    CHECK(fmt::format ("{}", electric_current) == "I");
    CHECK(fmt::format ("{}", thermodynamic_temperature) == "\u03B8");
    CHECK(fmt::format ("{}", amount_of_substance) == "N");
    CHECK(fmt::format ("{}", luminous_intensity) == "J");

    CHECK(fmt::format ("{}", length * mass * mass) == "LM2");
};
