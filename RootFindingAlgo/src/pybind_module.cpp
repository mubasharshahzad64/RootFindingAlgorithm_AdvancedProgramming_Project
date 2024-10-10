#include <pybind11/pybind11.h>
#include <pybind11/functional.h>
#include "NewtonRaphsonMethod.hpp"
#include "BisectionMethod.hpp"
#include "QuadfuncRootFinder.hpp"

namespace py = pybind11;

PYBIND11_MODULE(root_finding, m) {
    py::class_<RootFindingMethod<double>>(m, "RootFindingMethodDouble")
        .def("initialize", &RootFindingMethod<double>::initialize)
        .def("find_root", &RootFindingMethod<double>::find_root)
        .def("get_iterations", &RootFindingMethod<double>::get_iterations)
        .def("get_solution", &RootFindingMethod<double>::get_solution);

    py::class_<NewtonRaphsonMethod<double>, RootFindingMethod<double>>(m, "NewtonRaphsonMethodDouble")
        .def(py::init<std::function<double(double)>, std::function<double(double)>, double>())
        .def("initialize", &NewtonRaphsonMethod<double>::initialize)
        .def("find_root", &NewtonRaphsonMethod<double>::find_root)
        .def("get_iterations", &NewtonRaphsonMethod<double>::get_iterations)
        .def("get_solution", &NewtonRaphsonMethod<double>::get_solution);

    py::class_<BisectionMethod<double>, RootFindingMethod<double>>(m, "BisectionMethodDouble")
        .def(py::init<std::function<double(double)>, double, double>())
        .def("initialize", &BisectionMethod<double>::initialize)
        .def("find_root", &BisectionMethod<double>::find_root)
        .def("get_iterations", &BisectionMethod<double>::get_iterations)
        .def("get_solution", &BisectionMethod<double>::get_solution);
}
