#pragma once
#include "units.hpp"
#include <tao/pegtl.hpp>
//#include <tao/pegtl/contrib/tracer.hpp>
#include <optional>

    namespace
isto::units
{
    using namespace tao::pegtl;
    namespace
peg
{
        template <class ValueType>
        struct
    state
    {
            bool
        divide = false;
            any_quantity_t <ValueType>
        current_unit = any_quantity_t <ValueType> { 1, dimension::none };
            std::int64_t
        numerator = 1;
            std::uint64_t
        denominator = 1;
            any_quantity_t <ValueType>
        unit = any_quantity_t <ValueType> { 1, dimension::none };
    };
        template <class Rule>
        struct
    action
        : nothing <Rule>
    {};

        namespace
    prefixes
    {
            using utf8::one;
        struct exa   : one <'E'> {};
        struct peta  : one <'P'> {};
        struct tera  : one <'T'> {};
        struct giga  : one <'G'> {};
        struct mega  : one <'M'> {};
        struct kilo  : one <'k'> {};
        struct hecto : one <'h'> {};
        struct deca  : string <'d', 'a'> {};
        struct deci  : one <'d'> {};
        struct centi : one <'c'> {};
        struct milli : one <'m'> {};
        struct micro : one <0x00B5, 0x03bc> {};
        struct nano  : one <'n'> {};
        struct pico  : one <'p'> {};
        struct femto : one <'f'> {};
        struct atto  : one <'a'> {};
    }
#define ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(P)  \
        template <>                                 \
        struct                                      \
    action <prefixes::P>                            \
    {                                               \
            template <class ValueType>              \
            static void                             \
        apply0 (state <ValueType>& s)               \
        {                                           \
            s.current_unit = prefix::P <ValueType>; \
        }                                           \
    };
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(exa)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(peta)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(tera)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(giga)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(mega)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(kilo)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(hecto)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(deca)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(deci)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(centi)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(milli)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(micro)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(nano)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(pico)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(femto)
ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX(atto)
#undef ISTO_QUANTITY_UNIT_PARSER_ACTION_PREFIX

    struct prefix : sor <
          prefixes::deca
        , prefixes::exa
        , prefixes::peta
        , prefixes::tera
        , prefixes::giga
        , prefixes::mega
        , prefixes::kilo
        , prefixes::hecto
        , prefixes::deci
        , prefixes::centi
        , prefixes::milli
        , prefixes::micro
        , prefixes::nano
        , prefixes::pico
        , prefixes::femto
        , prefixes::atto
    > {};

        namespace
    units
    {
            using utf8::one;
            using utf8::string;
        struct metre             : one    <'m'>            {};
        struct gram              : one    <'g'>            {};
        struct second            : one    <'s'>            {};
        struct ampere            : one    <'A'>            {};
        struct kelvin            : one    <'K'>            {};
        struct mole              : string <'m', 'o', 'l'>  {};
        struct candela           : string <'c', 'd'>       {};
        struct hertz             : string <'H', 'z'>       {};
        struct newton            : one    <'N'>            {};
        struct pascal            : string <'P', 'a'>       {};
        struct joule             : one    <'J'>            {};
        struct watt              : one    <'W'>            {};
        struct coulomb           : one    <'C'>            {};
        struct volt              : one    <'V'>            {};
        struct farad             : one    <'F'>            {};
        struct ohm               : one    <0x2126, 0x03A9> {};
        struct siemens           : one    <'S'>            {};
        struct weber             : string <'W', 'b'>       {};
        struct tesla             : one    <'T'>            {};
        struct henry             : one    <'H'>            {};
        struct lumen             : string <'l', 'u'>       {};
        struct lux               : string <'l', 'x'>       {};
        struct becquerel         : string <'B', 'q'>       {};
        struct gray              : string <'G', 'y'>       {};
        struct sievert           : string <'S', 'v'>       {};
        struct katal             : string <'k', 'a', 't'>  {};
        struct minute            : string <'m', 'i', 'n'>  {};
        struct hour              : one    <'h'>            {};
        struct bar               : string <'b', 'a', 'r'>  {};
        // struct day               : one    <'d'>            {}; // Parsing ambiguity: cd -> candela / centi-day
        // struct astronomical_unit : string <'a', 'u'>       {}; // Parsing ambiguity: dau -> deci-au, dalton-error, deca-error
        // struct hectare           : string <'h', 'a'>       {};
        // struct litre             : one    <'l', 'L'>       {};
        // struct tonne             : one    <'t'>            {};
        // struct radian            : string <'r', 'a', 'd'>  {};
        // struct steradian         : string <'s', 'r'>       {};
    } // namespace units

#define ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(U)                                      \
        template <>                                                                   \
        struct                                                                        \
    action <units::U>                                                                 \
    {                                                                                 \
        template <class ValueType>                                                    \
            static void                                                               \
        apply0 (state <ValueType>& s)                                                 \
        {                                                                             \
            s.current_unit = s.current_unit * any_quantity_t { unit::U <ValueType> }; \
        }                                                                             \
    };
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(metre)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(gram)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(second)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(ampere)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(kelvin)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(mole)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(candela)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(hertz)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(newton)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(pascal)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(joule)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(watt)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(coulomb)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(volt)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(farad)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(ohm)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(siemens)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(weber)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(tesla)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(henry)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(lumen)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(lux)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(becquerel)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(gray)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(sievert)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(katal)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(minute)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(hour)
ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(bar)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(day)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(astronomical_unit)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(hectare)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(litre)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(tonne)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(radian)
// ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT(steradian)
#undef ISTO_QUANTITY_UNIT_PARSER_ACTION_UNIT

    struct named_unit : sor <
          units::mole                // mol
        , units::katal               // kat
        , units::minute              // min
        , units::bar                 // bar
        , units::candela             // cd
        , units::hertz               // Hz
        , units::pascal              // Pa
        , units::weber               // Wb
        , units::lumen               // lu
        , units::lux                 // lx
        , units::becquerel           // Bq
        , units::gray                // Gy
        , units::sievert             // Sv
        , units::metre               // m
        , units::gram                // g
        , units::second              // s
        , units::ampere              // A
        , units::kelvin              // K
        , units::newton              // N
        , units::joule               // J
        , units::watt                // W
        , units::coulomb             // C
        , units::volt                // V
        , units::farad               // F
        , units::ohm                 // 0x2126
        , units::siemens             // S
        , units::tesla               // T
        , units::henry               // H
        , units::hour                // h
        // , units::day
        // , units::astronomical_unit
        // , units::hectare
        // , units::litre
        // , units::tonne
        // , units::radian
        // , units::steradian
    > {};

    struct op_mul : one <'.'> {};
    struct op_div : one <'/'> {};

        template <>
        struct
    action <op_div>
    {
            template <class ValueType>
            static void
        apply0 (state <ValueType>& s)
        {
            s.divide = true;
        }
    };
    struct ope : sor <op_mul, op_div> {};
    struct integer: seq <opt <one <'+', '-'>>, plus <digit>> {};
    struct numerator : integer {};
    struct denominator : integer {};
        template <>
        struct
    action <numerator>
    {
            template <class Input, class ValueType>
            static void
        apply (Input const& input, state <ValueType>& s)
        {
            s.numerator = std::stoll (input.string ());
        }
    };
        template <>
        struct
    action <denominator>
    {
            template <class Input, class ValueType>
            static void
        apply (Input const& input, state <ValueType>& s)
        {
            s.denominator = std::stoll (input.string ());
        }
    };
    struct power: seq <numerator, opt <one <'/'>, denominator>> {};
    // Nope.
    // struct single_unit : seq <opt <prefix>, named_unit, opt <power>> {};
    struct single_unit : sor <
          seq <named_unit, not_at <alpha>, not_at <units::ohm>, opt <power>>
        , seq <prefix, named_unit, opt <power>>
    > {};
        template <>
        struct
    action <single_unit>
    {
            template <class ValueType>
            static void
        apply0 (state <ValueType>& s)
        {
            if (s.numerator != 1 || s.denominator != 1)
            {
                    const auto
                r = static_cast <double> (s.numerator) / s.denominator;
                s.current_unit = pow (s.current_unit, r);
            }
            if (s.divide)
            {
                s.unit = s.unit / s.current_unit;
            }
            else
            {
                s.unit = s.unit * s.current_unit;
            }
            s.divide = false;
            s.numerator = 1;
            s.denominator = 1;
            s.current_unit = any_quantity_t <ValueType> { 1, dimension::none };
        }
    };
    struct grammar : must <single_unit, star <ope, single_unit>, eof> {};

} //namespace peg

    template <class ValueType = double>
    std::optional <any_quantity_t <ValueType>>
unit_parse (std::string const& string)
{
    try
    {
            peg::state <ValueType>
        s;
        tao::pegtl::parse <
              peg::grammar
            , peg::action
            //, tao::pegtl::tracer
            > (
              memory_input (string, "")
            , s
        );
        return s.unit;
    }
    catch (...)
    {
        return {};
    }
}
} // namespace isto::units
