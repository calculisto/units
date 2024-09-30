#pragma once
#include "dimension.hpp"
    using calculisto::units::dimension_t;
#include <string_view>
    using namespace std::literals;
#include <fmt/format.h>


    template <>
    struct 
fmt::formatter <dimension_t>
{
        template <typename FormatContext>
        constexpr auto 
    parse (FormatContext& ctx)
    {
        return ctx.begin ();
    }

        template <typename FormatContext>
        auto 
    format (dimension_t const& d, FormatContext& ctx) const
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
                fmt::format_to (ctx.out (), "{}", dimension_symbol[i]);
            }
            else
            {
                fmt::format_to (ctx.out (), "{}", dimension_symbol[i]);
                fmt::format_to (ctx.out (), "{:g}", d[i]);
            }
        }
        return ctx.out ();
    }
};
