#include "doctest/doctest.h"
#include "../include/isto/units/unit_parser.hpp"
    using namespace isto::units;

    TEST_CASE("unit_parser.hpp")
{
for (auto&& [symbol_u, unit]: unit::symbols_to_values <double>)
{
    if (symbol_u == "_") continue;
    //fmt::print ("{} -> {}\n", symbol_u, unit);
        auto
    u = unit_parse (symbol_u);
    if (!u.has_value())
    {
        //fmt::print ("No unit\n");
    }
    if (*u != unit)
    {
        //fmt::print ("{}  {}\n", *u, unit);
    }
    CHECK (u.has_value ());
    CHECK (*u == unit);
    for (auto const& [symbol_p, prefix]: prefix::symbols_to_values <double>)
    {
            auto
        u = unit_parse (symbol_p + symbol_u);
        CHECK (u.has_value ());
        CHECK (*u == prefix * unit);
        /*
        CHECK_MESSAGE(
            *u  == prefix * unit
            , ": \"" << symbol_p << "\" concatenated with \"" << symbol_u << "\" was not parsed as " << prefix * unit
        );
        */
    }
}
    auto
u = unit_parse ("!@#$%");
CHECK (!u);
/*
    auto
a = *(unit_parse <double> ("km"));
    auto
b = any_quantity_t <double> { 1000, dimension::length };
MESSAGE(a);
MESSAGE(b);
expect (a == b);
*/
/*
expect (unit_parse ("km.h") == unit::kilometre * unit::hour);
expect (unit_parse ("km/h") == unit::kilometre / unit::hour);
expect (unit_parse ("h") == unit::hour);
expect (unit_parse ("km/h.N") == unit::kilometre / unit::hour * unit::newton);
expect (unit_parse ("ha") == unit::hectare);
*/
//expect (unit_parse ("hha") == prefix::hecto * unit::hectare);
};
