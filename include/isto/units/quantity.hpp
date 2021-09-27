#pragma once
#include "dimension.hpp"
#include <cmath>
#include <stdexcept>
#include <numeric>

    namespace
isto::units
{
    template <dimension_t Dimension, class ValueType>
    struct quantity_t;

    template <class ValueType>
    struct
any_quantity_t
{
        using
    value_type = ValueType;

        ValueType
    magnitude;
        dimension_t
    dimension;

        constexpr 
    any_quantity_t () = default;
        constexpr 
    any_quantity_t (ValueType const& m, dimension_t const& d)
        : magnitude { m }
        , dimension { d }
    {}
        template <dimension_t Dimension, class T>
        constexpr 
    any_quantity_t (quantity_t <Dimension, T> const& q)
        : magnitude { q.magnitude }
        , dimension { Dimension }
    {}
        template <class T>
        // TODO: is comparable T and ValueType
        constexpr auto
    operator <=> (any_quantity_t <T> const& other) const
    {
        if (other.dimension == dimension)
        {
            return magnitude <=> other.magnitude;
        }
        return std::partial_ordering::unordered;
    }
};
        template <dimension_t Dimension, class T>
any_quantity_t (quantity_t <Dimension, T> const&) 
    -> any_quantity_t <T>;

    struct
quantity_conversion_error 
{};

} // namespace isto::units


    namespace 
std
{
        using isto::units::any_quantity_t;
        template <class T>
        struct
    hash <any_quantity_t <T>>
    {
            std::size_t
        operator () (any_quantity_t <T> const& q) const
        {
            return hash_combine (q.magnitude, q.dimension);
        }
    };
} // namespace std

    namespace
isto::units
{
    template <class ValueType1, class ValueType2>
    constexpr auto
operator == (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
){
    if (a.dimension != b.dimension)
    {
        throw std::runtime_error { "Incompatible quantities" };
    }
    return a.magnitude == b.magnitude;
}
    template <class ValueType1, class ValueType2>
    constexpr auto
operator != (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
){
    if (a.dimension != b.dimension)
    {
        throw std::runtime_error { "Incompatible quantities" };
    }
    return a.magnitude != b.magnitude;
}
    template <class ValueTYpe>
    constexpr auto
operator - (any_quantity_t <ValueTYpe> a)
{
    a.magnitude = -a.magnitude;
    return a;
}
    template <class ValueTYpe>
    constexpr auto
operator + (any_quantity_t <ValueTYpe> a)
{
    a.magnitude = +a.magnitude;
    return a;
}
    template <class ValueType1, class ValueType2>
    constexpr auto 
operator * (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
)
    -> any_quantity_t <decltype (
          std::declval <ValueType1> () 
        * std::declval <ValueType2> ()
       )>
{
    return { a.magnitude * b.magnitude, a.dimension * b.dimension };
}
    template <class ValueType1, class ValueType2>
    constexpr auto 
operator / (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
)
    -> any_quantity_t <decltype (
          std::declval <ValueType1> () 
        / std::declval <ValueType2> ()
       )>

{
    return { a.magnitude / b.magnitude, a.dimension / b.dimension };
}
    template <class ValueType1, class ValueType2>
    constexpr auto 
operator + (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
)
    -> any_quantity_t <decltype (
          std::declval <ValueType1> () 
        + std::declval <ValueType2> ()
       )>

{
    if (a.dimension != b.dimension) throw std::runtime_error { "Incompatible quantities" };
    return { a.magnitude + b.magnitude, a.dimension };
}
    template <class ValueType1, class ValueType2>
    constexpr auto 
operator - (
      any_quantity_t <ValueType1> const& a
    , any_quantity_t <ValueType2> const& b
)
    -> any_quantity_t <decltype (
          std::declval <ValueType1> () 
        - std::declval <ValueType2> ()
       )>

{
    if (a.dimension != b.dimension) throw std::runtime_error { "Incompatible quantities" };
    return { a.magnitude - b.magnitude, a.dimension };
}

    template <
          class ValueType
        , class T
    >
    constexpr auto
operator * (
      T const& a
    , any_quantity_t <ValueType> b
)
{
    b.magnitude = b.magnitude * a;
    return b;
}
    template <
          class ValueType
        , class T
    >
    constexpr auto
operator * (
      any_quantity_t <ValueType> b
    , T const& a
)
{
    b.magnitude = b.magnitude * a;
    return b;
}

// Some functions

    template <class ValueType, class Exponent>
    constexpr auto
pow (any_quantity_t <ValueType> q, Exponent const& e)
{
        using std::pow;
    q.magnitude = pow (q.magnitude, e);
    q.dimension = pow (q.dimension, e);
    return q;
}


// A quantity, i.e. a magnitude with a compile-time dimension.
    template <dimension_t Dimension, class ValueType>
    struct
quantity_t
{
        static constexpr auto
    dimension = Dimension;
        using
    value_type = ValueType;

        ValueType
    magnitude;

        constexpr
    quantity_t () = default;

        template <
              class... Args
            , class = std::enable_if_t <
                std::is_constructible_v <ValueType, Args&&...>
              >
        >
        constexpr
    quantity_t (Args&&... args)
        : magnitude { std::forward <Args> (args)... }
    {}

    template <
          class T
        , class = std::enable_if_t <std::is_constructible_v <ValueType, T&&>>
    >
        explicit (!std::is_convertible_v <T&&, ValueType>)
        constexpr
    quantity_t (any_quantity_t <T> const& q)
        : magnitude { q.magnitude }
    {
        if (q.dimension != Dimension)
        {
            throw quantity_conversion_error {};
        }
    }
        constexpr auto
    operator <=> (quantity_t const& other) const = default;
        template <class T>
        constexpr auto
    operator <=> (quantity_t <Dimension, T> const& other) const
    {
        return magnitude <=> other.magnitude;
    }

        template <dimension_t D, class U>
        constexpr auto
    operator -= (quantity_t <D, U> const& a)
    {
        magnitude -= a.magnitude;
        return *this;
    }
        template <dimension_t D, class U>
        constexpr auto
    operator += (quantity_t <D, U> const& a)
    {
        magnitude += a.magnitude;
        return *this;
    }
};

    template <dimension_t D, class T>
quantity_t (any_quantity_t <T> const&) -> quantity_t <D, T>;

    template <dimension_t D, class T>
quantity_t (T&&) -> quantity_t <D, T>;

// A trait
    template <class ValueType>
    struct
is_quantity 
    : std::false_type
{};
    
    template <dimension_t Dimension, class ValueType>
    struct
is_quantity <quantity_t <Dimension, ValueType>>
    : std::true_type
{};
    template <class ValueType>
    constexpr bool
is_quantity_v = is_quantity <ValueType>::value;

// Comparisons, internal
    template <
          dimension_t Dimension
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator == (
      quantity_t <Dimension, ValueType1> const& a
    , quantity_t <Dimension, ValueType2> const& b
)
    -> bool
{
    return a.magnitude == b.magnitude;
}
    template <
          dimension_t Dimension
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator != (
      quantity_t <Dimension, ValueType1> const& a
    , quantity_t <Dimension, ValueType2> const& b
)
    -> bool
{
    return a.magnitude != b.magnitude;
}
// Comparisons, external: senseless.

// Arithmetic, internal
    template <dimension_t Dimension, class ValueTYpe>
    constexpr auto
operator + (quantity_t <Dimension, ValueTYpe> a)
{
    a.magnitude = + a.magnitude;
    return a;
}
    template <dimension_t Dimension, class ValueTYpe>
    constexpr auto
operator - (quantity_t <Dimension, ValueTYpe> a)
{
    a.magnitude = - a.magnitude;
    return a;
}
    template <
          dimension_t Dimension1
        , dimension_t Dimension2
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator * (
      quantity_t <Dimension1, ValueType1> const& a
    , quantity_t <Dimension2, ValueType2> const& b
){
        constexpr auto
    d = Dimension1 * Dimension2;
    if constexpr (d.is_dimensionless ())
    {
        return a.magnitude * b.magnitude;
    }
    else
    {
        return quantity_t <
              d
            , decltype (
                std::declval <ValueType1> () * std::declval <ValueType2> ()
              )
        > { a.magnitude * b.magnitude };
    }
}
    template <
          dimension_t Dimension1
        , dimension_t Dimension2
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator / (
      quantity_t <Dimension1, ValueType1> const& a
    , quantity_t <Dimension2, ValueType2> const& b
){
        constexpr auto
    d = Dimension1 / Dimension2;
    if constexpr (d.is_dimensionless ())
    {
        return a.magnitude / b.magnitude;
    }
    else
    {
        return quantity_t <
              d
            , decltype (
                std::declval <ValueType1> () / std::declval <ValueType2> ()
              )
        > { a.magnitude / b.magnitude };
    }
}
    template <
          dimension_t Dimension
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator + (
      quantity_t <Dimension, ValueType1> const& a
    , quantity_t <Dimension, ValueType2> const& b
)
    -> quantity_t <
          Dimension
        , decltype (
            std::declval <ValueType1> () + std::declval <ValueType2> ()
          )
       >
{
    return { a.magnitude + b.magnitude };
}
    template <
          dimension_t Dimension
        , class ValueType1
        , class ValueType2
    >
    constexpr auto
operator - (
      quantity_t <Dimension, ValueType1> const& a
    , quantity_t <Dimension, ValueType2> const& b
)
    -> quantity_t <
          Dimension
        , decltype (
            std::declval <ValueType1> () - std::declval <ValueType2> ()
          )
       >
{
    return { a.magnitude - b.magnitude };
}
// Arithmetic, external, used to build quantities.
    template <
          dimension_t Dimension
        , class ValueType
        , class T
        //, class = std::enable_if_t <!is_quantity_v <T>>
    >
    constexpr auto
operator * (
      T const& a
    , quantity_t <Dimension, ValueType> const& b
)
    -> quantity_t <
          Dimension
        , decltype (
            std::declval <T> () * std::declval <ValueType> ()
          )
       >
{
    return { a * b.magnitude };
}
    template <
          dimension_t Dimension
        , class ValueType
        , class T
        //, class = std::enable_if_t <!is_quantity_v <T>>
    >
    constexpr auto
operator * (
      quantity_t <Dimension, ValueType> const& b
    , T const& a
)
    -> quantity_t <
          Dimension
        , decltype (
            std::declval <T> () * std::declval <ValueType> ()
          )
       >
{
    return { a * b.magnitude };
}
    template <
          dimension_t Dimension
        , class ValueType
        , class T
    >
    constexpr auto
operator / (
      T const& a
    , quantity_t <Dimension, ValueType> const& b
)
    -> quantity_t <
          inverse (Dimension)
        , decltype (
            std::declval <T> () / std::declval <ValueType> ()
          )
       >
{
    return { a / b.magnitude };
}
    template <
          dimension_t Dimension
        , class ValueType
        , class T
    >
    constexpr auto
operator / (
      quantity_t <Dimension, ValueType> const& a
    , T const& b
)
    -> quantity_t <
          Dimension
        , decltype (
            std::declval <T> () / std::declval <ValueType> ()
          )
       >
{
    return { a.magnitude / b };
}

// Some functions
    template <
          auto Exponent
        , dimension_t Dimension
        , class ValueType
    >
    constexpr auto
pow (quantity_t <Dimension, ValueType> const& q)
{
        using std::pow;
    return quantity_t <pow <Exponent> (Dimension), ValueType> 
    { 
        pow (q.magnitude, Exponent) 
    };
}
    
    template <dimension_t Dimension, class ValueType>
    constexpr auto
sqrt (quantity_t <Dimension, ValueType> const& q)
{
    return pow <0.5> (q);
}
    
    template <dimension_t Dimension, class ValueType>
    constexpr auto
abs (quantity_t <Dimension, ValueType> q)
{
        using std::abs;
    q.magnitude = abs (q.magnitude);
    return q;
}
    
    namespace
detail
{
    /*
        template <class T>
        auto
    extract_unit (dimension_t const& d)
    {
        if (d == dimension::one) return unit::none <T>;
        for (auto [symbol, unit]: unit::symbols_to_values <T>)
        {
                auto const&
            d2 = unit.dimension;
                auto
            a = std::array <rational_number_t, dimension_t::count> {};
            std::transform (
                  std::begin (d)
                , std::end (d)
                , std::begin (d2)
                , std::begin (a)
                , std::minus <> {}
            );
                auto
            first = std::find_if (std::begin (a), std::end (b), [](auto&& x){ x != 0; });
            if (first == std::end (a))
            {
                return unit;
            }
        }
    }
    */

} // namespace detail

    template <class ValueType>
    auto
split (any_quantity_t <ValueType> const& q)
{
    /*
    if (q.dimension == dimension::one) return unit::none <ValueType>;
        auto
    u = any_quantity_t { unit::none <ValueType> };
        auto
    c = std::numeric_limits <int>::max ();
    for (auto [symbol, unit]: unit::symbols_to_values <ValueType>)
    {
            auto
        d = q.dimension / unit.dimension;
        if (d == dimension::one)
        {
            return unit;
        }
        // All dimensions are the same
        if (std::adjacent_find (
              std::begin (d)
            , std::end (d)
            , std::not_equal_to <> ()
            //, [](auto&& a, auto&& b){ return a != b; }
        ) == std::end (d)){
            return pow (unit, d[0]);
        }
            auto
        x = std::accumulate (
              std::begin (d)
            , std::end (d)
            , 0
            , [](auto a, auto x){ return a + abs (x); }
        );
        assert (x > 0);
        if (x < c)
        {
            c = x;
            u = unit;
        }
    }
        auto
    d = q.dimension / u.dimension;
    */
    throw std::runtime_error {"IIP"};
}
    
} // namespace isto::units
// vim: fdm=marker
