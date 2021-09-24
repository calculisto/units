#pragma once
#include <array>
#include <isto/hash_combine/hash_combine.hpp>
    using isto::hash_combine::hash_combine;
    using isto::hash_combine::hash_combine_range;

    namespace
isto::units
{
// A physical dimension.
    struct
dimension_t
{
        static constexpr std::size_t
    count = 7;
        std::array <double, count>
    data;
        constexpr auto&
    operator [] (std::size_t index) noexcept 
    // See https://stackoverflow.com/a/55155175
    {
        return data[index];
    }
        constexpr const auto&
    operator [] (std::size_t index) const noexcept
    {
        return data[index];
    }
        constexpr auto
    begin () const noexcept
    {
        return std::begin (data);
    }
        constexpr auto
    end () const noexcept
    {
        return std::end (data);
    }
        constexpr auto
    operator <=> (dimension_t const&) const = default;

        constexpr bool
    is_dimensionless () const noexcept
    {
        return std::all_of (begin (), end (), [](auto x){ return x == 0; });
    }
};
// Create combined dimensions
    constexpr dimension_t
operator * (dimension_t a, dimension_t const& b)
{
    std::transform (
          std::begin (a.data)
        , std::end   (a.data)
        , std::begin (b.data)
        , std::begin (a.data)
        , [](auto x, auto y){ return x + y; }
    );
    return a;
}
    constexpr dimension_t
operator / (dimension_t a, dimension_t const& b)
{
    std::transform (
          std::begin (a.data)
        , std::end   (a.data)
        , std::begin (b.data)
        , std::begin (a.data)
        , [](auto x, auto y){ return x - y; }
    );
    return a;
}
    template <auto E>
    constexpr dimension_t
pow (dimension_t a)
{
    std::transform (
          std::begin (a.data)
        , std::end   (a.data)
        , std::begin (a.data)
        , [](double x){ return x * static_cast <double> (E); }
    );
    return a;
}

    template <class T>
    constexpr dimension_t
pow (dimension_t a, T const& e)
{
    std::transform (
          std::begin (a.data)
        , std::end   (a.data)
        , std::begin (a.data)
        , [=](auto x){ return x * e; }
    );
    return a;
}

    constexpr dimension_t
inverse (dimension_t a)
{
    std::transform (
          std::begin (a.data)
        , std::end   (a.data)
        , std::begin (a.data)
        // Bug ? see ~/isto/iapws/sandbox/float.cpp
        , [](auto x){ return x == 0 ? x : -x; }
    );
    return a;
}

// Can't do that
    constexpr
    dimension_t
operator + (dimension_t a, dimension_t b) = delete;
    constexpr
    dimension_t
operator - (dimension_t a, dimension_t b) = delete;

} // namespace isto::units

    namespace
std
{
        using isto::units::dimension_t;

        template <>
        struct
    hash <dimension_t>
    {
            std::size_t
        operator () (dimension_t const& d) const
        {
            return hash_combine_range (std::begin (d), std::end (d));
        }
    };
}
