/*
#include "BisectionMethod.hpp"
#include <iostream>
#include <cmath>

BisectionMethod::BisectionMethod(std::function<double(double)> func, double a, double b)
    : f(func), a(a), b(b), tol(1e-6), max_iter(1000), root(0.0), iterations(0) {}

void BisectionMethod::initialize(double initialGuess, double tolerance, int maxIterations) {
    tol = tolerance;
    max_iter = maxIterations;
}

double BisectionMethod::find_root() {
    double c;
    iterations = 0;

    if (f(a) * f(b) >= 0) {
        throw std::runtime_error("Function values at the endpoints must have opposite signs.");
    }

    while ((b - a) / 2 > tol && iterations < max_iter) {
        c = (a + b) / 2;
        if (f(c) == 0.0 || (b - a) / 2 < tol) {
            root = c;
            return root;
        }
        (f(c) * f(a) < 0) ? b = c : a = c;
        iterations++;
    }

    root = c;
    return root;
}

int BisectionMethod::get_iterations() const {
    return iterations;
}

double BisectionMethod::get_solution() const {
    return root;
}


*/

#include "BisectionMethod.hpp"
#include <iostream>
#include <cmath>

template <typename T>
BisectionMethod<T>::BisectionMethod(std::function<T(T)> func, T a, T b)
    : f(func), a(a), b(b), tol(1e-6), max_iter(1000), root(T()), iterations(0) {}

template <typename T>
void BisectionMethod<T>::initialize(T initialGuess, double tolerance, int maxIterations) {
    tol = tolerance;
    max_iter = maxIterations;
}

template <typename T>
T BisectionMethod<T>::find_root() {
    T c;
    iterations = 0;

    if (f(a) * f(b) >= 0) {
        throw std::runtime_error("Function values at the endpoints must have opposite signs.");
    }

    while ((b - a) / 2 > tol && iterations < max_iter) {
        c = (a + b) / 2;
        if (f(c) == 0.0 || (b - a) / 2 < tol) {
            root = c;
            return root;
        }
        (f(c) * f(a) < 0) ? b = c : a = c;
        iterations++;
    }

    root = c;
    return root;
}

template <typename T>
int BisectionMethod<T>::get_iterations() const {
    return iterations;
}

template <typename T>
T BisectionMethod<T>::get_solution() const {
    return root;
}


template class BisectionMethod<double>;
