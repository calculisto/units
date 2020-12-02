// Automatically generated, do not edit.
    namespace
dimension
{
    inline constexpr auto none = dimension_t {{ 0, 0, 0, 0, 0, 0, 0 }};
    inline constexpr auto length = dimension_t {{ 1, 0, 0, 0, 0, 0, 0 }};
    inline constexpr auto mass = dimension_t {{ 0, 1, 0, 0, 0, 0, 0 }};
    inline constexpr auto time = dimension_t {{ 0, 0, 1, 0, 0, 0, 0 }};
    inline constexpr auto electric_current = dimension_t {{ 0, 0, 0, 1, 0, 0, 0 }};
    inline constexpr auto thermodynamic_temperature = dimension_t {{ 0, 0, 0, 0, 1, 0, 0 }};
    inline constexpr auto amount_of_substance = dimension_t {{ 0, 0, 0, 0, 0, 1, 0 }};
    inline constexpr auto luminous_intensity = dimension_t {{ 0, 0, 0, 0, 0, 0, 1 }};
    inline constexpr auto frequency = pow <-1> (time);
    inline constexpr auto force = mass * length * pow <-2> (time);
    inline constexpr auto pressure = mass * pow <-1> (length) * pow <-2> (time);
    inline constexpr auto energy = mass * pow <2> (length) * pow <-2> (time);
    inline constexpr auto work = mass * pow <2> (length) * pow <-2> (time);
    inline constexpr auto electric_charge = electric_current * time;
    inline constexpr auto electric_potential_difference = mass * pow <2> (length) * pow <-3> (time) * pow <-1> (electric_current);
    inline constexpr auto capacitance = pow <-1> (mass) * pow <-2> (length) * pow <4> (time) * pow <2> (electric_current);
    inline constexpr auto electric_resistance = mass * pow <2> (length) * pow <-3> (time) * pow <-2> (electric_current);
    inline constexpr auto electric_conductance = pow <-1> (mass) * pow <-2> (length) * pow <3> (time) * pow <2> (electric_current);
    inline constexpr auto magnetic_flux = mass * pow <2> (length) * pow <-2> (time) * pow <-1> (electric_current);
    inline constexpr auto magnetic_flux_density = mass * pow <-2> (time) * pow <-1> (electric_current);
    inline constexpr auto inductance = mass * pow <2> (length) * pow <-2> (time) * pow <-2> (electric_current);
    inline constexpr auto luminous_flux = luminous_intensity;
    inline constexpr auto illuminance = luminous_intensity * pow <-2> (length);
    inline constexpr auto activity_referred_to_a_radionuclide = pow <-1> (time);
    inline constexpr auto absorbed_dose = pow <2> (length) * pow <-2> (time);
    inline constexpr auto dose_equivalent = pow <2> (length) * pow <-2> (time);
    inline constexpr auto catalytic_activity = amount_of_substance * pow <-1> (time);
    inline constexpr auto velocity = length / time;
    inline constexpr auto area = length * length;
    inline constexpr auto volume = pow <3> (length);
    inline constexpr auto density = mass / volume;
    inline constexpr auto massic_energy = energy / mass;
    inline constexpr auto entropy = energy / thermodynamic_temperature;
    inline constexpr auto massic_entropy = entropy / mass;
    inline constexpr auto temperature = thermodynamic_temperature;
    inline constexpr auto dimensionless = none;
    inline constexpr auto stress = pressure;
    inline constexpr auto amount_of_heat = work;
    inline constexpr auto power = work;
    inline constexpr auto radiant_flux = work;
    inline constexpr auto amount_of_electricity = electric_charge;
    inline constexpr auto electromotive_force = electric_potential_difference;
    inline constexpr auto celsius_temperature = thermodynamic_temperature;
    inline constexpr auto specific_energy_imparted = absorbed_dose;
    inline constexpr auto kerma = absorbed_dose;
    inline constexpr auto ambient_dose_equivalent = dose_equivalent;
    inline constexpr auto directional_dose_equivalent = dose_equivalent;
    inline constexpr auto personal_dose_equivalent = dose_equivalent;
    inline constexpr auto heat_capacity = entropy;
    inline constexpr auto massic_heat_capacity = massic_entropy;
    inline constexpr auto massic_enthalpy = massic_energy;


    inline const auto
names_to_values = std::unordered_map <std::string, dimension_t>
{
    { "none", none },
    { "length", length },
    { "mass", mass },
    { "time", time },
    { "electric_current", electric_current },
    { "thermodynamic_temperature", thermodynamic_temperature },
    { "amount_of_substance", amount_of_substance },
    { "luminous_intensity", luminous_intensity },
    { "frequency", frequency },
    { "force", force },
    { "pressure", pressure },
    { "energy", energy },
    { "work", work },
    { "electric_charge", electric_charge },
    { "electric_potential_difference", electric_potential_difference },
    { "capacitance", capacitance },
    { "electric_resistance", electric_resistance },
    { "electric_conductance", electric_conductance },
    { "magnetic_flux", magnetic_flux },
    { "magnetic_flux_density", magnetic_flux_density },
    { "inductance", inductance },
    { "luminous_flux", luminous_flux },
    { "illuminance", illuminance },
    { "activity_referred_to_a_radionuclide", activity_referred_to_a_radionuclide },
    { "absorbed_dose", absorbed_dose },
    { "dose_equivalent", dose_equivalent },
    { "catalytic_activity", catalytic_activity },
    { "velocity", velocity },
    { "area", area },
    { "volume", volume },
    { "density", density },
    { "massic_energy", massic_energy },
    { "entropy", entropy },
    { "massic_entropy", massic_entropy },
    { "temperature", temperature },
    { "dimensionless", dimensionless },
    { "stress", stress },
    { "amount_of_heat", amount_of_heat },
    { "power", power },
    { "radiant_flux", radiant_flux },
    { "amount_of_electricity", amount_of_electricity },
    { "electromotive_force", electromotive_force },
    { "celsius_temperature", celsius_temperature },
    { "specific_energy_imparted", specific_energy_imparted },
    { "kerma", kerma },
    { "ambient_dose_equivalent", ambient_dose_equivalent },
    { "directional_dose_equivalent", directional_dose_equivalent },
    { "personal_dose_equivalent", personal_dose_equivalent },
    { "heat_capacity", heat_capacity },
    { "massic_heat_capacity", massic_heat_capacity },
    { "massic_enthalpy", massic_enthalpy },

};
    inline const auto
values_to_names = std::unordered_map <dimension_t, std::string>
{
    { none, "none" },
    { length, "length" },
    { mass, "mass" },
    { time, "time" },
    { electric_current, "electric_current" },
    { thermodynamic_temperature, "thermodynamic_temperature" },
    { amount_of_substance, "amount_of_substance" },
    { luminous_intensity, "luminous_intensity" },
    { frequency, "frequency" },
    { force, "force" },
    { pressure, "pressure" },
    { energy, "energy" },
    { work, "work" },
    { electric_charge, "electric_charge" },
    { electric_potential_difference, "electric_potential_difference" },
    { capacitance, "capacitance" },
    { electric_resistance, "electric_resistance" },
    { electric_conductance, "electric_conductance" },
    { magnetic_flux, "magnetic_flux" },
    { magnetic_flux_density, "magnetic_flux_density" },
    { inductance, "inductance" },
    { luminous_flux, "luminous_flux" },
    { illuminance, "illuminance" },
    { activity_referred_to_a_radionuclide, "activity_referred_to_a_radionuclide" },
    { absorbed_dose, "absorbed_dose" },
    { dose_equivalent, "dose_equivalent" },
    { catalytic_activity, "catalytic_activity" },
    { velocity, "velocity" },
    { area, "area" },
    { volume, "volume" },
    { density, "density" },
    { massic_energy, "massic_energy" },
    { entropy, "entropy" },
    { massic_entropy, "massic_entropy" },
    { temperature, "temperature" },
    { dimensionless, "dimensionless" },
    { stress, "stress" },
    { amount_of_heat, "amount_of_heat" },
    { power, "power" },
    { radiant_flux, "radiant_flux" },
    { amount_of_electricity, "amount_of_electricity" },
    { electromotive_force, "electromotive_force" },
    { celsius_temperature, "celsius_temperature" },
    { specific_energy_imparted, "specific_energy_imparted" },
    { kerma, "kerma" },
    { ambient_dose_equivalent, "ambient_dose_equivalent" },
    { directional_dose_equivalent, "directional_dose_equivalent" },
    { personal_dose_equivalent, "personal_dose_equivalent" },
    { heat_capacity, "heat_capacity" },
    { massic_heat_capacity, "massic_heat_capacity" },
    { massic_enthalpy, "massic_enthalpy" },

};

} // namespace dimension

template <class T> using none_t = quantity_t <dimension::none, T>;
template <class T> using length_t = quantity_t <dimension::length, T>;
template <class T> using mass_t = quantity_t <dimension::mass, T>;
template <class T> using time_t = quantity_t <dimension::time, T>;
template <class T> using electric_current_t = quantity_t <dimension::electric_current, T>;
template <class T> using thermodynamic_temperature_t = quantity_t <dimension::thermodynamic_temperature, T>;
template <class T> using amount_of_substance_t = quantity_t <dimension::amount_of_substance, T>;
template <class T> using luminous_intensity_t = quantity_t <dimension::luminous_intensity, T>;
template <class T> using frequency_t = quantity_t <dimension::frequency, T>;
template <class T> using force_t = quantity_t <dimension::force, T>;
template <class T> using pressure_t = quantity_t <dimension::pressure, T>;
template <class T> using energy_t = quantity_t <dimension::energy, T>;
template <class T> using work_t = quantity_t <dimension::work, T>;
template <class T> using electric_charge_t = quantity_t <dimension::electric_charge, T>;
template <class T> using electric_potential_difference_t = quantity_t <dimension::electric_potential_difference, T>;
template <class T> using capacitance_t = quantity_t <dimension::capacitance, T>;
template <class T> using electric_resistance_t = quantity_t <dimension::electric_resistance, T>;
template <class T> using electric_conductance_t = quantity_t <dimension::electric_conductance, T>;
template <class T> using magnetic_flux_t = quantity_t <dimension::magnetic_flux, T>;
template <class T> using magnetic_flux_density_t = quantity_t <dimension::magnetic_flux_density, T>;
template <class T> using inductance_t = quantity_t <dimension::inductance, T>;
template <class T> using luminous_flux_t = quantity_t <dimension::luminous_flux, T>;
template <class T> using illuminance_t = quantity_t <dimension::illuminance, T>;
template <class T> using activity_referred_to_a_radionuclide_t = quantity_t <dimension::activity_referred_to_a_radionuclide, T>;
template <class T> using absorbed_dose_t = quantity_t <dimension::absorbed_dose, T>;
template <class T> using dose_equivalent_t = quantity_t <dimension::dose_equivalent, T>;
template <class T> using catalytic_activity_t = quantity_t <dimension::catalytic_activity, T>;
template <class T> using velocity_t = quantity_t <dimension::velocity, T>;
template <class T> using area_t = quantity_t <dimension::area, T>;
template <class T> using volume_t = quantity_t <dimension::volume, T>;
template <class T> using density_t = quantity_t <dimension::density, T>;
template <class T> using massic_energy_t = quantity_t <dimension::massic_energy, T>;
template <class T> using entropy_t = quantity_t <dimension::entropy, T>;
template <class T> using massic_entropy_t = quantity_t <dimension::massic_entropy, T>;
template <class T> using temperature_t = quantity_t <dimension::temperature, T>;
template <class T> using dimensionless_t = quantity_t <dimension::dimensionless, T>;
template <class T> using stress_t = quantity_t <dimension::stress, T>;
template <class T> using amount_of_heat_t = quantity_t <dimension::amount_of_heat, T>;
template <class T> using power_t = quantity_t <dimension::power, T>;
template <class T> using radiant_flux_t = quantity_t <dimension::radiant_flux, T>;
template <class T> using amount_of_electricity_t = quantity_t <dimension::amount_of_electricity, T>;
template <class T> using electromotive_force_t = quantity_t <dimension::electromotive_force, T>;
template <class T> using celsius_temperature_t = quantity_t <dimension::celsius_temperature, T>;
template <class T> using specific_energy_imparted_t = quantity_t <dimension::specific_energy_imparted, T>;
template <class T> using kerma_t = quantity_t <dimension::kerma, T>;
template <class T> using ambient_dose_equivalent_t = quantity_t <dimension::ambient_dose_equivalent, T>;
template <class T> using directional_dose_equivalent_t = quantity_t <dimension::directional_dose_equivalent, T>;
template <class T> using personal_dose_equivalent_t = quantity_t <dimension::personal_dose_equivalent, T>;
template <class T> using heat_capacity_t = quantity_t <dimension::heat_capacity, T>;
template <class T> using massic_heat_capacity_t = quantity_t <dimension::massic_heat_capacity, T>;
template <class T> using massic_enthalpy_t = quantity_t <dimension::massic_enthalpy, T>;

template <class T> concept none = T::dimension == dimension::none;
template <class T> concept length = T::dimension == dimension::length;
template <class T> concept mass = T::dimension == dimension::mass;
template <class T> concept time = T::dimension == dimension::time;
template <class T> concept electric_current = T::dimension == dimension::electric_current;
template <class T> concept thermodynamic_temperature = T::dimension == dimension::thermodynamic_temperature;
template <class T> concept amount_of_substance = T::dimension == dimension::amount_of_substance;
template <class T> concept luminous_intensity = T::dimension == dimension::luminous_intensity;
template <class T> concept frequency = T::dimension == dimension::frequency;
template <class T> concept force = T::dimension == dimension::force;
template <class T> concept pressure = T::dimension == dimension::pressure;
template <class T> concept energy = T::dimension == dimension::energy;
template <class T> concept work = T::dimension == dimension::work;
template <class T> concept electric_charge = T::dimension == dimension::electric_charge;
template <class T> concept electric_potential_difference = T::dimension == dimension::electric_potential_difference;
template <class T> concept capacitance = T::dimension == dimension::capacitance;
template <class T> concept electric_resistance = T::dimension == dimension::electric_resistance;
template <class T> concept electric_conductance = T::dimension == dimension::electric_conductance;
template <class T> concept magnetic_flux = T::dimension == dimension::magnetic_flux;
template <class T> concept magnetic_flux_density = T::dimension == dimension::magnetic_flux_density;
template <class T> concept inductance = T::dimension == dimension::inductance;
template <class T> concept luminous_flux = T::dimension == dimension::luminous_flux;
template <class T> concept illuminance = T::dimension == dimension::illuminance;
template <class T> concept activity_referred_to_a_radionuclide = T::dimension == dimension::activity_referred_to_a_radionuclide;
template <class T> concept absorbed_dose = T::dimension == dimension::absorbed_dose;
template <class T> concept dose_equivalent = T::dimension == dimension::dose_equivalent;
template <class T> concept catalytic_activity = T::dimension == dimension::catalytic_activity;
template <class T> concept velocity = T::dimension == dimension::velocity;
template <class T> concept area = T::dimension == dimension::area;
template <class T> concept volume = T::dimension == dimension::volume;
template <class T> concept density = T::dimension == dimension::density;
template <class T> concept massic_energy = T::dimension == dimension::massic_energy;
template <class T> concept entropy = T::dimension == dimension::entropy;
template <class T> concept massic_entropy = T::dimension == dimension::massic_entropy;
template <class T> concept temperature = T::dimension == dimension::temperature;
template <class T> concept dimensionless = T::dimension == dimension::dimensionless;
template <class T> concept stress = T::dimension == dimension::stress;
template <class T> concept amount_of_heat = T::dimension == dimension::amount_of_heat;
template <class T> concept power = T::dimension == dimension::power;
template <class T> concept radiant_flux = T::dimension == dimension::radiant_flux;
template <class T> concept amount_of_electricity = T::dimension == dimension::amount_of_electricity;
template <class T> concept electromotive_force = T::dimension == dimension::electromotive_force;
template <class T> concept celsius_temperature = T::dimension == dimension::celsius_temperature;
template <class T> concept specific_energy_imparted = T::dimension == dimension::specific_energy_imparted;
template <class T> concept kerma = T::dimension == dimension::kerma;
template <class T> concept ambient_dose_equivalent = T::dimension == dimension::ambient_dose_equivalent;
template <class T> concept directional_dose_equivalent = T::dimension == dimension::directional_dose_equivalent;
template <class T> concept personal_dose_equivalent = T::dimension == dimension::personal_dose_equivalent;
template <class T> concept heat_capacity = T::dimension == dimension::heat_capacity;
template <class T> concept massic_heat_capacity = T::dimension == dimension::massic_heat_capacity;
template <class T> concept massic_enthalpy = T::dimension == dimension::massic_enthalpy;

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

    template <class T = double> inline constexpr auto none = quantity_t <dimension::none, T> { 1.0 };
    template <class T = double> inline constexpr auto yottanone = prefix::yotta <T> * none <T>;
    template <class T = double> inline constexpr auto zettanone = prefix::zetta <T> * none <T>;
    template <class T = double> inline constexpr auto exanone   = prefix::exa   <T> * none <T>;
    template <class T = double> inline constexpr auto petanone  = prefix::peta  <T> * none <T>;
    template <class T = double> inline constexpr auto teranone  = prefix::tera  <T> * none <T>;
    template <class T = double> inline constexpr auto giganone  = prefix::giga  <T> * none <T>;
    template <class T = double> inline constexpr auto meganone  = prefix::mega  <T> * none <T>;
    template <class T = double> inline constexpr auto kilonone  = prefix::kilo  <T> * none <T>;
    template <class T = double> inline constexpr auto hectonone = prefix::hecto <T> * none <T>;
    template <class T = double> inline constexpr auto decanone  = prefix::deca  <T> * none <T>;
    template <class T = double> inline constexpr auto decinone  = prefix::deci  <T> * none <T>;
    template <class T = double> inline constexpr auto centinone = prefix::centi <T> * none <T>;
    template <class T = double> inline constexpr auto millinone = prefix::milli <T> * none <T>;
    template <class T = double> inline constexpr auto micronone = prefix::micro <T> * none <T>;
    template <class T = double> inline constexpr auto nanonone  = prefix::nano  <T> * none <T>;
    template <class T = double> inline constexpr auto piconone  = prefix::pico  <T> * none <T>;
    template <class T = double> inline constexpr auto femtonone = prefix::femto <T> * none <T>;
    template <class T = double> inline constexpr auto attonone  = prefix::femto <T> * none <T>;
    template <class T = double> inline constexpr auto zeptonone = prefix::zepto <T> * none <T>;
    template <class T = double> inline constexpr auto yoctonone = prefix::yocto <T> * none <T>;

    template <class T = double> inline constexpr auto metre = quantity_t <dimension::length, T> { 1.0 };
    template <class T = double> inline constexpr auto yottametre = prefix::yotta <T> * metre <T>;
    template <class T = double> inline constexpr auto zettametre = prefix::zetta <T> * metre <T>;
    template <class T = double> inline constexpr auto exametre   = prefix::exa   <T> * metre <T>;
    template <class T = double> inline constexpr auto petametre  = prefix::peta  <T> * metre <T>;
    template <class T = double> inline constexpr auto terametre  = prefix::tera  <T> * metre <T>;
    template <class T = double> inline constexpr auto gigametre  = prefix::giga  <T> * metre <T>;
    template <class T = double> inline constexpr auto megametre  = prefix::mega  <T> * metre <T>;
    template <class T = double> inline constexpr auto kilometre  = prefix::kilo  <T> * metre <T>;
    template <class T = double> inline constexpr auto hectometre = prefix::hecto <T> * metre <T>;
    template <class T = double> inline constexpr auto decametre  = prefix::deca  <T> * metre <T>;
    template <class T = double> inline constexpr auto decimetre  = prefix::deci  <T> * metre <T>;
    template <class T = double> inline constexpr auto centimetre = prefix::centi <T> * metre <T>;
    template <class T = double> inline constexpr auto millimetre = prefix::milli <T> * metre <T>;
    template <class T = double> inline constexpr auto micrometre = prefix::micro <T> * metre <T>;
    template <class T = double> inline constexpr auto nanometre  = prefix::nano  <T> * metre <T>;
    template <class T = double> inline constexpr auto picometre  = prefix::pico  <T> * metre <T>;
    template <class T = double> inline constexpr auto femtometre = prefix::femto <T> * metre <T>;
    template <class T = double> inline constexpr auto attometre  = prefix::femto <T> * metre <T>;
    template <class T = double> inline constexpr auto zeptometre = prefix::zepto <T> * metre <T>;
    template <class T = double> inline constexpr auto yoctometre = prefix::yocto <T> * metre <T>;

    template <class T = double> inline constexpr auto gram = quantity_t <dimension::mass, T> { 0.001 };
    template <class T = double> inline constexpr auto yottagram = prefix::yotta <T> * gram <T>;
    template <class T = double> inline constexpr auto zettagram = prefix::zetta <T> * gram <T>;
    template <class T = double> inline constexpr auto exagram   = prefix::exa   <T> * gram <T>;
    template <class T = double> inline constexpr auto petagram  = prefix::peta  <T> * gram <T>;
    template <class T = double> inline constexpr auto teragram  = prefix::tera  <T> * gram <T>;
    template <class T = double> inline constexpr auto gigagram  = prefix::giga  <T> * gram <T>;
    template <class T = double> inline constexpr auto megagram  = prefix::mega  <T> * gram <T>;
    template <class T = double> inline constexpr auto kilogram  = prefix::kilo  <T> * gram <T>;
    template <class T = double> inline constexpr auto hectogram = prefix::hecto <T> * gram <T>;
    template <class T = double> inline constexpr auto decagram  = prefix::deca  <T> * gram <T>;
    template <class T = double> inline constexpr auto decigram  = prefix::deci  <T> * gram <T>;
    template <class T = double> inline constexpr auto centigram = prefix::centi <T> * gram <T>;
    template <class T = double> inline constexpr auto milligram = prefix::milli <T> * gram <T>;
    template <class T = double> inline constexpr auto microgram = prefix::micro <T> * gram <T>;
    template <class T = double> inline constexpr auto nanogram  = prefix::nano  <T> * gram <T>;
    template <class T = double> inline constexpr auto picogram  = prefix::pico  <T> * gram <T>;
    template <class T = double> inline constexpr auto femtogram = prefix::femto <T> * gram <T>;
    template <class T = double> inline constexpr auto attogram  = prefix::femto <T> * gram <T>;
    template <class T = double> inline constexpr auto zeptogram = prefix::zepto <T> * gram <T>;
    template <class T = double> inline constexpr auto yoctogram = prefix::yocto <T> * gram <T>;

    template <class T = double> inline constexpr auto second = quantity_t <dimension::time, T> { 1.0 };
    template <class T = double> inline constexpr auto yottasecond = prefix::yotta <T> * second <T>;
    template <class T = double> inline constexpr auto zettasecond = prefix::zetta <T> * second <T>;
    template <class T = double> inline constexpr auto exasecond   = prefix::exa   <T> * second <T>;
    template <class T = double> inline constexpr auto petasecond  = prefix::peta  <T> * second <T>;
    template <class T = double> inline constexpr auto terasecond  = prefix::tera  <T> * second <T>;
    template <class T = double> inline constexpr auto gigasecond  = prefix::giga  <T> * second <T>;
    template <class T = double> inline constexpr auto megasecond  = prefix::mega  <T> * second <T>;
    template <class T = double> inline constexpr auto kilosecond  = prefix::kilo  <T> * second <T>;
    template <class T = double> inline constexpr auto hectosecond = prefix::hecto <T> * second <T>;
    template <class T = double> inline constexpr auto decasecond  = prefix::deca  <T> * second <T>;
    template <class T = double> inline constexpr auto decisecond  = prefix::deci  <T> * second <T>;
    template <class T = double> inline constexpr auto centisecond = prefix::centi <T> * second <T>;
    template <class T = double> inline constexpr auto millisecond = prefix::milli <T> * second <T>;
    template <class T = double> inline constexpr auto microsecond = prefix::micro <T> * second <T>;
    template <class T = double> inline constexpr auto nanosecond  = prefix::nano  <T> * second <T>;
    template <class T = double> inline constexpr auto picosecond  = prefix::pico  <T> * second <T>;
    template <class T = double> inline constexpr auto femtosecond = prefix::femto <T> * second <T>;
    template <class T = double> inline constexpr auto attosecond  = prefix::femto <T> * second <T>;
    template <class T = double> inline constexpr auto zeptosecond = prefix::zepto <T> * second <T>;
    template <class T = double> inline constexpr auto yoctosecond = prefix::yocto <T> * second <T>;

    template <class T = double> inline constexpr auto ampere = quantity_t <dimension::electric_current, T> { 1.0 };
    template <class T = double> inline constexpr auto yottaampere = prefix::yotta <T> * ampere <T>;
    template <class T = double> inline constexpr auto zettaampere = prefix::zetta <T> * ampere <T>;
    template <class T = double> inline constexpr auto exaampere   = prefix::exa   <T> * ampere <T>;
    template <class T = double> inline constexpr auto petaampere  = prefix::peta  <T> * ampere <T>;
    template <class T = double> inline constexpr auto teraampere  = prefix::tera  <T> * ampere <T>;
    template <class T = double> inline constexpr auto gigaampere  = prefix::giga  <T> * ampere <T>;
    template <class T = double> inline constexpr auto megaampere  = prefix::mega  <T> * ampere <T>;
    template <class T = double> inline constexpr auto kiloampere  = prefix::kilo  <T> * ampere <T>;
    template <class T = double> inline constexpr auto hectoampere = prefix::hecto <T> * ampere <T>;
    template <class T = double> inline constexpr auto decaampere  = prefix::deca  <T> * ampere <T>;
    template <class T = double> inline constexpr auto deciampere  = prefix::deci  <T> * ampere <T>;
    template <class T = double> inline constexpr auto centiampere = prefix::centi <T> * ampere <T>;
    template <class T = double> inline constexpr auto milliampere = prefix::milli <T> * ampere <T>;
    template <class T = double> inline constexpr auto microampere = prefix::micro <T> * ampere <T>;
    template <class T = double> inline constexpr auto nanoampere  = prefix::nano  <T> * ampere <T>;
    template <class T = double> inline constexpr auto picoampere  = prefix::pico  <T> * ampere <T>;
    template <class T = double> inline constexpr auto femtoampere = prefix::femto <T> * ampere <T>;
    template <class T = double> inline constexpr auto attoampere  = prefix::femto <T> * ampere <T>;
    template <class T = double> inline constexpr auto zeptoampere = prefix::zepto <T> * ampere <T>;
    template <class T = double> inline constexpr auto yoctoampere = prefix::yocto <T> * ampere <T>;

    template <class T = double> inline constexpr auto kelvin = quantity_t <dimension::thermodynamic_temperature, T> { 1.0 };
    template <class T = double> inline constexpr auto yottakelvin = prefix::yotta <T> * kelvin <T>;
    template <class T = double> inline constexpr auto zettakelvin = prefix::zetta <T> * kelvin <T>;
    template <class T = double> inline constexpr auto exakelvin   = prefix::exa   <T> * kelvin <T>;
    template <class T = double> inline constexpr auto petakelvin  = prefix::peta  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto terakelvin  = prefix::tera  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto gigakelvin  = prefix::giga  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto megakelvin  = prefix::mega  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto kilokelvin  = prefix::kilo  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto hectokelvin = prefix::hecto <T> * kelvin <T>;
    template <class T = double> inline constexpr auto decakelvin  = prefix::deca  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto decikelvin  = prefix::deci  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto centikelvin = prefix::centi <T> * kelvin <T>;
    template <class T = double> inline constexpr auto millikelvin = prefix::milli <T> * kelvin <T>;
    template <class T = double> inline constexpr auto microkelvin = prefix::micro <T> * kelvin <T>;
    template <class T = double> inline constexpr auto nanokelvin  = prefix::nano  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto picokelvin  = prefix::pico  <T> * kelvin <T>;
    template <class T = double> inline constexpr auto femtokelvin = prefix::femto <T> * kelvin <T>;
    template <class T = double> inline constexpr auto attokelvin  = prefix::femto <T> * kelvin <T>;
    template <class T = double> inline constexpr auto zeptokelvin = prefix::zepto <T> * kelvin <T>;
    template <class T = double> inline constexpr auto yoctokelvin = prefix::yocto <T> * kelvin <T>;

    template <class T = double> inline constexpr auto mole = quantity_t <dimension::amount_of_substance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottamole = prefix::yotta <T> * mole <T>;
    template <class T = double> inline constexpr auto zettamole = prefix::zetta <T> * mole <T>;
    template <class T = double> inline constexpr auto examole   = prefix::exa   <T> * mole <T>;
    template <class T = double> inline constexpr auto petamole  = prefix::peta  <T> * mole <T>;
    template <class T = double> inline constexpr auto teramole  = prefix::tera  <T> * mole <T>;
    template <class T = double> inline constexpr auto gigamole  = prefix::giga  <T> * mole <T>;
    template <class T = double> inline constexpr auto megamole  = prefix::mega  <T> * mole <T>;
    template <class T = double> inline constexpr auto kilomole  = prefix::kilo  <T> * mole <T>;
    template <class T = double> inline constexpr auto hectomole = prefix::hecto <T> * mole <T>;
    template <class T = double> inline constexpr auto decamole  = prefix::deca  <T> * mole <T>;
    template <class T = double> inline constexpr auto decimole  = prefix::deci  <T> * mole <T>;
    template <class T = double> inline constexpr auto centimole = prefix::centi <T> * mole <T>;
    template <class T = double> inline constexpr auto millimole = prefix::milli <T> * mole <T>;
    template <class T = double> inline constexpr auto micromole = prefix::micro <T> * mole <T>;
    template <class T = double> inline constexpr auto nanomole  = prefix::nano  <T> * mole <T>;
    template <class T = double> inline constexpr auto picomole  = prefix::pico  <T> * mole <T>;
    template <class T = double> inline constexpr auto femtomole = prefix::femto <T> * mole <T>;
    template <class T = double> inline constexpr auto attomole  = prefix::femto <T> * mole <T>;
    template <class T = double> inline constexpr auto zeptomole = prefix::zepto <T> * mole <T>;
    template <class T = double> inline constexpr auto yoctomole = prefix::yocto <T> * mole <T>;

    template <class T = double> inline constexpr auto candela = quantity_t <dimension::luminous_intensity, T> { 1.0 };
    template <class T = double> inline constexpr auto yottacandela = prefix::yotta <T> * candela <T>;
    template <class T = double> inline constexpr auto zettacandela = prefix::zetta <T> * candela <T>;
    template <class T = double> inline constexpr auto exacandela   = prefix::exa   <T> * candela <T>;
    template <class T = double> inline constexpr auto petacandela  = prefix::peta  <T> * candela <T>;
    template <class T = double> inline constexpr auto teracandela  = prefix::tera  <T> * candela <T>;
    template <class T = double> inline constexpr auto gigacandela  = prefix::giga  <T> * candela <T>;
    template <class T = double> inline constexpr auto megacandela  = prefix::mega  <T> * candela <T>;
    template <class T = double> inline constexpr auto kilocandela  = prefix::kilo  <T> * candela <T>;
    template <class T = double> inline constexpr auto hectocandela = prefix::hecto <T> * candela <T>;
    template <class T = double> inline constexpr auto decacandela  = prefix::deca  <T> * candela <T>;
    template <class T = double> inline constexpr auto decicandela  = prefix::deci  <T> * candela <T>;
    template <class T = double> inline constexpr auto centicandela = prefix::centi <T> * candela <T>;
    template <class T = double> inline constexpr auto millicandela = prefix::milli <T> * candela <T>;
    template <class T = double> inline constexpr auto microcandela = prefix::micro <T> * candela <T>;
    template <class T = double> inline constexpr auto nanocandela  = prefix::nano  <T> * candela <T>;
    template <class T = double> inline constexpr auto picocandela  = prefix::pico  <T> * candela <T>;
    template <class T = double> inline constexpr auto femtocandela = prefix::femto <T> * candela <T>;
    template <class T = double> inline constexpr auto attocandela  = prefix::femto <T> * candela <T>;
    template <class T = double> inline constexpr auto zeptocandela = prefix::zepto <T> * candela <T>;
    template <class T = double> inline constexpr auto yoctocandela = prefix::yocto <T> * candela <T>;

    template <class T = double> inline constexpr auto hertz = quantity_t <dimension::frequency, T> { 1.0 };
    template <class T = double> inline constexpr auto yottahertz = prefix::yotta <T> * hertz <T>;
    template <class T = double> inline constexpr auto zettahertz = prefix::zetta <T> * hertz <T>;
    template <class T = double> inline constexpr auto exahertz   = prefix::exa   <T> * hertz <T>;
    template <class T = double> inline constexpr auto petahertz  = prefix::peta  <T> * hertz <T>;
    template <class T = double> inline constexpr auto terahertz  = prefix::tera  <T> * hertz <T>;
    template <class T = double> inline constexpr auto gigahertz  = prefix::giga  <T> * hertz <T>;
    template <class T = double> inline constexpr auto megahertz  = prefix::mega  <T> * hertz <T>;
    template <class T = double> inline constexpr auto kilohertz  = prefix::kilo  <T> * hertz <T>;
    template <class T = double> inline constexpr auto hectohertz = prefix::hecto <T> * hertz <T>;
    template <class T = double> inline constexpr auto decahertz  = prefix::deca  <T> * hertz <T>;
    template <class T = double> inline constexpr auto decihertz  = prefix::deci  <T> * hertz <T>;
    template <class T = double> inline constexpr auto centihertz = prefix::centi <T> * hertz <T>;
    template <class T = double> inline constexpr auto millihertz = prefix::milli <T> * hertz <T>;
    template <class T = double> inline constexpr auto microhertz = prefix::micro <T> * hertz <T>;
    template <class T = double> inline constexpr auto nanohertz  = prefix::nano  <T> * hertz <T>;
    template <class T = double> inline constexpr auto picohertz  = prefix::pico  <T> * hertz <T>;
    template <class T = double> inline constexpr auto femtohertz = prefix::femto <T> * hertz <T>;
    template <class T = double> inline constexpr auto attohertz  = prefix::femto <T> * hertz <T>;
    template <class T = double> inline constexpr auto zeptohertz = prefix::zepto <T> * hertz <T>;
    template <class T = double> inline constexpr auto yoctohertz = prefix::yocto <T> * hertz <T>;

    template <class T = double> inline constexpr auto newton = quantity_t <dimension::force, T> { 1.0 };
    template <class T = double> inline constexpr auto yottanewton = prefix::yotta <T> * newton <T>;
    template <class T = double> inline constexpr auto zettanewton = prefix::zetta <T> * newton <T>;
    template <class T = double> inline constexpr auto exanewton   = prefix::exa   <T> * newton <T>;
    template <class T = double> inline constexpr auto petanewton  = prefix::peta  <T> * newton <T>;
    template <class T = double> inline constexpr auto teranewton  = prefix::tera  <T> * newton <T>;
    template <class T = double> inline constexpr auto giganewton  = prefix::giga  <T> * newton <T>;
    template <class T = double> inline constexpr auto meganewton  = prefix::mega  <T> * newton <T>;
    template <class T = double> inline constexpr auto kilonewton  = prefix::kilo  <T> * newton <T>;
    template <class T = double> inline constexpr auto hectonewton = prefix::hecto <T> * newton <T>;
    template <class T = double> inline constexpr auto decanewton  = prefix::deca  <T> * newton <T>;
    template <class T = double> inline constexpr auto decinewton  = prefix::deci  <T> * newton <T>;
    template <class T = double> inline constexpr auto centinewton = prefix::centi <T> * newton <T>;
    template <class T = double> inline constexpr auto millinewton = prefix::milli <T> * newton <T>;
    template <class T = double> inline constexpr auto micronewton = prefix::micro <T> * newton <T>;
    template <class T = double> inline constexpr auto nanonewton  = prefix::nano  <T> * newton <T>;
    template <class T = double> inline constexpr auto piconewton  = prefix::pico  <T> * newton <T>;
    template <class T = double> inline constexpr auto femtonewton = prefix::femto <T> * newton <T>;
    template <class T = double> inline constexpr auto attonewton  = prefix::femto <T> * newton <T>;
    template <class T = double> inline constexpr auto zeptonewton = prefix::zepto <T> * newton <T>;
    template <class T = double> inline constexpr auto yoctonewton = prefix::yocto <T> * newton <T>;

    template <class T = double> inline constexpr auto pascal = quantity_t <dimension::pressure, T> { 1.0 };
    template <class T = double> inline constexpr auto yottapascal = prefix::yotta <T> * pascal <T>;
    template <class T = double> inline constexpr auto zettapascal = prefix::zetta <T> * pascal <T>;
    template <class T = double> inline constexpr auto exapascal   = prefix::exa   <T> * pascal <T>;
    template <class T = double> inline constexpr auto petapascal  = prefix::peta  <T> * pascal <T>;
    template <class T = double> inline constexpr auto terapascal  = prefix::tera  <T> * pascal <T>;
    template <class T = double> inline constexpr auto gigapascal  = prefix::giga  <T> * pascal <T>;
    template <class T = double> inline constexpr auto megapascal  = prefix::mega  <T> * pascal <T>;
    template <class T = double> inline constexpr auto kilopascal  = prefix::kilo  <T> * pascal <T>;
    template <class T = double> inline constexpr auto hectopascal = prefix::hecto <T> * pascal <T>;
    template <class T = double> inline constexpr auto decapascal  = prefix::deca  <T> * pascal <T>;
    template <class T = double> inline constexpr auto decipascal  = prefix::deci  <T> * pascal <T>;
    template <class T = double> inline constexpr auto centipascal = prefix::centi <T> * pascal <T>;
    template <class T = double> inline constexpr auto millipascal = prefix::milli <T> * pascal <T>;
    template <class T = double> inline constexpr auto micropascal = prefix::micro <T> * pascal <T>;
    template <class T = double> inline constexpr auto nanopascal  = prefix::nano  <T> * pascal <T>;
    template <class T = double> inline constexpr auto picopascal  = prefix::pico  <T> * pascal <T>;
    template <class T = double> inline constexpr auto femtopascal = prefix::femto <T> * pascal <T>;
    template <class T = double> inline constexpr auto attopascal  = prefix::femto <T> * pascal <T>;
    template <class T = double> inline constexpr auto zeptopascal = prefix::zepto <T> * pascal <T>;
    template <class T = double> inline constexpr auto yoctopascal = prefix::yocto <T> * pascal <T>;

    template <class T = double> inline constexpr auto bar = quantity_t <dimension::pressure, T> { 100000.0 };
    template <class T = double> inline constexpr auto yottabar = prefix::yotta <T> * bar <T>;
    template <class T = double> inline constexpr auto zettabar = prefix::zetta <T> * bar <T>;
    template <class T = double> inline constexpr auto exabar   = prefix::exa   <T> * bar <T>;
    template <class T = double> inline constexpr auto petabar  = prefix::peta  <T> * bar <T>;
    template <class T = double> inline constexpr auto terabar  = prefix::tera  <T> * bar <T>;
    template <class T = double> inline constexpr auto gigabar  = prefix::giga  <T> * bar <T>;
    template <class T = double> inline constexpr auto megabar  = prefix::mega  <T> * bar <T>;
    template <class T = double> inline constexpr auto kilobar  = prefix::kilo  <T> * bar <T>;
    template <class T = double> inline constexpr auto hectobar = prefix::hecto <T> * bar <T>;
    template <class T = double> inline constexpr auto decabar  = prefix::deca  <T> * bar <T>;
    template <class T = double> inline constexpr auto decibar  = prefix::deci  <T> * bar <T>;
    template <class T = double> inline constexpr auto centibar = prefix::centi <T> * bar <T>;
    template <class T = double> inline constexpr auto millibar = prefix::milli <T> * bar <T>;
    template <class T = double> inline constexpr auto microbar = prefix::micro <T> * bar <T>;
    template <class T = double> inline constexpr auto nanobar  = prefix::nano  <T> * bar <T>;
    template <class T = double> inline constexpr auto picobar  = prefix::pico  <T> * bar <T>;
    template <class T = double> inline constexpr auto femtobar = prefix::femto <T> * bar <T>;
    template <class T = double> inline constexpr auto attobar  = prefix::femto <T> * bar <T>;
    template <class T = double> inline constexpr auto zeptobar = prefix::zepto <T> * bar <T>;
    template <class T = double> inline constexpr auto yoctobar = prefix::yocto <T> * bar <T>;

    template <class T = double> inline constexpr auto joule = quantity_t <dimension::energy, T> { 1.0 };
    template <class T = double> inline constexpr auto yottajoule = prefix::yotta <T> * joule <T>;
    template <class T = double> inline constexpr auto zettajoule = prefix::zetta <T> * joule <T>;
    template <class T = double> inline constexpr auto exajoule   = prefix::exa   <T> * joule <T>;
    template <class T = double> inline constexpr auto petajoule  = prefix::peta  <T> * joule <T>;
    template <class T = double> inline constexpr auto terajoule  = prefix::tera  <T> * joule <T>;
    template <class T = double> inline constexpr auto gigajoule  = prefix::giga  <T> * joule <T>;
    template <class T = double> inline constexpr auto megajoule  = prefix::mega  <T> * joule <T>;
    template <class T = double> inline constexpr auto kilojoule  = prefix::kilo  <T> * joule <T>;
    template <class T = double> inline constexpr auto hectojoule = prefix::hecto <T> * joule <T>;
    template <class T = double> inline constexpr auto decajoule  = prefix::deca  <T> * joule <T>;
    template <class T = double> inline constexpr auto decijoule  = prefix::deci  <T> * joule <T>;
    template <class T = double> inline constexpr auto centijoule = prefix::centi <T> * joule <T>;
    template <class T = double> inline constexpr auto millijoule = prefix::milli <T> * joule <T>;
    template <class T = double> inline constexpr auto microjoule = prefix::micro <T> * joule <T>;
    template <class T = double> inline constexpr auto nanojoule  = prefix::nano  <T> * joule <T>;
    template <class T = double> inline constexpr auto picojoule  = prefix::pico  <T> * joule <T>;
    template <class T = double> inline constexpr auto femtojoule = prefix::femto <T> * joule <T>;
    template <class T = double> inline constexpr auto attojoule  = prefix::femto <T> * joule <T>;
    template <class T = double> inline constexpr auto zeptojoule = prefix::zepto <T> * joule <T>;
    template <class T = double> inline constexpr auto yoctojoule = prefix::yocto <T> * joule <T>;

    template <class T = double> inline constexpr auto watt = quantity_t <dimension::work, T> { 1.0 };
    template <class T = double> inline constexpr auto yottawatt = prefix::yotta <T> * watt <T>;
    template <class T = double> inline constexpr auto zettawatt = prefix::zetta <T> * watt <T>;
    template <class T = double> inline constexpr auto exawatt   = prefix::exa   <T> * watt <T>;
    template <class T = double> inline constexpr auto petawatt  = prefix::peta  <T> * watt <T>;
    template <class T = double> inline constexpr auto terawatt  = prefix::tera  <T> * watt <T>;
    template <class T = double> inline constexpr auto gigawatt  = prefix::giga  <T> * watt <T>;
    template <class T = double> inline constexpr auto megawatt  = prefix::mega  <T> * watt <T>;
    template <class T = double> inline constexpr auto kilowatt  = prefix::kilo  <T> * watt <T>;
    template <class T = double> inline constexpr auto hectowatt = prefix::hecto <T> * watt <T>;
    template <class T = double> inline constexpr auto decawatt  = prefix::deca  <T> * watt <T>;
    template <class T = double> inline constexpr auto deciwatt  = prefix::deci  <T> * watt <T>;
    template <class T = double> inline constexpr auto centiwatt = prefix::centi <T> * watt <T>;
    template <class T = double> inline constexpr auto milliwatt = prefix::milli <T> * watt <T>;
    template <class T = double> inline constexpr auto microwatt = prefix::micro <T> * watt <T>;
    template <class T = double> inline constexpr auto nanowatt  = prefix::nano  <T> * watt <T>;
    template <class T = double> inline constexpr auto picowatt  = prefix::pico  <T> * watt <T>;
    template <class T = double> inline constexpr auto femtowatt = prefix::femto <T> * watt <T>;
    template <class T = double> inline constexpr auto attowatt  = prefix::femto <T> * watt <T>;
    template <class T = double> inline constexpr auto zeptowatt = prefix::zepto <T> * watt <T>;
    template <class T = double> inline constexpr auto yoctowatt = prefix::yocto <T> * watt <T>;

    template <class T = double> inline constexpr auto coulomb = quantity_t <dimension::electric_charge, T> { 1.0 };
    template <class T = double> inline constexpr auto yottacoulomb = prefix::yotta <T> * coulomb <T>;
    template <class T = double> inline constexpr auto zettacoulomb = prefix::zetta <T> * coulomb <T>;
    template <class T = double> inline constexpr auto exacoulomb   = prefix::exa   <T> * coulomb <T>;
    template <class T = double> inline constexpr auto petacoulomb  = prefix::peta  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto teracoulomb  = prefix::tera  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto gigacoulomb  = prefix::giga  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto megacoulomb  = prefix::mega  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto kilocoulomb  = prefix::kilo  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto hectocoulomb = prefix::hecto <T> * coulomb <T>;
    template <class T = double> inline constexpr auto decacoulomb  = prefix::deca  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto decicoulomb  = prefix::deci  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto centicoulomb = prefix::centi <T> * coulomb <T>;
    template <class T = double> inline constexpr auto millicoulomb = prefix::milli <T> * coulomb <T>;
    template <class T = double> inline constexpr auto microcoulomb = prefix::micro <T> * coulomb <T>;
    template <class T = double> inline constexpr auto nanocoulomb  = prefix::nano  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto picocoulomb  = prefix::pico  <T> * coulomb <T>;
    template <class T = double> inline constexpr auto femtocoulomb = prefix::femto <T> * coulomb <T>;
    template <class T = double> inline constexpr auto attocoulomb  = prefix::femto <T> * coulomb <T>;
    template <class T = double> inline constexpr auto zeptocoulomb = prefix::zepto <T> * coulomb <T>;
    template <class T = double> inline constexpr auto yoctocoulomb = prefix::yocto <T> * coulomb <T>;

    template <class T = double> inline constexpr auto volt = quantity_t <dimension::electric_potential_difference, T> { 1.0 };
    template <class T = double> inline constexpr auto yottavolt = prefix::yotta <T> * volt <T>;
    template <class T = double> inline constexpr auto zettavolt = prefix::zetta <T> * volt <T>;
    template <class T = double> inline constexpr auto exavolt   = prefix::exa   <T> * volt <T>;
    template <class T = double> inline constexpr auto petavolt  = prefix::peta  <T> * volt <T>;
    template <class T = double> inline constexpr auto teravolt  = prefix::tera  <T> * volt <T>;
    template <class T = double> inline constexpr auto gigavolt  = prefix::giga  <T> * volt <T>;
    template <class T = double> inline constexpr auto megavolt  = prefix::mega  <T> * volt <T>;
    template <class T = double> inline constexpr auto kilovolt  = prefix::kilo  <T> * volt <T>;
    template <class T = double> inline constexpr auto hectovolt = prefix::hecto <T> * volt <T>;
    template <class T = double> inline constexpr auto decavolt  = prefix::deca  <T> * volt <T>;
    template <class T = double> inline constexpr auto decivolt  = prefix::deci  <T> * volt <T>;
    template <class T = double> inline constexpr auto centivolt = prefix::centi <T> * volt <T>;
    template <class T = double> inline constexpr auto millivolt = prefix::milli <T> * volt <T>;
    template <class T = double> inline constexpr auto microvolt = prefix::micro <T> * volt <T>;
    template <class T = double> inline constexpr auto nanovolt  = prefix::nano  <T> * volt <T>;
    template <class T = double> inline constexpr auto picovolt  = prefix::pico  <T> * volt <T>;
    template <class T = double> inline constexpr auto femtovolt = prefix::femto <T> * volt <T>;
    template <class T = double> inline constexpr auto attovolt  = prefix::femto <T> * volt <T>;
    template <class T = double> inline constexpr auto zeptovolt = prefix::zepto <T> * volt <T>;
    template <class T = double> inline constexpr auto yoctovolt = prefix::yocto <T> * volt <T>;

    template <class T = double> inline constexpr auto farad = quantity_t <dimension::capacitance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottafarad = prefix::yotta <T> * farad <T>;
    template <class T = double> inline constexpr auto zettafarad = prefix::zetta <T> * farad <T>;
    template <class T = double> inline constexpr auto exafarad   = prefix::exa   <T> * farad <T>;
    template <class T = double> inline constexpr auto petafarad  = prefix::peta  <T> * farad <T>;
    template <class T = double> inline constexpr auto terafarad  = prefix::tera  <T> * farad <T>;
    template <class T = double> inline constexpr auto gigafarad  = prefix::giga  <T> * farad <T>;
    template <class T = double> inline constexpr auto megafarad  = prefix::mega  <T> * farad <T>;
    template <class T = double> inline constexpr auto kilofarad  = prefix::kilo  <T> * farad <T>;
    template <class T = double> inline constexpr auto hectofarad = prefix::hecto <T> * farad <T>;
    template <class T = double> inline constexpr auto decafarad  = prefix::deca  <T> * farad <T>;
    template <class T = double> inline constexpr auto decifarad  = prefix::deci  <T> * farad <T>;
    template <class T = double> inline constexpr auto centifarad = prefix::centi <T> * farad <T>;
    template <class T = double> inline constexpr auto millifarad = prefix::milli <T> * farad <T>;
    template <class T = double> inline constexpr auto microfarad = prefix::micro <T> * farad <T>;
    template <class T = double> inline constexpr auto nanofarad  = prefix::nano  <T> * farad <T>;
    template <class T = double> inline constexpr auto picofarad  = prefix::pico  <T> * farad <T>;
    template <class T = double> inline constexpr auto femtofarad = prefix::femto <T> * farad <T>;
    template <class T = double> inline constexpr auto attofarad  = prefix::femto <T> * farad <T>;
    template <class T = double> inline constexpr auto zeptofarad = prefix::zepto <T> * farad <T>;
    template <class T = double> inline constexpr auto yoctofarad = prefix::yocto <T> * farad <T>;

    template <class T = double> inline constexpr auto ohm = quantity_t <dimension::electric_resistance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottaohm = prefix::yotta <T> * ohm <T>;
    template <class T = double> inline constexpr auto zettaohm = prefix::zetta <T> * ohm <T>;
    template <class T = double> inline constexpr auto exaohm   = prefix::exa   <T> * ohm <T>;
    template <class T = double> inline constexpr auto petaohm  = prefix::peta  <T> * ohm <T>;
    template <class T = double> inline constexpr auto teraohm  = prefix::tera  <T> * ohm <T>;
    template <class T = double> inline constexpr auto gigaohm  = prefix::giga  <T> * ohm <T>;
    template <class T = double> inline constexpr auto megaohm  = prefix::mega  <T> * ohm <T>;
    template <class T = double> inline constexpr auto kiloohm  = prefix::kilo  <T> * ohm <T>;
    template <class T = double> inline constexpr auto hectoohm = prefix::hecto <T> * ohm <T>;
    template <class T = double> inline constexpr auto decaohm  = prefix::deca  <T> * ohm <T>;
    template <class T = double> inline constexpr auto deciohm  = prefix::deci  <T> * ohm <T>;
    template <class T = double> inline constexpr auto centiohm = prefix::centi <T> * ohm <T>;
    template <class T = double> inline constexpr auto milliohm = prefix::milli <T> * ohm <T>;
    template <class T = double> inline constexpr auto microohm = prefix::micro <T> * ohm <T>;
    template <class T = double> inline constexpr auto nanoohm  = prefix::nano  <T> * ohm <T>;
    template <class T = double> inline constexpr auto picoohm  = prefix::pico  <T> * ohm <T>;
    template <class T = double> inline constexpr auto femtoohm = prefix::femto <T> * ohm <T>;
    template <class T = double> inline constexpr auto attoohm  = prefix::femto <T> * ohm <T>;
    template <class T = double> inline constexpr auto zeptoohm = prefix::zepto <T> * ohm <T>;
    template <class T = double> inline constexpr auto yoctoohm = prefix::yocto <T> * ohm <T>;

    template <class T = double> inline constexpr auto siemens = quantity_t <dimension::electric_conductance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottasiemens = prefix::yotta <T> * siemens <T>;
    template <class T = double> inline constexpr auto zettasiemens = prefix::zetta <T> * siemens <T>;
    template <class T = double> inline constexpr auto exasiemens   = prefix::exa   <T> * siemens <T>;
    template <class T = double> inline constexpr auto petasiemens  = prefix::peta  <T> * siemens <T>;
    template <class T = double> inline constexpr auto terasiemens  = prefix::tera  <T> * siemens <T>;
    template <class T = double> inline constexpr auto gigasiemens  = prefix::giga  <T> * siemens <T>;
    template <class T = double> inline constexpr auto megasiemens  = prefix::mega  <T> * siemens <T>;
    template <class T = double> inline constexpr auto kilosiemens  = prefix::kilo  <T> * siemens <T>;
    template <class T = double> inline constexpr auto hectosiemens = prefix::hecto <T> * siemens <T>;
    template <class T = double> inline constexpr auto decasiemens  = prefix::deca  <T> * siemens <T>;
    template <class T = double> inline constexpr auto decisiemens  = prefix::deci  <T> * siemens <T>;
    template <class T = double> inline constexpr auto centisiemens = prefix::centi <T> * siemens <T>;
    template <class T = double> inline constexpr auto millisiemens = prefix::milli <T> * siemens <T>;
    template <class T = double> inline constexpr auto microsiemens = prefix::micro <T> * siemens <T>;
    template <class T = double> inline constexpr auto nanosiemens  = prefix::nano  <T> * siemens <T>;
    template <class T = double> inline constexpr auto picosiemens  = prefix::pico  <T> * siemens <T>;
    template <class T = double> inline constexpr auto femtosiemens = prefix::femto <T> * siemens <T>;
    template <class T = double> inline constexpr auto attosiemens  = prefix::femto <T> * siemens <T>;
    template <class T = double> inline constexpr auto zeptosiemens = prefix::zepto <T> * siemens <T>;
    template <class T = double> inline constexpr auto yoctosiemens = prefix::yocto <T> * siemens <T>;

    template <class T = double> inline constexpr auto weber = quantity_t <dimension::magnetic_flux, T> { 1.0 };
    template <class T = double> inline constexpr auto yottaweber = prefix::yotta <T> * weber <T>;
    template <class T = double> inline constexpr auto zettaweber = prefix::zetta <T> * weber <T>;
    template <class T = double> inline constexpr auto exaweber   = prefix::exa   <T> * weber <T>;
    template <class T = double> inline constexpr auto petaweber  = prefix::peta  <T> * weber <T>;
    template <class T = double> inline constexpr auto teraweber  = prefix::tera  <T> * weber <T>;
    template <class T = double> inline constexpr auto gigaweber  = prefix::giga  <T> * weber <T>;
    template <class T = double> inline constexpr auto megaweber  = prefix::mega  <T> * weber <T>;
    template <class T = double> inline constexpr auto kiloweber  = prefix::kilo  <T> * weber <T>;
    template <class T = double> inline constexpr auto hectoweber = prefix::hecto <T> * weber <T>;
    template <class T = double> inline constexpr auto decaweber  = prefix::deca  <T> * weber <T>;
    template <class T = double> inline constexpr auto deciweber  = prefix::deci  <T> * weber <T>;
    template <class T = double> inline constexpr auto centiweber = prefix::centi <T> * weber <T>;
    template <class T = double> inline constexpr auto milliweber = prefix::milli <T> * weber <T>;
    template <class T = double> inline constexpr auto microweber = prefix::micro <T> * weber <T>;
    template <class T = double> inline constexpr auto nanoweber  = prefix::nano  <T> * weber <T>;
    template <class T = double> inline constexpr auto picoweber  = prefix::pico  <T> * weber <T>;
    template <class T = double> inline constexpr auto femtoweber = prefix::femto <T> * weber <T>;
    template <class T = double> inline constexpr auto attoweber  = prefix::femto <T> * weber <T>;
    template <class T = double> inline constexpr auto zeptoweber = prefix::zepto <T> * weber <T>;
    template <class T = double> inline constexpr auto yoctoweber = prefix::yocto <T> * weber <T>;

    template <class T = double> inline constexpr auto tesla = quantity_t <dimension::magnetic_flux_density, T> { 1.0 };
    template <class T = double> inline constexpr auto yottatesla = prefix::yotta <T> * tesla <T>;
    template <class T = double> inline constexpr auto zettatesla = prefix::zetta <T> * tesla <T>;
    template <class T = double> inline constexpr auto exatesla   = prefix::exa   <T> * tesla <T>;
    template <class T = double> inline constexpr auto petatesla  = prefix::peta  <T> * tesla <T>;
    template <class T = double> inline constexpr auto teratesla  = prefix::tera  <T> * tesla <T>;
    template <class T = double> inline constexpr auto gigatesla  = prefix::giga  <T> * tesla <T>;
    template <class T = double> inline constexpr auto megatesla  = prefix::mega  <T> * tesla <T>;
    template <class T = double> inline constexpr auto kilotesla  = prefix::kilo  <T> * tesla <T>;
    template <class T = double> inline constexpr auto hectotesla = prefix::hecto <T> * tesla <T>;
    template <class T = double> inline constexpr auto decatesla  = prefix::deca  <T> * tesla <T>;
    template <class T = double> inline constexpr auto decitesla  = prefix::deci  <T> * tesla <T>;
    template <class T = double> inline constexpr auto centitesla = prefix::centi <T> * tesla <T>;
    template <class T = double> inline constexpr auto millitesla = prefix::milli <T> * tesla <T>;
    template <class T = double> inline constexpr auto microtesla = prefix::micro <T> * tesla <T>;
    template <class T = double> inline constexpr auto nanotesla  = prefix::nano  <T> * tesla <T>;
    template <class T = double> inline constexpr auto picotesla  = prefix::pico  <T> * tesla <T>;
    template <class T = double> inline constexpr auto femtotesla = prefix::femto <T> * tesla <T>;
    template <class T = double> inline constexpr auto attotesla  = prefix::femto <T> * tesla <T>;
    template <class T = double> inline constexpr auto zeptotesla = prefix::zepto <T> * tesla <T>;
    template <class T = double> inline constexpr auto yoctotesla = prefix::yocto <T> * tesla <T>;

    template <class T = double> inline constexpr auto henry = quantity_t <dimension::inductance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottahenry = prefix::yotta <T> * henry <T>;
    template <class T = double> inline constexpr auto zettahenry = prefix::zetta <T> * henry <T>;
    template <class T = double> inline constexpr auto exahenry   = prefix::exa   <T> * henry <T>;
    template <class T = double> inline constexpr auto petahenry  = prefix::peta  <T> * henry <T>;
    template <class T = double> inline constexpr auto terahenry  = prefix::tera  <T> * henry <T>;
    template <class T = double> inline constexpr auto gigahenry  = prefix::giga  <T> * henry <T>;
    template <class T = double> inline constexpr auto megahenry  = prefix::mega  <T> * henry <T>;
    template <class T = double> inline constexpr auto kilohenry  = prefix::kilo  <T> * henry <T>;
    template <class T = double> inline constexpr auto hectohenry = prefix::hecto <T> * henry <T>;
    template <class T = double> inline constexpr auto decahenry  = prefix::deca  <T> * henry <T>;
    template <class T = double> inline constexpr auto decihenry  = prefix::deci  <T> * henry <T>;
    template <class T = double> inline constexpr auto centihenry = prefix::centi <T> * henry <T>;
    template <class T = double> inline constexpr auto millihenry = prefix::milli <T> * henry <T>;
    template <class T = double> inline constexpr auto microhenry = prefix::micro <T> * henry <T>;
    template <class T = double> inline constexpr auto nanohenry  = prefix::nano  <T> * henry <T>;
    template <class T = double> inline constexpr auto picohenry  = prefix::pico  <T> * henry <T>;
    template <class T = double> inline constexpr auto femtohenry = prefix::femto <T> * henry <T>;
    template <class T = double> inline constexpr auto attohenry  = prefix::femto <T> * henry <T>;
    template <class T = double> inline constexpr auto zeptohenry = prefix::zepto <T> * henry <T>;
    template <class T = double> inline constexpr auto yoctohenry = prefix::yocto <T> * henry <T>;

    template <class T = double> inline constexpr auto lumen = quantity_t <dimension::luminous_flux, T> { 1.0 };
    template <class T = double> inline constexpr auto yottalumen = prefix::yotta <T> * lumen <T>;
    template <class T = double> inline constexpr auto zettalumen = prefix::zetta <T> * lumen <T>;
    template <class T = double> inline constexpr auto exalumen   = prefix::exa   <T> * lumen <T>;
    template <class T = double> inline constexpr auto petalumen  = prefix::peta  <T> * lumen <T>;
    template <class T = double> inline constexpr auto teralumen  = prefix::tera  <T> * lumen <T>;
    template <class T = double> inline constexpr auto gigalumen  = prefix::giga  <T> * lumen <T>;
    template <class T = double> inline constexpr auto megalumen  = prefix::mega  <T> * lumen <T>;
    template <class T = double> inline constexpr auto kilolumen  = prefix::kilo  <T> * lumen <T>;
    template <class T = double> inline constexpr auto hectolumen = prefix::hecto <T> * lumen <T>;
    template <class T = double> inline constexpr auto decalumen  = prefix::deca  <T> * lumen <T>;
    template <class T = double> inline constexpr auto decilumen  = prefix::deci  <T> * lumen <T>;
    template <class T = double> inline constexpr auto centilumen = prefix::centi <T> * lumen <T>;
    template <class T = double> inline constexpr auto millilumen = prefix::milli <T> * lumen <T>;
    template <class T = double> inline constexpr auto microlumen = prefix::micro <T> * lumen <T>;
    template <class T = double> inline constexpr auto nanolumen  = prefix::nano  <T> * lumen <T>;
    template <class T = double> inline constexpr auto picolumen  = prefix::pico  <T> * lumen <T>;
    template <class T = double> inline constexpr auto femtolumen = prefix::femto <T> * lumen <T>;
    template <class T = double> inline constexpr auto attolumen  = prefix::femto <T> * lumen <T>;
    template <class T = double> inline constexpr auto zeptolumen = prefix::zepto <T> * lumen <T>;
    template <class T = double> inline constexpr auto yoctolumen = prefix::yocto <T> * lumen <T>;

    template <class T = double> inline constexpr auto lux = quantity_t <dimension::illuminance, T> { 1.0 };
    template <class T = double> inline constexpr auto yottalux = prefix::yotta <T> * lux <T>;
    template <class T = double> inline constexpr auto zettalux = prefix::zetta <T> * lux <T>;
    template <class T = double> inline constexpr auto exalux   = prefix::exa   <T> * lux <T>;
    template <class T = double> inline constexpr auto petalux  = prefix::peta  <T> * lux <T>;
    template <class T = double> inline constexpr auto teralux  = prefix::tera  <T> * lux <T>;
    template <class T = double> inline constexpr auto gigalux  = prefix::giga  <T> * lux <T>;
    template <class T = double> inline constexpr auto megalux  = prefix::mega  <T> * lux <T>;
    template <class T = double> inline constexpr auto kilolux  = prefix::kilo  <T> * lux <T>;
    template <class T = double> inline constexpr auto hectolux = prefix::hecto <T> * lux <T>;
    template <class T = double> inline constexpr auto decalux  = prefix::deca  <T> * lux <T>;
    template <class T = double> inline constexpr auto decilux  = prefix::deci  <T> * lux <T>;
    template <class T = double> inline constexpr auto centilux = prefix::centi <T> * lux <T>;
    template <class T = double> inline constexpr auto millilux = prefix::milli <T> * lux <T>;
    template <class T = double> inline constexpr auto microlux = prefix::micro <T> * lux <T>;
    template <class T = double> inline constexpr auto nanolux  = prefix::nano  <T> * lux <T>;
    template <class T = double> inline constexpr auto picolux  = prefix::pico  <T> * lux <T>;
    template <class T = double> inline constexpr auto femtolux = prefix::femto <T> * lux <T>;
    template <class T = double> inline constexpr auto attolux  = prefix::femto <T> * lux <T>;
    template <class T = double> inline constexpr auto zeptolux = prefix::zepto <T> * lux <T>;
    template <class T = double> inline constexpr auto yoctolux = prefix::yocto <T> * lux <T>;

    template <class T = double> inline constexpr auto becquerel = quantity_t <dimension::activity_referred_to_a_radionuclide, T> { 1.0 };
    template <class T = double> inline constexpr auto yottabecquerel = prefix::yotta <T> * becquerel <T>;
    template <class T = double> inline constexpr auto zettabecquerel = prefix::zetta <T> * becquerel <T>;
    template <class T = double> inline constexpr auto exabecquerel   = prefix::exa   <T> * becquerel <T>;
    template <class T = double> inline constexpr auto petabecquerel  = prefix::peta  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto terabecquerel  = prefix::tera  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto gigabecquerel  = prefix::giga  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto megabecquerel  = prefix::mega  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto kilobecquerel  = prefix::kilo  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto hectobecquerel = prefix::hecto <T> * becquerel <T>;
    template <class T = double> inline constexpr auto decabecquerel  = prefix::deca  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto decibecquerel  = prefix::deci  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto centibecquerel = prefix::centi <T> * becquerel <T>;
    template <class T = double> inline constexpr auto millibecquerel = prefix::milli <T> * becquerel <T>;
    template <class T = double> inline constexpr auto microbecquerel = prefix::micro <T> * becquerel <T>;
    template <class T = double> inline constexpr auto nanobecquerel  = prefix::nano  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto picobecquerel  = prefix::pico  <T> * becquerel <T>;
    template <class T = double> inline constexpr auto femtobecquerel = prefix::femto <T> * becquerel <T>;
    template <class T = double> inline constexpr auto attobecquerel  = prefix::femto <T> * becquerel <T>;
    template <class T = double> inline constexpr auto zeptobecquerel = prefix::zepto <T> * becquerel <T>;
    template <class T = double> inline constexpr auto yoctobecquerel = prefix::yocto <T> * becquerel <T>;

    template <class T = double> inline constexpr auto gray = quantity_t <dimension::absorbed_dose, T> { 1.0 };
    template <class T = double> inline constexpr auto yottagray = prefix::yotta <T> * gray <T>;
    template <class T = double> inline constexpr auto zettagray = prefix::zetta <T> * gray <T>;
    template <class T = double> inline constexpr auto exagray   = prefix::exa   <T> * gray <T>;
    template <class T = double> inline constexpr auto petagray  = prefix::peta  <T> * gray <T>;
    template <class T = double> inline constexpr auto teragray  = prefix::tera  <T> * gray <T>;
    template <class T = double> inline constexpr auto gigagray  = prefix::giga  <T> * gray <T>;
    template <class T = double> inline constexpr auto megagray  = prefix::mega  <T> * gray <T>;
    template <class T = double> inline constexpr auto kilogray  = prefix::kilo  <T> * gray <T>;
    template <class T = double> inline constexpr auto hectogray = prefix::hecto <T> * gray <T>;
    template <class T = double> inline constexpr auto decagray  = prefix::deca  <T> * gray <T>;
    template <class T = double> inline constexpr auto decigray  = prefix::deci  <T> * gray <T>;
    template <class T = double> inline constexpr auto centigray = prefix::centi <T> * gray <T>;
    template <class T = double> inline constexpr auto milligray = prefix::milli <T> * gray <T>;
    template <class T = double> inline constexpr auto microgray = prefix::micro <T> * gray <T>;
    template <class T = double> inline constexpr auto nanogray  = prefix::nano  <T> * gray <T>;
    template <class T = double> inline constexpr auto picogray  = prefix::pico  <T> * gray <T>;
    template <class T = double> inline constexpr auto femtogray = prefix::femto <T> * gray <T>;
    template <class T = double> inline constexpr auto attogray  = prefix::femto <T> * gray <T>;
    template <class T = double> inline constexpr auto zeptogray = prefix::zepto <T> * gray <T>;
    template <class T = double> inline constexpr auto yoctogray = prefix::yocto <T> * gray <T>;

    template <class T = double> inline constexpr auto sievert = quantity_t <dimension::dose_equivalent, T> { 1.0 };
    template <class T = double> inline constexpr auto yottasievert = prefix::yotta <T> * sievert <T>;
    template <class T = double> inline constexpr auto zettasievert = prefix::zetta <T> * sievert <T>;
    template <class T = double> inline constexpr auto exasievert   = prefix::exa   <T> * sievert <T>;
    template <class T = double> inline constexpr auto petasievert  = prefix::peta  <T> * sievert <T>;
    template <class T = double> inline constexpr auto terasievert  = prefix::tera  <T> * sievert <T>;
    template <class T = double> inline constexpr auto gigasievert  = prefix::giga  <T> * sievert <T>;
    template <class T = double> inline constexpr auto megasievert  = prefix::mega  <T> * sievert <T>;
    template <class T = double> inline constexpr auto kilosievert  = prefix::kilo  <T> * sievert <T>;
    template <class T = double> inline constexpr auto hectosievert = prefix::hecto <T> * sievert <T>;
    template <class T = double> inline constexpr auto decasievert  = prefix::deca  <T> * sievert <T>;
    template <class T = double> inline constexpr auto decisievert  = prefix::deci  <T> * sievert <T>;
    template <class T = double> inline constexpr auto centisievert = prefix::centi <T> * sievert <T>;
    template <class T = double> inline constexpr auto millisievert = prefix::milli <T> * sievert <T>;
    template <class T = double> inline constexpr auto microsievert = prefix::micro <T> * sievert <T>;
    template <class T = double> inline constexpr auto nanosievert  = prefix::nano  <T> * sievert <T>;
    template <class T = double> inline constexpr auto picosievert  = prefix::pico  <T> * sievert <T>;
    template <class T = double> inline constexpr auto femtosievert = prefix::femto <T> * sievert <T>;
    template <class T = double> inline constexpr auto attosievert  = prefix::femto <T> * sievert <T>;
    template <class T = double> inline constexpr auto zeptosievert = prefix::zepto <T> * sievert <T>;
    template <class T = double> inline constexpr auto yoctosievert = prefix::yocto <T> * sievert <T>;

    template <class T = double> inline constexpr auto katal = quantity_t <dimension::catalytic_activity, T> { 1.0 };
    template <class T = double> inline constexpr auto yottakatal = prefix::yotta <T> * katal <T>;
    template <class T = double> inline constexpr auto zettakatal = prefix::zetta <T> * katal <T>;
    template <class T = double> inline constexpr auto exakatal   = prefix::exa   <T> * katal <T>;
    template <class T = double> inline constexpr auto petakatal  = prefix::peta  <T> * katal <T>;
    template <class T = double> inline constexpr auto terakatal  = prefix::tera  <T> * katal <T>;
    template <class T = double> inline constexpr auto gigakatal  = prefix::giga  <T> * katal <T>;
    template <class T = double> inline constexpr auto megakatal  = prefix::mega  <T> * katal <T>;
    template <class T = double> inline constexpr auto kilokatal  = prefix::kilo  <T> * katal <T>;
    template <class T = double> inline constexpr auto hectokatal = prefix::hecto <T> * katal <T>;
    template <class T = double> inline constexpr auto decakatal  = prefix::deca  <T> * katal <T>;
    template <class T = double> inline constexpr auto decikatal  = prefix::deci  <T> * katal <T>;
    template <class T = double> inline constexpr auto centikatal = prefix::centi <T> * katal <T>;
    template <class T = double> inline constexpr auto millikatal = prefix::milli <T> * katal <T>;
    template <class T = double> inline constexpr auto microkatal = prefix::micro <T> * katal <T>;
    template <class T = double> inline constexpr auto nanokatal  = prefix::nano  <T> * katal <T>;
    template <class T = double> inline constexpr auto picokatal  = prefix::pico  <T> * katal <T>;
    template <class T = double> inline constexpr auto femtokatal = prefix::femto <T> * katal <T>;
    template <class T = double> inline constexpr auto attokatal  = prefix::femto <T> * katal <T>;
    template <class T = double> inline constexpr auto zeptokatal = prefix::zepto <T> * katal <T>;
    template <class T = double> inline constexpr auto yoctokatal = prefix::yocto <T> * katal <T>;

    template <class T>
    inline const auto
names_to_values = std::unordered_map <std::string, any_quantity_t <T>>
{
    { "none", any_quantity_t { none <T> }},
    { "metre", any_quantity_t { metre <T> }},
    { "gram", any_quantity_t { gram <T> }},
    { "second", any_quantity_t { second <T> }},
    { "ampere", any_quantity_t { ampere <T> }},
    { "kelvin", any_quantity_t { kelvin <T> }},
    { "mole", any_quantity_t { mole <T> }},
    { "candela", any_quantity_t { candela <T> }},
    { "hertz", any_quantity_t { hertz <T> }},
    { "newton", any_quantity_t { newton <T> }},
    { "pascal", any_quantity_t { pascal <T> }},
    { "bar", any_quantity_t { bar <T> }},
    { "joule", any_quantity_t { joule <T> }},
    { "watt", any_quantity_t { watt <T> }},
    { "coulomb", any_quantity_t { coulomb <T> }},
    { "volt", any_quantity_t { volt <T> }},
    { "farad", any_quantity_t { farad <T> }},
    { "ohm", any_quantity_t { ohm <T> }},
    { "siemens", any_quantity_t { siemens <T> }},
    { "weber", any_quantity_t { weber <T> }},
    { "tesla", any_quantity_t { tesla <T> }},
    { "henry", any_quantity_t { henry <T> }},
    { "lumen", any_quantity_t { lumen <T> }},
    { "lux", any_quantity_t { lux <T> }},
    { "becquerel", any_quantity_t { becquerel <T> }},
    { "gray", any_quantity_t { gray <T> }},
    { "sievert", any_quantity_t { sievert <T> }},
    { "katal", any_quantity_t { katal <T> }},

};
    template <class T>
    inline const auto
values_to_names = std::unordered_map <any_quantity_t <T>, std::string>
{
    { any_quantity_t { none <T> }, "none" },
    { any_quantity_t { metre <T> }, "metre" },
    { any_quantity_t { gram <T> }, "gram" },
    { any_quantity_t { second <T> }, "second" },
    { any_quantity_t { ampere <T> }, "ampere" },
    { any_quantity_t { kelvin <T> }, "kelvin" },
    { any_quantity_t { mole <T> }, "mole" },
    { any_quantity_t { candela <T> }, "candela" },
    { any_quantity_t { hertz <T> }, "hertz" },
    { any_quantity_t { newton <T> }, "newton" },
    { any_quantity_t { pascal <T> }, "pascal" },
    { any_quantity_t { bar <T> }, "bar" },
    { any_quantity_t { joule <T> }, "joule" },
    { any_quantity_t { watt <T> }, "watt" },
    { any_quantity_t { coulomb <T> }, "coulomb" },
    { any_quantity_t { volt <T> }, "volt" },
    { any_quantity_t { farad <T> }, "farad" },
    { any_quantity_t { ohm <T> }, "ohm" },
    { any_quantity_t { siemens <T> }, "siemens" },
    { any_quantity_t { weber <T> }, "weber" },
    { any_quantity_t { tesla <T> }, "tesla" },
    { any_quantity_t { henry <T> }, "henry" },
    { any_quantity_t { lumen <T> }, "lumen" },
    { any_quantity_t { lux <T> }, "lux" },
    { any_quantity_t { becquerel <T> }, "becquerel" },
    { any_quantity_t { gray <T> }, "gray" },
    { any_quantity_t { sievert <T> }, "sievert" },
    { any_quantity_t { katal <T> }, "katal" },

};
    template <class T>
    inline const auto
symbols_to_values = std::unordered_map <std::string, any_quantity_t <T>>
{
    { "_", any_quantity_t { none <T> }},
    { "m", any_quantity_t { metre <T> }},
    { "g", any_quantity_t { gram <T> }},
    { "s", any_quantity_t { second <T> }},
    { "A", any_quantity_t { ampere <T> }},
    { "K", any_quantity_t { kelvin <T> }},
    { "mol", any_quantity_t { mole <T> }},
    { "cd", any_quantity_t { candela <T> }},
    { "Hz", any_quantity_t { hertz <T> }},
    { "N", any_quantity_t { newton <T> }},
    { "Pa", any_quantity_t { pascal <T> }},
    { "bar", any_quantity_t { bar <T> }},
    { "J", any_quantity_t { joule <T> }},
    { "W", any_quantity_t { watt <T> }},
    { "C", any_quantity_t { coulomb <T> }},
    { "V", any_quantity_t { volt <T> }},
    { "F", any_quantity_t { farad <T> }},
    { "\u2126", any_quantity_t { ohm <T> }},
    { "S", any_quantity_t { siemens <T> }},
    { "Wb", any_quantity_t { weber <T> }},
    { "T", any_quantity_t { tesla <T> }},
    { "H", any_quantity_t { henry <T> }},
    { "lu", any_quantity_t { lumen <T> }},
    { "lx", any_quantity_t { lux <T> }},
    { "Bq", any_quantity_t { becquerel <T> }},
    { "Gy", any_quantity_t { gray <T> }},
    { "Sv", any_quantity_t { sievert <T> }},
    { "kat", any_quantity_t { katal <T> }},

};
    template <class T>
    inline const auto
values_to_symbols = std::unordered_map <any_quantity_t <T>, std::string>
{
    { any_quantity_t { none <T> }, "_" },
    { any_quantity_t { metre <T> }, "m" },
    { any_quantity_t { gram <T> }, "g" },
    { any_quantity_t { second <T> }, "s" },
    { any_quantity_t { ampere <T> }, "A" },
    { any_quantity_t { kelvin <T> }, "K" },
    { any_quantity_t { mole <T> }, "mol" },
    { any_quantity_t { candela <T> }, "cd" },
    { any_quantity_t { hertz <T> }, "Hz" },
    { any_quantity_t { newton <T> }, "N" },
    { any_quantity_t { pascal <T> }, "Pa" },
    { any_quantity_t { bar <T> }, "bar" },
    { any_quantity_t { joule <T> }, "J" },
    { any_quantity_t { watt <T> }, "W" },
    { any_quantity_t { coulomb <T> }, "C" },
    { any_quantity_t { volt <T> }, "V" },
    { any_quantity_t { farad <T> }, "F" },
    { any_quantity_t { ohm <T> }, "\u2126" },
    { any_quantity_t { siemens <T> }, "S" },
    { any_quantity_t { weber <T> }, "Wb" },
    { any_quantity_t { tesla <T> }, "T" },
    { any_quantity_t { henry <T> }, "H" },
    { any_quantity_t { lumen <T> }, "lu" },
    { any_quantity_t { lux <T> }, "lx" },
    { any_quantity_t { becquerel <T> }, "Bq" },
    { any_quantity_t { gray <T> }, "Gy" },
    { any_quantity_t { sievert <T> }, "Sv" },
    { any_quantity_t { katal <T> }, "kat" },

};
    inline const auto
names_to_symbols = std::unordered_map <std::string, std::string>
{
    { "none", "_" },
    { "metre", "m" },
    { "gram", "g" },
    { "second", "s" },
    { "ampere", "A" },
    { "kelvin", "K" },
    { "mole", "mol" },
    { "candela", "cd" },
    { "hertz", "Hz" },
    { "newton", "N" },
    { "pascal", "Pa" },
    { "bar", "bar" },
    { "joule", "J" },
    { "watt", "W" },
    { "coulomb", "C" },
    { "volt", "V" },
    { "farad", "F" },
    { "ohm", "\u2126" },
    { "siemens", "S" },
    { "weber", "Wb" },
    { "tesla", "T" },
    { "henry", "H" },
    { "lumen", "lu" },
    { "lux", "lx" },
    { "becquerel", "Bq" },
    { "gray", "Gy" },
    { "sievert", "Sv" },
    { "katal", "kat" },

};
    inline const auto
symbols_to_names = std::unordered_map <std::string, std::string>
{
    { "_", "none" },
    { "m", "metre" },
    { "g", "gram" },
    { "s", "second" },
    { "A", "ampere" },
    { "K", "kelvin" },
    { "mol", "mole" },
    { "cd", "candela" },
    { "Hz", "hertz" },
    { "N", "newton" },
    { "Pa", "pascal" },
    { "bar", "bar" },
    { "J", "joule" },
    { "W", "watt" },
    { "C", "coulomb" },
    { "V", "volt" },
    { "F", "farad" },
    { "\u2126", "ohm" },
    { "S", "siemens" },
    { "Wb", "weber" },
    { "T", "tesla" },
    { "H", "henry" },
    { "lu", "lumen" },
    { "lx", "lux" },
    { "Bq", "becquerel" },
    { "Gy", "gray" },
    { "Sv", "sievert" },
    { "kat", "katal" },

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
    { "none", { "none", }},
    { "length", { "metre", }},
    { "mass", { "gram", }},
    { "time", { "second", }},
    { "electric_current", { "ampere", }},
    { "thermodynamic_temperature", { "kelvin", }},
    { "amount_of_substance", { "mole", }},
    { "luminous_intensity", { "candela", }},
    { "frequency", { "hertz", }},
    { "force", { "newton", }},
    { "pressure", { "pascal", "bar", }},
    { "energy", { "joule", }},
    { "work", { "watt", }},
    { "electric_charge", { "coulomb", }},
    { "electric_potential_difference", { "volt", }},
    { "capacitance", { "farad", }},
    { "electric_resistance", { "ohm", }},
    { "electric_conductance", { "siemens", }},
    { "magnetic_flux", { "weber", }},
    { "magnetic_flux_density", { "tesla", }},
    { "inductance", { "henry", }},
    { "luminous_flux", { "lumen", }},
    { "illuminance", { "lux", }},
    { "activity_referred_to_a_radionuclide", { "becquerel", }},
    { "absorbed_dose", { "gray", }},
    { "dose_equivalent", { "sievert", }},
    { "catalytic_activity", { "katal", }},
    { "velocity", { }},
    { "area", { }},
    { "volume", { }},
    { "density", { }},
    { "massic_energy", { }},
    { "entropy", { }},
    { "massic_entropy", { }},
    { "temperature", { "kelvin", }},
    { "dimensionless", { "none", }},
    { "stress", { "pascal", "bar", }},
    { "amount_of_heat", { "watt", }},
    { "power", { "watt", }},
    { "radiant_flux", { "watt", }},
    { "amount_of_electricity", { "coulomb", }},
    { "electromotive_force", { "volt", }},
    { "celsius_temperature", { "kelvin", }},
    { "specific_energy_imparted", { "gray", }},
    { "kerma", { "gray", }},
    { "ambient_dose_equivalent", { "sievert", }},
    { "directional_dose_equivalent", { "sievert", }},
    { "personal_dose_equivalent", { "sievert", }},
    { "heat_capacity", { }},
    { "massic_heat_capacity", { }},
    { "massic_enthalpy", { }},
};
    template <class T>
    inline const auto
dimensions_to_units = std::unordered_map <dimension_t, std::vector <any_quantity_t <T>>>
{
    { dimension::none, { none <T>, }},
    { dimension::length, { metre <T>, }},
    { dimension::mass, { gram <T>, }},
    { dimension::time, { second <T>, }},
    { dimension::electric_current, { ampere <T>, }},
    { dimension::thermodynamic_temperature, { kelvin <T>, }},
    { dimension::amount_of_substance, { mole <T>, }},
    { dimension::luminous_intensity, { candela <T>, }},
    { dimension::frequency, { hertz <T>, }},
    { dimension::force, { newton <T>, }},
    { dimension::pressure, { pascal <T>, bar <T>, }},
    { dimension::energy, { joule <T>, }},
    { dimension::work, { watt <T>, }},
    { dimension::electric_charge, { coulomb <T>, }},
    { dimension::electric_potential_difference, { volt <T>, }},
    { dimension::capacitance, { farad <T>, }},
    { dimension::electric_resistance, { ohm <T>, }},
    { dimension::electric_conductance, { siemens <T>, }},
    { dimension::magnetic_flux, { weber <T>, }},
    { dimension::magnetic_flux_density, { tesla <T>, }},
    { dimension::inductance, { henry <T>, }},
    { dimension::luminous_flux, { lumen <T>, }},
    { dimension::illuminance, { lux <T>, }},
    { dimension::activity_referred_to_a_radionuclide, { becquerel <T>, }},
    { dimension::absorbed_dose, { gray <T>, }},
    { dimension::dose_equivalent, { sievert <T>, }},
    { dimension::catalytic_activity, { katal <T>, }},
    { dimension::velocity, { }},
    { dimension::area, { }},
    { dimension::volume, { }},
    { dimension::density, { }},
    { dimension::massic_energy, { }},
    { dimension::entropy, { }},
    { dimension::massic_entropy, { }},
    { dimension::temperature, { kelvin <T>, }},
    { dimension::dimensionless, { none <T>, }},
    { dimension::stress, { pascal <T>, bar <T>, }},
    { dimension::amount_of_heat, { watt <T>, }},
    { dimension::power, { watt <T>, }},
    { dimension::radiant_flux, { watt <T>, }},
    { dimension::amount_of_electricity, { coulomb <T>, }},
    { dimension::electromotive_force, { volt <T>, }},
    { dimension::celsius_temperature, { kelvin <T>, }},
    { dimension::specific_energy_imparted, { gray <T>, }},
    { dimension::kerma, { gray <T>, }},
    { dimension::ambient_dose_equivalent, { sievert <T>, }},
    { dimension::directional_dose_equivalent, { sievert <T>, }},
    { dimension::personal_dose_equivalent, { sievert <T>, }},
    { dimension::heat_capacity, { }},
    { dimension::massic_heat_capacity, { }},
    { dimension::massic_enthalpy, { }},

};
    namespace 
literals
{

    constexpr auto operator ""_m   (long double x) noexcept { return x * unit::metre <long double>; }
    constexpr auto operator ""_Em  (long double x) noexcept { return x * unit::exametre <long double>; }
    constexpr auto operator ""_Pm  (long double x) noexcept { return x * unit::petametre <long double>; }
    constexpr auto operator ""_Tm  (long double x) noexcept { return x * unit::terametre <long double>; }
    constexpr auto operator ""_Gm  (long double x) noexcept { return x * unit::gigametre <long double>; }
    constexpr auto operator ""_Mm  (long double x) noexcept { return x * unit::megametre <long double>; }
    constexpr auto operator ""_km  (long double x) noexcept { return x * unit::kilometre <long double>; }
    constexpr auto operator ""_hm  (long double x) noexcept { return x * unit::hectometre <long double>; }
    constexpr auto operator ""_dam (long double x) noexcept { return x * unit::decametre <long double>; }
    constexpr auto operator ""_dm  (long double x) noexcept { return x * unit::decimetre <long double>; }
    constexpr auto operator ""_cm  (long double x) noexcept { return x * unit::centimetre <long double>; }
    constexpr auto operator ""_mm  (long double x) noexcept { return x * unit::millimetre <long double>; }
    constexpr auto operator ""_um  (long double x) noexcept { return x * unit::micrometre <long double>; }
    constexpr auto operator ""_nm  (long double x) noexcept { return x * unit::nanometre <long double>; }
    constexpr auto operator ""_pm  (long double x) noexcept { return x * unit::picometre <long double>; }
    constexpr auto operator ""_fm  (long double x) noexcept { return x * unit::femtometre <long double>; }
    constexpr auto operator ""_am  (long double x) noexcept { return x * unit::attometre <long double>; }

    constexpr auto operator ""_g   (long double x) noexcept { return x * unit::gram <long double>; }
    constexpr auto operator ""_Eg  (long double x) noexcept { return x * unit::exagram <long double>; }
    constexpr auto operator ""_Pg  (long double x) noexcept { return x * unit::petagram <long double>; }
    constexpr auto operator ""_Tg  (long double x) noexcept { return x * unit::teragram <long double>; }
    constexpr auto operator ""_Gg  (long double x) noexcept { return x * unit::gigagram <long double>; }
    constexpr auto operator ""_Mg  (long double x) noexcept { return x * unit::megagram <long double>; }
    constexpr auto operator ""_kg  (long double x) noexcept { return x * unit::kilogram <long double>; }
    constexpr auto operator ""_hg  (long double x) noexcept { return x * unit::hectogram <long double>; }
    constexpr auto operator ""_dag (long double x) noexcept { return x * unit::decagram <long double>; }
    constexpr auto operator ""_dg  (long double x) noexcept { return x * unit::decigram <long double>; }
    constexpr auto operator ""_cg  (long double x) noexcept { return x * unit::centigram <long double>; }
    constexpr auto operator ""_mg  (long double x) noexcept { return x * unit::milligram <long double>; }
    constexpr auto operator ""_ug  (long double x) noexcept { return x * unit::microgram <long double>; }
    constexpr auto operator ""_ng  (long double x) noexcept { return x * unit::nanogram <long double>; }
    constexpr auto operator ""_pg  (long double x) noexcept { return x * unit::picogram <long double>; }
    constexpr auto operator ""_fg  (long double x) noexcept { return x * unit::femtogram <long double>; }
    constexpr auto operator ""_ag  (long double x) noexcept { return x * unit::attogram <long double>; }

    constexpr auto operator ""_s   (long double x) noexcept { return x * unit::second <long double>; }
    constexpr auto operator ""_Es  (long double x) noexcept { return x * unit::exasecond <long double>; }
    constexpr auto operator ""_Ps  (long double x) noexcept { return x * unit::petasecond <long double>; }
    constexpr auto operator ""_Ts  (long double x) noexcept { return x * unit::terasecond <long double>; }
    constexpr auto operator ""_Gs  (long double x) noexcept { return x * unit::gigasecond <long double>; }
    constexpr auto operator ""_Ms  (long double x) noexcept { return x * unit::megasecond <long double>; }
    constexpr auto operator ""_ks  (long double x) noexcept { return x * unit::kilosecond <long double>; }
    constexpr auto operator ""_hs  (long double x) noexcept { return x * unit::hectosecond <long double>; }
    constexpr auto operator ""_das (long double x) noexcept { return x * unit::decasecond <long double>; }
    constexpr auto operator ""_ds  (long double x) noexcept { return x * unit::decisecond <long double>; }
    constexpr auto operator ""_cs  (long double x) noexcept { return x * unit::centisecond <long double>; }
    constexpr auto operator ""_ms  (long double x) noexcept { return x * unit::millisecond <long double>; }
    constexpr auto operator ""_us  (long double x) noexcept { return x * unit::microsecond <long double>; }
    constexpr auto operator ""_ns  (long double x) noexcept { return x * unit::nanosecond <long double>; }
    constexpr auto operator ""_ps  (long double x) noexcept { return x * unit::picosecond <long double>; }
    constexpr auto operator ""_fs  (long double x) noexcept { return x * unit::femtosecond <long double>; }
    constexpr auto operator ""_as  (long double x) noexcept { return x * unit::attosecond <long double>; }

    constexpr auto operator ""_A   (long double x) noexcept { return x * unit::ampere <long double>; }
    constexpr auto operator ""_EA  (long double x) noexcept { return x * unit::exaampere <long double>; }
    constexpr auto operator ""_PA  (long double x) noexcept { return x * unit::petaampere <long double>; }
    constexpr auto operator ""_TA  (long double x) noexcept { return x * unit::teraampere <long double>; }
    constexpr auto operator ""_GA  (long double x) noexcept { return x * unit::gigaampere <long double>; }
    constexpr auto operator ""_MA  (long double x) noexcept { return x * unit::megaampere <long double>; }
    constexpr auto operator ""_kA  (long double x) noexcept { return x * unit::kiloampere <long double>; }
    constexpr auto operator ""_hA  (long double x) noexcept { return x * unit::hectoampere <long double>; }
    constexpr auto operator ""_daA (long double x) noexcept { return x * unit::decaampere <long double>; }
    constexpr auto operator ""_dA  (long double x) noexcept { return x * unit::deciampere <long double>; }
    constexpr auto operator ""_cA  (long double x) noexcept { return x * unit::centiampere <long double>; }
    constexpr auto operator ""_mA  (long double x) noexcept { return x * unit::milliampere <long double>; }
    constexpr auto operator ""_uA  (long double x) noexcept { return x * unit::microampere <long double>; }
    constexpr auto operator ""_nA  (long double x) noexcept { return x * unit::nanoampere <long double>; }
    constexpr auto operator ""_pA  (long double x) noexcept { return x * unit::picoampere <long double>; }
    constexpr auto operator ""_fA  (long double x) noexcept { return x * unit::femtoampere <long double>; }
    constexpr auto operator ""_aA  (long double x) noexcept { return x * unit::attoampere <long double>; }

    constexpr auto operator ""_K   (long double x) noexcept { return x * unit::kelvin <long double>; }
    constexpr auto operator ""_EK  (long double x) noexcept { return x * unit::exakelvin <long double>; }
    constexpr auto operator ""_PK  (long double x) noexcept { return x * unit::petakelvin <long double>; }
    constexpr auto operator ""_TK  (long double x) noexcept { return x * unit::terakelvin <long double>; }
    constexpr auto operator ""_GK  (long double x) noexcept { return x * unit::gigakelvin <long double>; }
    constexpr auto operator ""_MK  (long double x) noexcept { return x * unit::megakelvin <long double>; }
    constexpr auto operator ""_kK  (long double x) noexcept { return x * unit::kilokelvin <long double>; }
    constexpr auto operator ""_hK  (long double x) noexcept { return x * unit::hectokelvin <long double>; }
    constexpr auto operator ""_daK (long double x) noexcept { return x * unit::decakelvin <long double>; }
    constexpr auto operator ""_dK  (long double x) noexcept { return x * unit::decikelvin <long double>; }
    constexpr auto operator ""_cK  (long double x) noexcept { return x * unit::centikelvin <long double>; }
    constexpr auto operator ""_mK  (long double x) noexcept { return x * unit::millikelvin <long double>; }
    constexpr auto operator ""_uK  (long double x) noexcept { return x * unit::microkelvin <long double>; }
    constexpr auto operator ""_nK  (long double x) noexcept { return x * unit::nanokelvin <long double>; }
    constexpr auto operator ""_pK  (long double x) noexcept { return x * unit::picokelvin <long double>; }
    constexpr auto operator ""_fK  (long double x) noexcept { return x * unit::femtokelvin <long double>; }
    constexpr auto operator ""_aK  (long double x) noexcept { return x * unit::attokelvin <long double>; }

    constexpr auto operator ""_mol   (long double x) noexcept { return x * unit::mole <long double>; }
    constexpr auto operator ""_Emol  (long double x) noexcept { return x * unit::examole <long double>; }
    constexpr auto operator ""_Pmol  (long double x) noexcept { return x * unit::petamole <long double>; }
    constexpr auto operator ""_Tmol  (long double x) noexcept { return x * unit::teramole <long double>; }
    constexpr auto operator ""_Gmol  (long double x) noexcept { return x * unit::gigamole <long double>; }
    constexpr auto operator ""_Mmol  (long double x) noexcept { return x * unit::megamole <long double>; }
    constexpr auto operator ""_kmol  (long double x) noexcept { return x * unit::kilomole <long double>; }
    constexpr auto operator ""_hmol  (long double x) noexcept { return x * unit::hectomole <long double>; }
    constexpr auto operator ""_damol (long double x) noexcept { return x * unit::decamole <long double>; }
    constexpr auto operator ""_dmol  (long double x) noexcept { return x * unit::decimole <long double>; }
    constexpr auto operator ""_cmol  (long double x) noexcept { return x * unit::centimole <long double>; }
    constexpr auto operator ""_mmol  (long double x) noexcept { return x * unit::millimole <long double>; }
    constexpr auto operator ""_umol  (long double x) noexcept { return x * unit::micromole <long double>; }
    constexpr auto operator ""_nmol  (long double x) noexcept { return x * unit::nanomole <long double>; }
    constexpr auto operator ""_pmol  (long double x) noexcept { return x * unit::picomole <long double>; }
    constexpr auto operator ""_fmol  (long double x) noexcept { return x * unit::femtomole <long double>; }
    constexpr auto operator ""_amol  (long double x) noexcept { return x * unit::attomole <long double>; }

    constexpr auto operator ""_cd   (long double x) noexcept { return x * unit::candela <long double>; }
    constexpr auto operator ""_Ecd  (long double x) noexcept { return x * unit::exacandela <long double>; }
    constexpr auto operator ""_Pcd  (long double x) noexcept { return x * unit::petacandela <long double>; }
    constexpr auto operator ""_Tcd  (long double x) noexcept { return x * unit::teracandela <long double>; }
    constexpr auto operator ""_Gcd  (long double x) noexcept { return x * unit::gigacandela <long double>; }
    constexpr auto operator ""_Mcd  (long double x) noexcept { return x * unit::megacandela <long double>; }
    constexpr auto operator ""_kcd  (long double x) noexcept { return x * unit::kilocandela <long double>; }
    constexpr auto operator ""_hcd  (long double x) noexcept { return x * unit::hectocandela <long double>; }
    constexpr auto operator ""_dacd (long double x) noexcept { return x * unit::decacandela <long double>; }
    constexpr auto operator ""_dcd  (long double x) noexcept { return x * unit::decicandela <long double>; }
    constexpr auto operator ""_ccd  (long double x) noexcept { return x * unit::centicandela <long double>; }
    constexpr auto operator ""_mcd  (long double x) noexcept { return x * unit::millicandela <long double>; }
    constexpr auto operator ""_ucd  (long double x) noexcept { return x * unit::microcandela <long double>; }
    constexpr auto operator ""_ncd  (long double x) noexcept { return x * unit::nanocandela <long double>; }
    constexpr auto operator ""_pcd  (long double x) noexcept { return x * unit::picocandela <long double>; }
    constexpr auto operator ""_fcd  (long double x) noexcept { return x * unit::femtocandela <long double>; }
    constexpr auto operator ""_acd  (long double x) noexcept { return x * unit::attocandela <long double>; }

    constexpr auto operator ""_Hz   (long double x) noexcept { return x * unit::hertz <long double>; }
    constexpr auto operator ""_EHz  (long double x) noexcept { return x * unit::exahertz <long double>; }
    constexpr auto operator ""_PHz  (long double x) noexcept { return x * unit::petahertz <long double>; }
    constexpr auto operator ""_THz  (long double x) noexcept { return x * unit::terahertz <long double>; }
    constexpr auto operator ""_GHz  (long double x) noexcept { return x * unit::gigahertz <long double>; }
    constexpr auto operator ""_MHz  (long double x) noexcept { return x * unit::megahertz <long double>; }
    constexpr auto operator ""_kHz  (long double x) noexcept { return x * unit::kilohertz <long double>; }
    constexpr auto operator ""_hHz  (long double x) noexcept { return x * unit::hectohertz <long double>; }
    constexpr auto operator ""_daHz (long double x) noexcept { return x * unit::decahertz <long double>; }
    constexpr auto operator ""_dHz  (long double x) noexcept { return x * unit::decihertz <long double>; }
    constexpr auto operator ""_cHz  (long double x) noexcept { return x * unit::centihertz <long double>; }
    constexpr auto operator ""_mHz  (long double x) noexcept { return x * unit::millihertz <long double>; }
    constexpr auto operator ""_uHz  (long double x) noexcept { return x * unit::microhertz <long double>; }
    constexpr auto operator ""_nHz  (long double x) noexcept { return x * unit::nanohertz <long double>; }
    constexpr auto operator ""_pHz  (long double x) noexcept { return x * unit::picohertz <long double>; }
    constexpr auto operator ""_fHz  (long double x) noexcept { return x * unit::femtohertz <long double>; }
    constexpr auto operator ""_aHz  (long double x) noexcept { return x * unit::attohertz <long double>; }

    constexpr auto operator ""_N   (long double x) noexcept { return x * unit::newton <long double>; }
    constexpr auto operator ""_EN  (long double x) noexcept { return x * unit::exanewton <long double>; }
    constexpr auto operator ""_PN  (long double x) noexcept { return x * unit::petanewton <long double>; }
    constexpr auto operator ""_TN  (long double x) noexcept { return x * unit::teranewton <long double>; }
    constexpr auto operator ""_GN  (long double x) noexcept { return x * unit::giganewton <long double>; }
    constexpr auto operator ""_MN  (long double x) noexcept { return x * unit::meganewton <long double>; }
    constexpr auto operator ""_kN  (long double x) noexcept { return x * unit::kilonewton <long double>; }
    constexpr auto operator ""_hN  (long double x) noexcept { return x * unit::hectonewton <long double>; }
    constexpr auto operator ""_daN (long double x) noexcept { return x * unit::decanewton <long double>; }
    constexpr auto operator ""_dN  (long double x) noexcept { return x * unit::decinewton <long double>; }
    constexpr auto operator ""_cN  (long double x) noexcept { return x * unit::centinewton <long double>; }
    constexpr auto operator ""_mN  (long double x) noexcept { return x * unit::millinewton <long double>; }
    constexpr auto operator ""_uN  (long double x) noexcept { return x * unit::micronewton <long double>; }
    constexpr auto operator ""_nN  (long double x) noexcept { return x * unit::nanonewton <long double>; }
    constexpr auto operator ""_pN  (long double x) noexcept { return x * unit::piconewton <long double>; }
    constexpr auto operator ""_fN  (long double x) noexcept { return x * unit::femtonewton <long double>; }
    constexpr auto operator ""_aN  (long double x) noexcept { return x * unit::attonewton <long double>; }

    constexpr auto operator ""_Pa   (long double x) noexcept { return x * unit::pascal <long double>; }
    constexpr auto operator ""_EPa  (long double x) noexcept { return x * unit::exapascal <long double>; }
    constexpr auto operator ""_PPa  (long double x) noexcept { return x * unit::petapascal <long double>; }
    constexpr auto operator ""_TPa  (long double x) noexcept { return x * unit::terapascal <long double>; }
    constexpr auto operator ""_GPa  (long double x) noexcept { return x * unit::gigapascal <long double>; }
    constexpr auto operator ""_MPa  (long double x) noexcept { return x * unit::megapascal <long double>; }
    constexpr auto operator ""_kPa  (long double x) noexcept { return x * unit::kilopascal <long double>; }
    constexpr auto operator ""_hPa  (long double x) noexcept { return x * unit::hectopascal <long double>; }
    constexpr auto operator ""_daPa (long double x) noexcept { return x * unit::decapascal <long double>; }
    constexpr auto operator ""_dPa  (long double x) noexcept { return x * unit::decipascal <long double>; }
    constexpr auto operator ""_cPa  (long double x) noexcept { return x * unit::centipascal <long double>; }
    constexpr auto operator ""_mPa  (long double x) noexcept { return x * unit::millipascal <long double>; }
    constexpr auto operator ""_uPa  (long double x) noexcept { return x * unit::micropascal <long double>; }
    constexpr auto operator ""_nPa  (long double x) noexcept { return x * unit::nanopascal <long double>; }
    constexpr auto operator ""_pPa  (long double x) noexcept { return x * unit::picopascal <long double>; }
    constexpr auto operator ""_fPa  (long double x) noexcept { return x * unit::femtopascal <long double>; }
    constexpr auto operator ""_aPa  (long double x) noexcept { return x * unit::attopascal <long double>; }

    constexpr auto operator ""_bar   (long double x) noexcept { return x * unit::bar <long double>; }
    constexpr auto operator ""_Ebar  (long double x) noexcept { return x * unit::exabar <long double>; }
    constexpr auto operator ""_Pbar  (long double x) noexcept { return x * unit::petabar <long double>; }
    constexpr auto operator ""_Tbar  (long double x) noexcept { return x * unit::terabar <long double>; }
    constexpr auto operator ""_Gbar  (long double x) noexcept { return x * unit::gigabar <long double>; }
    constexpr auto operator ""_Mbar  (long double x) noexcept { return x * unit::megabar <long double>; }
    constexpr auto operator ""_kbar  (long double x) noexcept { return x * unit::kilobar <long double>; }
    constexpr auto operator ""_hbar  (long double x) noexcept { return x * unit::hectobar <long double>; }
    constexpr auto operator ""_dabar (long double x) noexcept { return x * unit::decabar <long double>; }
    constexpr auto operator ""_dbar  (long double x) noexcept { return x * unit::decibar <long double>; }
    constexpr auto operator ""_cbar  (long double x) noexcept { return x * unit::centibar <long double>; }
    constexpr auto operator ""_mbar  (long double x) noexcept { return x * unit::millibar <long double>; }
    constexpr auto operator ""_ubar  (long double x) noexcept { return x * unit::microbar <long double>; }
    constexpr auto operator ""_nbar  (long double x) noexcept { return x * unit::nanobar <long double>; }
    constexpr auto operator ""_pbar  (long double x) noexcept { return x * unit::picobar <long double>; }
    constexpr auto operator ""_fbar  (long double x) noexcept { return x * unit::femtobar <long double>; }
    constexpr auto operator ""_abar  (long double x) noexcept { return x * unit::attobar <long double>; }

    constexpr auto operator ""_J   (long double x) noexcept { return x * unit::joule <long double>; }
    constexpr auto operator ""_EJ  (long double x) noexcept { return x * unit::exajoule <long double>; }
    constexpr auto operator ""_PJ  (long double x) noexcept { return x * unit::petajoule <long double>; }
    constexpr auto operator ""_TJ  (long double x) noexcept { return x * unit::terajoule <long double>; }
    constexpr auto operator ""_GJ  (long double x) noexcept { return x * unit::gigajoule <long double>; }
    constexpr auto operator ""_MJ  (long double x) noexcept { return x * unit::megajoule <long double>; }
    constexpr auto operator ""_kJ  (long double x) noexcept { return x * unit::kilojoule <long double>; }
    constexpr auto operator ""_hJ  (long double x) noexcept { return x * unit::hectojoule <long double>; }
    constexpr auto operator ""_daJ (long double x) noexcept { return x * unit::decajoule <long double>; }
    constexpr auto operator ""_dJ  (long double x) noexcept { return x * unit::decijoule <long double>; }
    constexpr auto operator ""_cJ  (long double x) noexcept { return x * unit::centijoule <long double>; }
    constexpr auto operator ""_mJ  (long double x) noexcept { return x * unit::millijoule <long double>; }
    constexpr auto operator ""_uJ  (long double x) noexcept { return x * unit::microjoule <long double>; }
    constexpr auto operator ""_nJ  (long double x) noexcept { return x * unit::nanojoule <long double>; }
    constexpr auto operator ""_pJ  (long double x) noexcept { return x * unit::picojoule <long double>; }
    constexpr auto operator ""_fJ  (long double x) noexcept { return x * unit::femtojoule <long double>; }
    constexpr auto operator ""_aJ  (long double x) noexcept { return x * unit::attojoule <long double>; }

    constexpr auto operator ""_W   (long double x) noexcept { return x * unit::watt <long double>; }
    constexpr auto operator ""_EW  (long double x) noexcept { return x * unit::exawatt <long double>; }
    constexpr auto operator ""_PW  (long double x) noexcept { return x * unit::petawatt <long double>; }
    constexpr auto operator ""_TW  (long double x) noexcept { return x * unit::terawatt <long double>; }
    constexpr auto operator ""_GW  (long double x) noexcept { return x * unit::gigawatt <long double>; }
    constexpr auto operator ""_MW  (long double x) noexcept { return x * unit::megawatt <long double>; }
    constexpr auto operator ""_kW  (long double x) noexcept { return x * unit::kilowatt <long double>; }
    constexpr auto operator ""_hW  (long double x) noexcept { return x * unit::hectowatt <long double>; }
    constexpr auto operator ""_daW (long double x) noexcept { return x * unit::decawatt <long double>; }
    constexpr auto operator ""_dW  (long double x) noexcept { return x * unit::deciwatt <long double>; }
    constexpr auto operator ""_cW  (long double x) noexcept { return x * unit::centiwatt <long double>; }
    constexpr auto operator ""_mW  (long double x) noexcept { return x * unit::milliwatt <long double>; }
    constexpr auto operator ""_uW  (long double x) noexcept { return x * unit::microwatt <long double>; }
    constexpr auto operator ""_nW  (long double x) noexcept { return x * unit::nanowatt <long double>; }
    constexpr auto operator ""_pW  (long double x) noexcept { return x * unit::picowatt <long double>; }
    constexpr auto operator ""_fW  (long double x) noexcept { return x * unit::femtowatt <long double>; }
    constexpr auto operator ""_aW  (long double x) noexcept { return x * unit::attowatt <long double>; }

    constexpr auto operator ""_C   (long double x) noexcept { return x * unit::coulomb <long double>; }
    constexpr auto operator ""_EC  (long double x) noexcept { return x * unit::exacoulomb <long double>; }
    constexpr auto operator ""_PC  (long double x) noexcept { return x * unit::petacoulomb <long double>; }
    constexpr auto operator ""_TC  (long double x) noexcept { return x * unit::teracoulomb <long double>; }
    constexpr auto operator ""_GC  (long double x) noexcept { return x * unit::gigacoulomb <long double>; }
    constexpr auto operator ""_MC  (long double x) noexcept { return x * unit::megacoulomb <long double>; }
    constexpr auto operator ""_kC  (long double x) noexcept { return x * unit::kilocoulomb <long double>; }
    constexpr auto operator ""_hC  (long double x) noexcept { return x * unit::hectocoulomb <long double>; }
    constexpr auto operator ""_daC (long double x) noexcept { return x * unit::decacoulomb <long double>; }
    constexpr auto operator ""_dC  (long double x) noexcept { return x * unit::decicoulomb <long double>; }
    constexpr auto operator ""_cC  (long double x) noexcept { return x * unit::centicoulomb <long double>; }
    constexpr auto operator ""_mC  (long double x) noexcept { return x * unit::millicoulomb <long double>; }
    constexpr auto operator ""_uC  (long double x) noexcept { return x * unit::microcoulomb <long double>; }
    constexpr auto operator ""_nC  (long double x) noexcept { return x * unit::nanocoulomb <long double>; }
    constexpr auto operator ""_pC  (long double x) noexcept { return x * unit::picocoulomb <long double>; }
    constexpr auto operator ""_fC  (long double x) noexcept { return x * unit::femtocoulomb <long double>; }
    constexpr auto operator ""_aC  (long double x) noexcept { return x * unit::attocoulomb <long double>; }

    constexpr auto operator ""_V   (long double x) noexcept { return x * unit::volt <long double>; }
    constexpr auto operator ""_EV  (long double x) noexcept { return x * unit::exavolt <long double>; }
    constexpr auto operator ""_PV  (long double x) noexcept { return x * unit::petavolt <long double>; }
    constexpr auto operator ""_TV  (long double x) noexcept { return x * unit::teravolt <long double>; }
    constexpr auto operator ""_GV  (long double x) noexcept { return x * unit::gigavolt <long double>; }
    constexpr auto operator ""_MV  (long double x) noexcept { return x * unit::megavolt <long double>; }
    constexpr auto operator ""_kV  (long double x) noexcept { return x * unit::kilovolt <long double>; }
    constexpr auto operator ""_hV  (long double x) noexcept { return x * unit::hectovolt <long double>; }
    constexpr auto operator ""_daV (long double x) noexcept { return x * unit::decavolt <long double>; }
    constexpr auto operator ""_dV  (long double x) noexcept { return x * unit::decivolt <long double>; }
    constexpr auto operator ""_cV  (long double x) noexcept { return x * unit::centivolt <long double>; }
    constexpr auto operator ""_mV  (long double x) noexcept { return x * unit::millivolt <long double>; }
    constexpr auto operator ""_uV  (long double x) noexcept { return x * unit::microvolt <long double>; }
    constexpr auto operator ""_nV  (long double x) noexcept { return x * unit::nanovolt <long double>; }
    constexpr auto operator ""_pV  (long double x) noexcept { return x * unit::picovolt <long double>; }
    constexpr auto operator ""_fV  (long double x) noexcept { return x * unit::femtovolt <long double>; }
    constexpr auto operator ""_aV  (long double x) noexcept { return x * unit::attovolt <long double>; }

    constexpr auto operator ""_F   (long double x) noexcept { return x * unit::farad <long double>; }
    constexpr auto operator ""_EF  (long double x) noexcept { return x * unit::exafarad <long double>; }
    constexpr auto operator ""_PF  (long double x) noexcept { return x * unit::petafarad <long double>; }
    constexpr auto operator ""_TF  (long double x) noexcept { return x * unit::terafarad <long double>; }
    constexpr auto operator ""_GF  (long double x) noexcept { return x * unit::gigafarad <long double>; }
    constexpr auto operator ""_MF  (long double x) noexcept { return x * unit::megafarad <long double>; }
    constexpr auto operator ""_kF  (long double x) noexcept { return x * unit::kilofarad <long double>; }
    constexpr auto operator ""_hF  (long double x) noexcept { return x * unit::hectofarad <long double>; }
    constexpr auto operator ""_daF (long double x) noexcept { return x * unit::decafarad <long double>; }
    constexpr auto operator ""_dF  (long double x) noexcept { return x * unit::decifarad <long double>; }
    constexpr auto operator ""_cF  (long double x) noexcept { return x * unit::centifarad <long double>; }
    constexpr auto operator ""_mF  (long double x) noexcept { return x * unit::millifarad <long double>; }
    constexpr auto operator ""_uF  (long double x) noexcept { return x * unit::microfarad <long double>; }
    constexpr auto operator ""_nF  (long double x) noexcept { return x * unit::nanofarad <long double>; }
    constexpr auto operator ""_pF  (long double x) noexcept { return x * unit::picofarad <long double>; }
    constexpr auto operator ""_fF  (long double x) noexcept { return x * unit::femtofarad <long double>; }
    constexpr auto operator ""_aF  (long double x) noexcept { return x * unit::attofarad <long double>; }

    constexpr auto operator ""_S   (long double x) noexcept { return x * unit::siemens <long double>; }
    constexpr auto operator ""_ES  (long double x) noexcept { return x * unit::exasiemens <long double>; }
    constexpr auto operator ""_PS  (long double x) noexcept { return x * unit::petasiemens <long double>; }
    constexpr auto operator ""_TS  (long double x) noexcept { return x * unit::terasiemens <long double>; }
    constexpr auto operator ""_GS  (long double x) noexcept { return x * unit::gigasiemens <long double>; }
    constexpr auto operator ""_MS  (long double x) noexcept { return x * unit::megasiemens <long double>; }
    constexpr auto operator ""_kS  (long double x) noexcept { return x * unit::kilosiemens <long double>; }
    constexpr auto operator ""_hS  (long double x) noexcept { return x * unit::hectosiemens <long double>; }
    constexpr auto operator ""_daS (long double x) noexcept { return x * unit::decasiemens <long double>; }
    constexpr auto operator ""_dS  (long double x) noexcept { return x * unit::decisiemens <long double>; }
    constexpr auto operator ""_cS  (long double x) noexcept { return x * unit::centisiemens <long double>; }
    constexpr auto operator ""_mS  (long double x) noexcept { return x * unit::millisiemens <long double>; }
    constexpr auto operator ""_uS  (long double x) noexcept { return x * unit::microsiemens <long double>; }
    constexpr auto operator ""_nS  (long double x) noexcept { return x * unit::nanosiemens <long double>; }
    constexpr auto operator ""_pS  (long double x) noexcept { return x * unit::picosiemens <long double>; }
    constexpr auto operator ""_fS  (long double x) noexcept { return x * unit::femtosiemens <long double>; }
    constexpr auto operator ""_aS  (long double x) noexcept { return x * unit::attosiemens <long double>; }

    constexpr auto operator ""_Wb   (long double x) noexcept { return x * unit::weber <long double>; }
    constexpr auto operator ""_EWb  (long double x) noexcept { return x * unit::exaweber <long double>; }
    constexpr auto operator ""_PWb  (long double x) noexcept { return x * unit::petaweber <long double>; }
    constexpr auto operator ""_TWb  (long double x) noexcept { return x * unit::teraweber <long double>; }
    constexpr auto operator ""_GWb  (long double x) noexcept { return x * unit::gigaweber <long double>; }
    constexpr auto operator ""_MWb  (long double x) noexcept { return x * unit::megaweber <long double>; }
    constexpr auto operator ""_kWb  (long double x) noexcept { return x * unit::kiloweber <long double>; }
    constexpr auto operator ""_hWb  (long double x) noexcept { return x * unit::hectoweber <long double>; }
    constexpr auto operator ""_daWb (long double x) noexcept { return x * unit::decaweber <long double>; }
    constexpr auto operator ""_dWb  (long double x) noexcept { return x * unit::deciweber <long double>; }
    constexpr auto operator ""_cWb  (long double x) noexcept { return x * unit::centiweber <long double>; }
    constexpr auto operator ""_mWb  (long double x) noexcept { return x * unit::milliweber <long double>; }
    constexpr auto operator ""_uWb  (long double x) noexcept { return x * unit::microweber <long double>; }
    constexpr auto operator ""_nWb  (long double x) noexcept { return x * unit::nanoweber <long double>; }
    constexpr auto operator ""_pWb  (long double x) noexcept { return x * unit::picoweber <long double>; }
    constexpr auto operator ""_fWb  (long double x) noexcept { return x * unit::femtoweber <long double>; }
    constexpr auto operator ""_aWb  (long double x) noexcept { return x * unit::attoweber <long double>; }

    constexpr auto operator ""_T   (long double x) noexcept { return x * unit::tesla <long double>; }
    constexpr auto operator ""_ET  (long double x) noexcept { return x * unit::exatesla <long double>; }
    constexpr auto operator ""_PT  (long double x) noexcept { return x * unit::petatesla <long double>; }
    constexpr auto operator ""_TT  (long double x) noexcept { return x * unit::teratesla <long double>; }
    constexpr auto operator ""_GT  (long double x) noexcept { return x * unit::gigatesla <long double>; }
    constexpr auto operator ""_MT  (long double x) noexcept { return x * unit::megatesla <long double>; }
    constexpr auto operator ""_kT  (long double x) noexcept { return x * unit::kilotesla <long double>; }
    constexpr auto operator ""_hT  (long double x) noexcept { return x * unit::hectotesla <long double>; }
    constexpr auto operator ""_daT (long double x) noexcept { return x * unit::decatesla <long double>; }
    constexpr auto operator ""_dT  (long double x) noexcept { return x * unit::decitesla <long double>; }
    constexpr auto operator ""_cT  (long double x) noexcept { return x * unit::centitesla <long double>; }
    constexpr auto operator ""_mT  (long double x) noexcept { return x * unit::millitesla <long double>; }
    constexpr auto operator ""_uT  (long double x) noexcept { return x * unit::microtesla <long double>; }
    constexpr auto operator ""_nT  (long double x) noexcept { return x * unit::nanotesla <long double>; }
    constexpr auto operator ""_pT  (long double x) noexcept { return x * unit::picotesla <long double>; }
    constexpr auto operator ""_fT  (long double x) noexcept { return x * unit::femtotesla <long double>; }
    constexpr auto operator ""_aT  (long double x) noexcept { return x * unit::attotesla <long double>; }

    constexpr auto operator ""_H   (long double x) noexcept { return x * unit::henry <long double>; }
    constexpr auto operator ""_EH  (long double x) noexcept { return x * unit::exahenry <long double>; }
    constexpr auto operator ""_PH  (long double x) noexcept { return x * unit::petahenry <long double>; }
    constexpr auto operator ""_TH  (long double x) noexcept { return x * unit::terahenry <long double>; }
    constexpr auto operator ""_GH  (long double x) noexcept { return x * unit::gigahenry <long double>; }
    constexpr auto operator ""_MH  (long double x) noexcept { return x * unit::megahenry <long double>; }
    constexpr auto operator ""_kH  (long double x) noexcept { return x * unit::kilohenry <long double>; }
    constexpr auto operator ""_hH  (long double x) noexcept { return x * unit::hectohenry <long double>; }
    constexpr auto operator ""_daH (long double x) noexcept { return x * unit::decahenry <long double>; }
    constexpr auto operator ""_dH  (long double x) noexcept { return x * unit::decihenry <long double>; }
    constexpr auto operator ""_cH  (long double x) noexcept { return x * unit::centihenry <long double>; }
    constexpr auto operator ""_mH  (long double x) noexcept { return x * unit::millihenry <long double>; }
    constexpr auto operator ""_uH  (long double x) noexcept { return x * unit::microhenry <long double>; }
    constexpr auto operator ""_nH  (long double x) noexcept { return x * unit::nanohenry <long double>; }
    constexpr auto operator ""_pH  (long double x) noexcept { return x * unit::picohenry <long double>; }
    constexpr auto operator ""_fH  (long double x) noexcept { return x * unit::femtohenry <long double>; }
    constexpr auto operator ""_aH  (long double x) noexcept { return x * unit::attohenry <long double>; }

    constexpr auto operator ""_lu   (long double x) noexcept { return x * unit::lumen <long double>; }
    constexpr auto operator ""_Elu  (long double x) noexcept { return x * unit::exalumen <long double>; }
    constexpr auto operator ""_Plu  (long double x) noexcept { return x * unit::petalumen <long double>; }
    constexpr auto operator ""_Tlu  (long double x) noexcept { return x * unit::teralumen <long double>; }
    constexpr auto operator ""_Glu  (long double x) noexcept { return x * unit::gigalumen <long double>; }
    constexpr auto operator ""_Mlu  (long double x) noexcept { return x * unit::megalumen <long double>; }
    constexpr auto operator ""_klu  (long double x) noexcept { return x * unit::kilolumen <long double>; }
    constexpr auto operator ""_hlu  (long double x) noexcept { return x * unit::hectolumen <long double>; }
    constexpr auto operator ""_dalu (long double x) noexcept { return x * unit::decalumen <long double>; }
    constexpr auto operator ""_dlu  (long double x) noexcept { return x * unit::decilumen <long double>; }
    constexpr auto operator ""_clu  (long double x) noexcept { return x * unit::centilumen <long double>; }
    constexpr auto operator ""_mlu  (long double x) noexcept { return x * unit::millilumen <long double>; }
    constexpr auto operator ""_ulu  (long double x) noexcept { return x * unit::microlumen <long double>; }
    constexpr auto operator ""_nlu  (long double x) noexcept { return x * unit::nanolumen <long double>; }
    constexpr auto operator ""_plu  (long double x) noexcept { return x * unit::picolumen <long double>; }
    constexpr auto operator ""_flu  (long double x) noexcept { return x * unit::femtolumen <long double>; }
    constexpr auto operator ""_alu  (long double x) noexcept { return x * unit::attolumen <long double>; }

    constexpr auto operator ""_lx   (long double x) noexcept { return x * unit::lux <long double>; }
    constexpr auto operator ""_Elx  (long double x) noexcept { return x * unit::exalux <long double>; }
    constexpr auto operator ""_Plx  (long double x) noexcept { return x * unit::petalux <long double>; }
    constexpr auto operator ""_Tlx  (long double x) noexcept { return x * unit::teralux <long double>; }
    constexpr auto operator ""_Glx  (long double x) noexcept { return x * unit::gigalux <long double>; }
    constexpr auto operator ""_Mlx  (long double x) noexcept { return x * unit::megalux <long double>; }
    constexpr auto operator ""_klx  (long double x) noexcept { return x * unit::kilolux <long double>; }
    constexpr auto operator ""_hlx  (long double x) noexcept { return x * unit::hectolux <long double>; }
    constexpr auto operator ""_dalx (long double x) noexcept { return x * unit::decalux <long double>; }
    constexpr auto operator ""_dlx  (long double x) noexcept { return x * unit::decilux <long double>; }
    constexpr auto operator ""_clx  (long double x) noexcept { return x * unit::centilux <long double>; }
    constexpr auto operator ""_mlx  (long double x) noexcept { return x * unit::millilux <long double>; }
    constexpr auto operator ""_ulx  (long double x) noexcept { return x * unit::microlux <long double>; }
    constexpr auto operator ""_nlx  (long double x) noexcept { return x * unit::nanolux <long double>; }
    constexpr auto operator ""_plx  (long double x) noexcept { return x * unit::picolux <long double>; }
    constexpr auto operator ""_flx  (long double x) noexcept { return x * unit::femtolux <long double>; }
    constexpr auto operator ""_alx  (long double x) noexcept { return x * unit::attolux <long double>; }

    constexpr auto operator ""_Bq   (long double x) noexcept { return x * unit::becquerel <long double>; }
    constexpr auto operator ""_EBq  (long double x) noexcept { return x * unit::exabecquerel <long double>; }
    constexpr auto operator ""_PBq  (long double x) noexcept { return x * unit::petabecquerel <long double>; }
    constexpr auto operator ""_TBq  (long double x) noexcept { return x * unit::terabecquerel <long double>; }
    constexpr auto operator ""_GBq  (long double x) noexcept { return x * unit::gigabecquerel <long double>; }
    constexpr auto operator ""_MBq  (long double x) noexcept { return x * unit::megabecquerel <long double>; }
    constexpr auto operator ""_kBq  (long double x) noexcept { return x * unit::kilobecquerel <long double>; }
    constexpr auto operator ""_hBq  (long double x) noexcept { return x * unit::hectobecquerel <long double>; }
    constexpr auto operator ""_daBq (long double x) noexcept { return x * unit::decabecquerel <long double>; }
    constexpr auto operator ""_dBq  (long double x) noexcept { return x * unit::decibecquerel <long double>; }
    constexpr auto operator ""_cBq  (long double x) noexcept { return x * unit::centibecquerel <long double>; }
    constexpr auto operator ""_mBq  (long double x) noexcept { return x * unit::millibecquerel <long double>; }
    constexpr auto operator ""_uBq  (long double x) noexcept { return x * unit::microbecquerel <long double>; }
    constexpr auto operator ""_nBq  (long double x) noexcept { return x * unit::nanobecquerel <long double>; }
    constexpr auto operator ""_pBq  (long double x) noexcept { return x * unit::picobecquerel <long double>; }
    constexpr auto operator ""_fBq  (long double x) noexcept { return x * unit::femtobecquerel <long double>; }
    constexpr auto operator ""_aBq  (long double x) noexcept { return x * unit::attobecquerel <long double>; }

    constexpr auto operator ""_Gy   (long double x) noexcept { return x * unit::gray <long double>; }
    constexpr auto operator ""_EGy  (long double x) noexcept { return x * unit::exagray <long double>; }
    constexpr auto operator ""_PGy  (long double x) noexcept { return x * unit::petagray <long double>; }
    constexpr auto operator ""_TGy  (long double x) noexcept { return x * unit::teragray <long double>; }
    constexpr auto operator ""_GGy  (long double x) noexcept { return x * unit::gigagray <long double>; }
    constexpr auto operator ""_MGy  (long double x) noexcept { return x * unit::megagray <long double>; }
    constexpr auto operator ""_kGy  (long double x) noexcept { return x * unit::kilogray <long double>; }
    constexpr auto operator ""_hGy  (long double x) noexcept { return x * unit::hectogray <long double>; }
    constexpr auto operator ""_daGy (long double x) noexcept { return x * unit::decagray <long double>; }
    constexpr auto operator ""_dGy  (long double x) noexcept { return x * unit::decigray <long double>; }
    constexpr auto operator ""_cGy  (long double x) noexcept { return x * unit::centigray <long double>; }
    constexpr auto operator ""_mGy  (long double x) noexcept { return x * unit::milligray <long double>; }
    constexpr auto operator ""_uGy  (long double x) noexcept { return x * unit::microgray <long double>; }
    constexpr auto operator ""_nGy  (long double x) noexcept { return x * unit::nanogray <long double>; }
    constexpr auto operator ""_pGy  (long double x) noexcept { return x * unit::picogray <long double>; }
    constexpr auto operator ""_fGy  (long double x) noexcept { return x * unit::femtogray <long double>; }
    constexpr auto operator ""_aGy  (long double x) noexcept { return x * unit::attogray <long double>; }

    constexpr auto operator ""_Sv   (long double x) noexcept { return x * unit::sievert <long double>; }
    constexpr auto operator ""_ESv  (long double x) noexcept { return x * unit::exasievert <long double>; }
    constexpr auto operator ""_PSv  (long double x) noexcept { return x * unit::petasievert <long double>; }
    constexpr auto operator ""_TSv  (long double x) noexcept { return x * unit::terasievert <long double>; }
    constexpr auto operator ""_GSv  (long double x) noexcept { return x * unit::gigasievert <long double>; }
    constexpr auto operator ""_MSv  (long double x) noexcept { return x * unit::megasievert <long double>; }
    constexpr auto operator ""_kSv  (long double x) noexcept { return x * unit::kilosievert <long double>; }
    constexpr auto operator ""_hSv  (long double x) noexcept { return x * unit::hectosievert <long double>; }
    constexpr auto operator ""_daSv (long double x) noexcept { return x * unit::decasievert <long double>; }
    constexpr auto operator ""_dSv  (long double x) noexcept { return x * unit::decisievert <long double>; }
    constexpr auto operator ""_cSv  (long double x) noexcept { return x * unit::centisievert <long double>; }
    constexpr auto operator ""_mSv  (long double x) noexcept { return x * unit::millisievert <long double>; }
    constexpr auto operator ""_uSv  (long double x) noexcept { return x * unit::microsievert <long double>; }
    constexpr auto operator ""_nSv  (long double x) noexcept { return x * unit::nanosievert <long double>; }
    constexpr auto operator ""_pSv  (long double x) noexcept { return x * unit::picosievert <long double>; }
    constexpr auto operator ""_fSv  (long double x) noexcept { return x * unit::femtosievert <long double>; }
    constexpr auto operator ""_aSv  (long double x) noexcept { return x * unit::attosievert <long double>; }

    constexpr auto operator ""_kat   (long double x) noexcept { return x * unit::katal <long double>; }
    constexpr auto operator ""_Ekat  (long double x) noexcept { return x * unit::exakatal <long double>; }
    constexpr auto operator ""_Pkat  (long double x) noexcept { return x * unit::petakatal <long double>; }
    constexpr auto operator ""_Tkat  (long double x) noexcept { return x * unit::terakatal <long double>; }
    constexpr auto operator ""_Gkat  (long double x) noexcept { return x * unit::gigakatal <long double>; }
    constexpr auto operator ""_Mkat  (long double x) noexcept { return x * unit::megakatal <long double>; }
    constexpr auto operator ""_kkat  (long double x) noexcept { return x * unit::kilokatal <long double>; }
    constexpr auto operator ""_hkat  (long double x) noexcept { return x * unit::hectokatal <long double>; }
    constexpr auto operator ""_dakat (long double x) noexcept { return x * unit::decakatal <long double>; }
    constexpr auto operator ""_dkat  (long double x) noexcept { return x * unit::decikatal <long double>; }
    constexpr auto operator ""_ckat  (long double x) noexcept { return x * unit::centikatal <long double>; }
    constexpr auto operator ""_mkat  (long double x) noexcept { return x * unit::millikatal <long double>; }
    constexpr auto operator ""_ukat  (long double x) noexcept { return x * unit::microkatal <long double>; }
    constexpr auto operator ""_nkat  (long double x) noexcept { return x * unit::nanokatal <long double>; }
    constexpr auto operator ""_pkat  (long double x) noexcept { return x * unit::picokatal <long double>; }
    constexpr auto operator ""_fkat  (long double x) noexcept { return x * unit::femtokatal <long double>; }
    constexpr auto operator ""_akat  (long double x) noexcept { return x * unit::attokatal <long double>; }

} // namespace literals
} // namespace unit
