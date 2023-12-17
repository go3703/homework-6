#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
    py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
        .def(py::init<>()) // Default constructor
        .def("f1", &HarmonicOscillator::f1)
        .def("f2", &HarmonicOscillator::f2);
}

