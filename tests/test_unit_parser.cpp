#include "doctest/doctest.h"
#include "../include/calculisto/units/unit_parser.hpp"
#include "../include/calculisto/units/quantity_fmt.hpp"
    using namespace calculisto::units;

TEST_CASE("unit_parser.hpp")
{
for (auto&& [symbol_u, unit]: unit::symbols_to_values <double>)
{
    if (symbol_u == "_") continue;
        auto
    u = unit_parse (symbol_u);
    //CHECK_MESSAGE (u.has_value (), symbol_u);
    CHECK_MESSAGE (u == unit,     symbol_u);
}

for (auto&& [symbol_u, unit]: unit::symbols_to_values <double>)
{
    if (symbol_u == "_") continue;
    for (auto const& [symbol_p, prefix]: prefix::symbols_to_values <double>)
    {
            auto
        u = unit_parse (symbol_p + symbol_u);
        //CHECK (u.has_value ());
        CHECK_MESSAGE (u == prefix * unit, symbol_p, ' ', symbol_u, ' ', u.magnitude, ' ', (prefix * unit).magnitude);
    }
}

CHECK_THROWS (unit_parse ("!@#$%"));
CHECK_THROWS (unit_parse ("X"));

CHECK (unit_parse ("km.h") == unit::kilometre <> * unit::hour <>);
CHECK (unit_parse ("km/h") == unit::kilometre <> / unit::hour <>);
CHECK (unit_parse ("N.h")  == unit::newton <> * unit::hour <>);
CHECK (unit_parse ("h.N")  == unit::newton <> * unit::hour <>);
CHECK (unit_parse ("km/h.N") == unit::kilometre <> / unit::hour <> * unit::newton <>);
};
