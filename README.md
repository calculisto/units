# calculisto::units

A C++20 library implementing physical dimension, compile-time validation of 
operations on quantities, dynamic (run-time) quantities and physical units.

## Dependencies

- The [fmtlib/fmt](https://github.com/fmtlib/fmt) library,
- the [taocpp/pegtl](https://github.com/taocpp/pegtl) library (to parse units).

To run the tests:
- A C++20 capable compiler,
- [GNU Make](https://www.gnu.org/software/make),
- the [doctest/doctest](https://github.com/doctest/doctest) library.

## Installation
This is a headers-only library. Just put it where your compiler can find it.

## Tests
To run the tests, execute `make check` in the root directory of the project.

## Alternatives
(That I know of.)

- https://github.com/nholthaus/units
- https://www.boost.org/doc/libs/1_74_0/doc/html/boost_units.html
- https://github.com/mikeford3/units
- https://github.com/mpusz/units

## License
SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

## Affiliation
This material is developed by the Numerical Modelling platform at the 
Institut des Sciences de la Terre d'Orléans (https://www.isto-orleans.fr), 
a joint laboratory of the University of Orléans (https://www.univ-orleans.fr), 
the french National Center For Scientific Research (https://www.cnrs.fr) and 
the french Geological Survey (https://www.brgm.fr).

![logo ISTO](https://calcul-isto.cnrs-orleans.fr/logos/isto-156.png) &emsp;
![logo CNRS](https://calcul-isto.cnrs-orleans.fr/logos/cnrs-128.png) &emsp;
![logo UO](https://calcul-isto.cnrs-orleans.fr/logos/uo-180.png) &emsp;
![logo BRGM](https://calcul-isto.cnrs-orleans.fr/logos/brgm-256.png)
