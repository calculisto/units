#include <fmt/format.h>
    using fmt::format, fmt::print;
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

    struct
unit_t
{
        std::string
    name;
        std::string
    symbol;
        double
    magnitude;
};
    struct
data_t
{
        std::string
    dimension;
        std::string
    definition;
        std::vector <unit_t>
    units;
};

    int
main ()
{
        auto
    data = std::vector <data_t> {};
        auto
    aliases = std::vector <std::pair <std::string, std::string>> {};
        auto
    data_file = std::ifstream { "units.txt" };
    for (
          auto&& [buffer, lineno] = std::pair { std::string {}, 1 }
        ; std::getline (data_file, buffer)
        ; ++lineno
    ){
        buffer.erase (buffer.begin (), std::find_if (
                  buffer.begin ()
                , buffer.end ()
                , [](auto c){ return !std::isspace (c); }
        ));
        if (buffer.empty () || buffer[0] == '#') continue;
            auto
        line = std::istringstream { std::move (buffer) };
            auto
        dimension = std::string {};
        if (!(line >> dimension))
        {
            throw std::runtime_error { format ("Parse error line {}", lineno) };
        }
            auto
        definition = std::string {};
        if (!(line >> std::quoted (definition)))
        {
            throw std::runtime_error { format ("Parse error line {}", lineno) };
        }
            auto
        units = std::vector <unit_t> {};
        for (;;)
        {
                auto
            u = std::string {};
                auto
            s = std::string {};
                double
            v;
            if (!(line >> u >> s >> v))
            {
                break;
            }
            units.push_back ({ std::move (u), std::move (s), v });
        }
        if (units.empty () && std::find_if (
                  definition.begin ()
                , definition.end ()
                , [](auto c){ return !(std::isalnum (c) || c == '_'); }
            ) == definition.end ()
        ){
            aliases.emplace_back (dimension, definition);
            continue;
        }
        data.emplace_back ( 
              std::move (dimension)
            , std::move (definition)
            , std::move (units)
        );
    }
        auto
    out = std::ofstream { "../include/isto/units/detail/generated_units.inc" };

out << R"(// Automatically generated, do not edit.
    namespace
dimension
{
)";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("    inline constexpr auto {} = {};\n", dim, def);
    }
    for (auto&& [dim, def]: aliases)
    {
        out << format ("    inline constexpr auto {} = {};\n", dim, def);
    }
out << R"(

    inline const auto
names_to_values = std::unordered_map <std::string, dimension_t>
{
)";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("    {{ \"{0}\", {0} }},\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
        out << format ("    {{ \"{0}\", {0} }},\n", dim);
    }
out << R"(
};
    inline const auto
values_to_names = std::unordered_map <dimension_t, std::string>
{
)";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("    {{ {0}, \"{0}\" }},\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
        out << format ("    {{ {0}, \"{0}\" }},\n", dim);
    }
out << R"(
};

} // namespace dimension

)";

    for (auto&& [dim, def, uni]: data)
    {
        out << format ("template <class T> using {0}_t = quantity_t <dimension::{0}, T>;\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
        out << format ("template <class T> using {0}_t = quantity_t <dimension::{0}, T>;\n", dim);
    }
    out << "\n";
    
    out << "    namespace\nconcepts\n{\n";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("template <class T> concept {0} = T::dimension == dimension::{0};\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
        out << format ("template <class T> concept {0} = T::dimension == dimension::{0};\n", dim);
    }
    out << "} // namespace concepts\n";

out << R"(
    namespace
prefix
{
    template <class T = double> inline constexpr auto yotta = dimensionless_t <T> { 1e24 };
    template <class T = double> inline constexpr auto zetta = dimensionless_t <T> { 1e21 };
    template <class T = double> inline constexpr auto exa   = dimensionless_t <T> { 1e18 };
    template <class T = double> inline constexpr auto peta  = dimensionless_t <T> { 1e15 };
    template <class T = double> inline constexpr auto tera  = dimensionless_t <T> { 1e12 };
    template <class T = double> inline constexpr auto giga  = dimensionless_t <T> { 1e9  };
    template <class T = double> inline constexpr auto mega  = dimensionless_t <T> { 1e6  };
    template <class T = double> inline constexpr auto kilo  = dimensionless_t <T> { 1e3  };
    template <class T = double> inline constexpr auto hecto = dimensionless_t <T> { 1e2  };
    template <class T = double> inline constexpr auto deca  = dimensionless_t <T> { 1e1  };
    template <class T = double> inline constexpr auto deci  = dimensionless_t <T> { 1e-1  };
    template <class T = double> inline constexpr auto centi = dimensionless_t <T> { 1e-2  };
    template <class T = double> inline constexpr auto milli = dimensionless_t <T> { 1e-3  };
    template <class T = double> inline constexpr auto micro = dimensionless_t <T> { 1e-6  };
    template <class T = double> inline constexpr auto nano  = dimensionless_t <T> { 1e-9  };
    template <class T = double> inline constexpr auto pico  = dimensionless_t <T> { 1e-12 };
    template <class T = double> inline constexpr auto femto = dimensionless_t <T> { 1e-15 };
    template <class T = double> inline constexpr auto atto  = dimensionless_t <T> { 1e-18 };
    template <class T = double> inline constexpr auto zepto = dimensionless_t <T> { 1e-21 };
    template <class T = double> inline constexpr auto yocto = dimensionless_t <T> { 1e-24 };


    /*
    template <> constexpr auto yotta <rational_value> = dimensionless_t <rational_value> { 1000000000000000000000000l };
    template <> constexpr auto zetta <rational_value> = dimensionless_t <rational_value> { 1000000000000000000000l };
    template <> constexpr auto exa   <rational_value> = dimensionless_t <rational_value> { 1000000000000000000l };
    template <> constexpr auto peta  <rational_value> = dimensionless_t <rational_value> { 1000000000000000l };
    template <> constexpr auto tera  <rational_value> = dimensionless_t <rational_value> { 1000000000000l };
    template <> constexpr auto giga  <rational_value> = dimensionless_t <rational_value> { 1000000000l };
    template <> constexpr auto mega  <rational_value> = dimensionless_t <rational_value> { 1000000l };
    template <> constexpr auto kilo  <rational_value> = dimensionless_t <rational_value> { 1000l };
    template <> constexpr auto hecto <rational_value> = dimensionless_t <rational_value> { 100l };
    template <> constexpr auto deca  <rational_value> = dimensionless_t <rational_value> { 10l };
    template <> constexpr auto deci  <rational_value> = dimensionless_t <rational_value> { 1l, 10ul };
    template <> constexpr auto centi <rational_value> = dimensionless_t <rational_value> { 1l, 100ul };
    template <> constexpr auto milli <rational_value> = dimensionless_t <rational_value> { 1l, 1000ul };
    template <> constexpr auto micro <rational_value> = dimensionless_t <rational_value> { 1l, 1000000ul };
    template <> constexpr auto nano  <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000ul };
    template <> constexpr auto pico  <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000000ul };
    template <> constexpr auto femto <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000000000ul };
    template <> constexpr auto atto  <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000000000000ul };
    template <> constexpr auto zepto <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000000000000000l };
    template <> constexpr auto yocto <rational_value> = dimensionless_t <rational_value> { 1l, 1000000000000000000000000l };
    */
        template <class T>
        inline const auto
    symbols_to_values = std::unordered_map 
    {
            std::pair
          { "E"s      , any_quantity_t { exa   <T> }}
        , { "P"s      , any_quantity_t { peta  <T> }}
        , { "T"s      , any_quantity_t { tera  <T> }}
        , { "G"s      , any_quantity_t { giga  <T> }}
        , { "M"s      , any_quantity_t { mega  <T> }}
        , { "k"s      , any_quantity_t { kilo  <T> }}
        , { "h"s      , any_quantity_t { hecto <T> }}
        , { "da"s     , any_quantity_t { deca  <T> }}
        , { "d"s      , any_quantity_t { deci  <T> }}
        , { "c"s      , any_quantity_t { centi <T> }}
        , { "m"s      , any_quantity_t { milli <T> }}
        , { "\u00B5"s , any_quantity_t { micro <T> }}
        , { "\u03BC"s , any_quantity_t { micro <T> }}
        , { "n"s      , any_quantity_t { nano  <T> }}
        , { "p"s      , any_quantity_t { pico  <T> }}
        , { "f"s      , any_quantity_t { femto <T> }}
        , { "a"s      , any_quantity_t { atto  <T> }}
    };
        template <class T>
        inline const auto
    values_to_names = std::unordered_map
    {
            std::pair
          { any_quantity_t { exa   <T> }, "exa"s   }
        , { any_quantity_t { peta  <T> }, "peta"s  }
        , { any_quantity_t { tera  <T> }, "tera"s  }
        , { any_quantity_t { giga  <T> }, "giga"s  }
        , { any_quantity_t { mega  <T> }, "mega"s  }
        , { any_quantity_t { kilo  <T> }, "kilo"s  }
        , { any_quantity_t { hecto <T> }, "hecto"s }
        , { any_quantity_t { deca  <T> }, "deca"s  }
        , { any_quantity_t { deci  <T> }, "deci"s  }
        , { any_quantity_t { centi <T> }, "centi"s }
        , { any_quantity_t { milli <T> }, "milli"s }
        , { any_quantity_t { micro <T> }, "micro"s }
        , { any_quantity_t { micro <T> }, "micro"s }
        , { any_quantity_t { nano  <T> }, "nano"s  }
        , { any_quantity_t { pico  <T> }, "pico"s  }
        , { any_quantity_t { femto <T> }, "femto"s }
        , { any_quantity_t { atto  <T> }, "atto"s  }
    };
        inline const auto
    symbols_to_names = std::unordered_map 
    {
            std::pair
          { "E"s      , "exa"s   }
        , { "P"s      , "peta"s  }
        , { "T"s      , "tera"s  }
        , { "G"s      , "giga"s  }
        , { "M"s      , "mega"s  }
        , { "k"s      , "kilo"s  }
        , { "h"s      , "hecto"s }
        , { "da"s     , "deca"s  }
        , { "d"s      , "deci"s  }
        , { "c"s      , "centi"s }
        , { "m"s      , "milli"s }
        , { "\u00B5"s , "micro"s }
        , { "\u03BC"s , "micro"s }
        , { "n"s      , "nano"s  }
        , { "p"s      , "pico"s  }
        , { "f"s      , "femto"s }
        , { "a"s      , "atto"s  }
    };
} // namespace prefix
    namespace
unit
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format (
R"(
    template <class T = double> inline constexpr auto {0} = quantity_t <dimension::{1}, T> {{ static_cast <T> ({2}) }};
    template <class T = double> inline constexpr auto yotta{0} = prefix::yotta <T> * {0} <T>;
    template <class T = double> inline constexpr auto zetta{0} = prefix::zetta <T> * {0} <T>;
    template <class T = double> inline constexpr auto exa{0}   = prefix::exa   <T> * {0} <T>;
    template <class T = double> inline constexpr auto peta{0}  = prefix::peta  <T> * {0} <T>;
    template <class T = double> inline constexpr auto tera{0}  = prefix::tera  <T> * {0} <T>;
    template <class T = double> inline constexpr auto giga{0}  = prefix::giga  <T> * {0} <T>;
    template <class T = double> inline constexpr auto mega{0}  = prefix::mega  <T> * {0} <T>;
    template <class T = double> inline constexpr auto kilo{0}  = prefix::kilo  <T> * {0} <T>;
    template <class T = double> inline constexpr auto hecto{0} = prefix::hecto <T> * {0} <T>;
    template <class T = double> inline constexpr auto deca{0}  = prefix::deca  <T> * {0} <T>;
    template <class T = double> inline constexpr auto deci{0}  = prefix::deci  <T> * {0} <T>;
    template <class T = double> inline constexpr auto centi{0} = prefix::centi <T> * {0} <T>;
    template <class T = double> inline constexpr auto milli{0} = prefix::milli <T> * {0} <T>;
    template <class T = double> inline constexpr auto micro{0} = prefix::micro <T> * {0} <T>;
    template <class T = double> inline constexpr auto nano{0}  = prefix::nano  <T> * {0} <T>;
    template <class T = double> inline constexpr auto pico{0}  = prefix::pico  <T> * {0} <T>;
    template <class T = double> inline constexpr auto femto{0} = prefix::femto <T> * {0} <T>;
    template <class T = double> inline constexpr auto atto{0}  = prefix::femto <T> * {0} <T>;
    template <class T = double> inline constexpr auto zepto{0} = prefix::zepto <T> * {0} <T>;
    template <class T = double> inline constexpr auto yocto{0} = prefix::yocto <T> * {0} <T>;
)"
            , u_nam
            , dim
            , u_mag
        );
    }
out << R"(
    template <class T>
    inline const auto
names_to_values = std::unordered_map <std::string, any_quantity_t <T>>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ \"{0}\", any_quantity_t {{ {0} <T> }}}},\n", u_nam);
    }
out << R"(
};
    template <class T>
    inline const auto
values_to_names = std::unordered_map <any_quantity_t <T>, std::string>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ any_quantity_t {{ {0} <T> }}, \"{0}\" }},\n", u_nam);
    }
out << R"(
};
    template <class T>
    inline const auto
symbols_to_values = std::unordered_map <std::string, any_quantity_t <T>>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ \"{}\", any_quantity_t {{ {} <T> }}}},\n", u_sym, u_nam);
    }
out << R"(
};
    template <class T>
    inline const auto
values_to_symbols = std::unordered_map <any_quantity_t <T>, std::string>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ any_quantity_t {{ {} <T> }}, \"{}\" }},\n", u_nam, u_sym);
    }
out << R"(
};
    inline const auto
names_to_symbols = std::unordered_map <std::string, std::string>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ \"{}\", \"{}\" }},\n", u_nam, u_sym);
    }
out << R"(
};
    inline const auto
symbols_to_names = std::unordered_map <std::string, std::string>
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        out << format ("    {{ \"{}\", \"{}\" }},\n", u_sym, u_nam);
    }
out << R"(
};

    template <dimension_t Dimension, class T>
    inline constexpr auto
si_unit = 
      pow <Dimension[0]> (unit::metre    <T>)
    * pow <Dimension[1]> (unit::kilogram <T>)
    * pow <Dimension[2]> (unit::second   <T>)
    * pow <Dimension[3]> (unit::ampere   <T>)
    * pow <Dimension[4]> (unit::kelvin   <T>)
    * pow <Dimension[5]> (unit::mole     <T>)
    * pow <Dimension[6]> (unit::candela  <T>)
;

    inline const auto
dimension_names_to_unit_names = std::unordered_map <std::string, std::vector <std::string>>
{
)";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("    {{ \"{}\", {{ ", dim);
        for (auto&& [u_nam, u_sym, u_mag]: uni)
        {
            out << format ("\"{}\", ", u_nam);
        }
        out << format ("}}}},\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
            auto
        target = std::find_if (data.begin (), data.end (), [&](auto x){ return x.dimension == def; });
        out << format ("    {{ \"{}\", {{ ", dim);
        for (auto&& [u_nam, u_sym, u_mag]: target->units)
        {
            out << format ("\"{}\", ", u_nam);
        }
        out << format ("}}}},\n", dim);
    }

out << R"(};
    template <class T>
    inline const auto
dimensions_to_units = std::unordered_map <dimension_t, std::vector <any_quantity_t <T>>>
{
)";
    for (auto&& [dim, def, uni]: data)
    {
        out << format ("    {{ dimension::{}, {{ ", dim);
        for (auto&& [u_nam, u_sym, u_mag]: uni)
        {
            out << format ("{} <T>, ", u_nam);
        }
        out << format ("}}}},\n", dim);
    }
    for (auto&& [dim, def]: aliases)
    {
            auto
        target = std::find_if (data.begin (), data.end (), [&](auto x){ return x.dimension == def; });
        out << format ("    {{ dimension::{}, {{ ", dim);
        for (auto&& [u_nam, u_sym, u_mag]: target->units)
        {
            out << format ("{} <T>, ", u_nam);
        }
        out << format ("}}}},\n", dim);
    }
out << R"(
};
    namespace 
literals
{
)";
    for (auto&& [dim, def, uni]: data) for (auto&& [u_nam, u_sym, u_mag]: uni)
    {
        if (u_nam == "ohm" || u_nam == "none") continue;
        out << format (
R"(
    constexpr auto operator ""_{0}   (long double x) noexcept {{ return x * unit::{1} <long double>; }}
    constexpr auto operator ""_E{0}  (long double x) noexcept {{ return x * unit::exa{1} <long double>; }}
    constexpr auto operator ""_P{0}  (long double x) noexcept {{ return x * unit::peta{1} <long double>; }}
    constexpr auto operator ""_T{0}  (long double x) noexcept {{ return x * unit::tera{1} <long double>; }}
    constexpr auto operator ""_G{0}  (long double x) noexcept {{ return x * unit::giga{1} <long double>; }}
    constexpr auto operator ""_M{0}  (long double x) noexcept {{ return x * unit::mega{1} <long double>; }}
    constexpr auto operator ""_k{0}  (long double x) noexcept {{ return x * unit::kilo{1} <long double>; }}
    constexpr auto operator ""_h{0}  (long double x) noexcept {{ return x * unit::hecto{1} <long double>; }}
    constexpr auto operator ""_da{0} (long double x) noexcept {{ return x * unit::deca{1} <long double>; }}
    constexpr auto operator ""_d{0}  (long double x) noexcept {{ return x * unit::deci{1} <long double>; }}
    constexpr auto operator ""_c{0}  (long double x) noexcept {{ return x * unit::centi{1} <long double>; }}
    constexpr auto operator ""_m{0}  (long double x) noexcept {{ return x * unit::milli{1} <long double>; }}
    constexpr auto operator ""_u{0}  (long double x) noexcept {{ return x * unit::micro{1} <long double>; }}
    constexpr auto operator ""_n{0}  (long double x) noexcept {{ return x * unit::nano{1} <long double>; }}
    constexpr auto operator ""_p{0}  (long double x) noexcept {{ return x * unit::pico{1} <long double>; }}
    constexpr auto operator ""_f{0}  (long double x) noexcept {{ return x * unit::femto{1} <long double>; }}
    constexpr auto operator ""_a{0}  (long double x) noexcept {{ return x * unit::atto{1} <long double>; }}
)"
            , u_sym
            , u_nam
        );
    }
out << R"(
} // namespace literals
} // namespace unit
)";
}
