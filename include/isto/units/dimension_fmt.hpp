#pragma once
#include "dimension.hpp"
    using isto::units::dimension_t;
#include <string_view>
    using namespace std::literals;
#include <fmt/format.h>


    template <class Char>
    struct 
fmt::formatter <dimension_t, Char>
{

        template <typename FormatContext>
        constexpr auto 
    parse (FormatContext& ctx)
    {
        return ctx.begin ();
    }

        template <typename FormatContext>
        auto 
    format (dimension_t const& d, FormatContext& ctx) 
    {
            static constexpr auto
        dimension_symbol = std::array 
        {
              "L"sv
            , "M"sv
            , "T"sv
            , "I"sv
            , "\u03B8"sv
            , "N"sv
            , "J"sv
        };
        for (std::size_t i = 0; i < dimension_t::count; ++i)
        {
            if (d[i] == 0) continue;
            if (d[i] == 1) 
            {
                format_to (ctx.out (), "{}", dimension_symbol[i]);
            }
            else
            {
                format_to (ctx.out (), "{}", dimension_symbol[i]);
                format_to (ctx.out (), "{:g}", d[i]);
            }
        }
        return ctx.out ();
    }
};
