#include "../include/isto/units/units.hpp"
    using namespace isto::units; // For the concepts
    using namespace isto::units::unit; // For the units
    using namespace isto::units::unit::literals; // For the literals
#include <iostream>

    constexpr auto
gas_constant = 8.31446261815324 * joule <> / kelvin <> / mole <>;
    constexpr auto
molar_mass = 18.01528 * gram <> / mole <>;

    constexpr auto
density (Temperature auto T, Pressure auto P)
{
    return P * molar_mass / gas_constant / T;
}

    constexpr auto
d = density (273.15_K, 1._MPa);

static_assert (Density <decltype (d)>);

    int
main ()
{ }
