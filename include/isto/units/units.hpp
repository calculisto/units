#pragma once
#include "quantity.hpp"
    using namespace std::literals;

#include <fmt/format.h>

    namespace isto::units
{

#include "detail/generated_units.inc"


// Wait for sts::string to be constexpr
    /*constexpr*/ inline auto
base_unit_symbol (dimension_t const& d)
{
        using std::to_string;
        static /*constexpr*/ auto
    unit_symbol = std::array 
    {
          "m"sv
        , "kg"sv
        , "s"sv
        , "A"sv
        , "K"sv
        , "mol"sv
        , "cd"sv
    };
        /*constexpr*/ auto
    r = std::string {};
        /*constexpr*/ auto
    need_a_dot = false;
    for (std::size_t i = 0; i < dimension_t::count; ++i)
    {
        if (d[i] == 0) continue;
        if (need_a_dot) r.push_back ('.');
        r.append (unit_symbol[i]);
        need_a_dot = true;
        if (d[i] == 1) continue;
        r.append (fmt::format ("{:g}", d[i]));
    }
    return r;
}

} // namespace isto::units
