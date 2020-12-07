isto::units
===========

A ``C++20`` headers-only library implementing physical dimension, compie-time
validation of operations on quantities, dynamic (run-time) qunatities and 
physical units.


Requirements
------------

- The `fmtlib/fmt library <https://github.com/fmtlib/fmt>`_.
- The `isto::hash_combine library <https://github.com/le-migou/hash_combine>`_.
- The `taocpp/pegtl library <https://github.com/taocpp/pegtl>`_ (to parse units).

To run the tests:

- `GNU Make <https://www.gnu.org/software/make/>`_.
- The `onqtam/doctest library <https://github.com/onqtam/doctest>`_.


Installation
------------

This is a headers-only library. Just put it where your compiler can find it.


Tests
-----

The tests require the `onqtam/doctest library`_.
Edit the ``config.mk`` file to make the ``DOCTEST_HEADERS`` variable point to 
the directory containing ``doctest/doctest.h``. 

To execute the tests run

    $ make check

in the root directory of the project.


Alternatives
------------

(That I know of.)

- https://github.com/nholthaus/units
- https://www.boost.org/doc/libs/1_74_0/doc/html/boost_units.html
- https://github.com/mikeford3/units
- https://github.com/mpusz/units


License
-------

SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception


Affiliation
-----------

This material is developed by the Scientific Computations and Modelling
platform at the Institut des Sciences de la Terre d'Orléans
(https://www.isto-orleans.fr/), a joint laboratory of the University of Orléans
(https://www.univ-orleans.fr/), the french National Center For Scientific
Research (https://www.cnrs.fr/) and the french Geological Survey
(https://www.brgm.eu/).
