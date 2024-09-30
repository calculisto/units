#pragma once
#include "units.hpp"
    using namespace calculisto::units;
#include <fmt/format.h>



/*
    inline auto
base_unit_symbol (dimension_t const& d)
{
        static constexpr auto
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
        auto
    r = std::string {};
        auto
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
*/

    template <class ValueType, class Char>
    struct 
fmt::formatter <any_quantity_t <ValueType>, Char>
    : public fmt::formatter <ValueType>
{
        template <typename FormatContext>
        auto 
    format (
          any_quantity_t <ValueType> const& quantity
        , FormatContext& ctx
    ) const {
        for (auto [symbol, unit]: unit::symbols_to_values <ValueType>)
        {
            if (quantity.dimension / unit.dimension == dimension::none)
            {
                formatter <ValueType>::format (
                      quantity.magnitude / unit.magnitude
                    , ctx
                );
                format_to (ctx.out (), "{}", symbol);
                return ctx.out ();
            }
        }
        formatter <ValueType>::format (quantity.magnitude, ctx);

            static constexpr auto
        unit_symbol = std::array 
        {
              "m"sv
            , "kg"sv
            , "s"sv
            , "a"sv
            , "k"sv
            , "mol"sv
            , "cd"sv
        };
            auto
        need_a_dot = false;
            auto const&
        d = quantity.dimension;
        for (std::size_t i = 0; i < dimension_t::count; ++i)
        {
            if (d[i] == 0) continue;
            if (need_a_dot) format_to (ctx.out (), "."); // r.push_back ('.');
            format_to (ctx.out (), "{}", unit_symbol[i]); // r.append (unit_symbol[i]);
            need_a_dot = true;
            if (d[i] == 1) continue;
            format_to (ctx.out (), "{:g}", d[i]);
        }
        return ctx.out ();


    }
};
    template <dimension_t Dimension, class ValueType, class Char>
    struct 
fmt::formatter <quantity_t <Dimension, ValueType>, Char>
    : public fmt::formatter <any_quantity_t <ValueType>>
{
        template <typename FormatContext>
        auto 
    format (
          quantity_t <Dimension, ValueType> const& quantity
        , FormatContext& ctx
    ) const {
            auto const
        q = any_quantity_t { quantity.magnitude, Dimension };
        return formatter <any_quantity_t <ValueType>>::format (q, ctx);
    }
};
