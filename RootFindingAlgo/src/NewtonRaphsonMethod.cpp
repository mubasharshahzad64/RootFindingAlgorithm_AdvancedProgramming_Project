/*
#include "NewtonRaphsonMethod.hpp"
#include <cmath>
#include <iostream>

NewtonRaphsonMethod::NewtonRaphsonMethod(std::function<double(double)> func, std::function<double(double)> dfunc, double initialGuess)
    : f(func), df(dfunc), x0(initialGuess), tol(1e-6), max_iter(1000), root(0.0), iterations(0) {}

void NewtonRaphsonMethod::initialize(double initialGuess, double tolerance, int maxIterations) {
    x0 = initialGuess;
    tol = tolerance;
    max_iter = maxIterations;
}

double NewtonRaphsonMethod::find_root() {
    double x = x0;
    iterations = 0;

    while (iterations < max_iter) {
        double fx = f(x);
        double dfx = df(x);
        if (std::abs(dfx) < 1e-12) {
            throw std::runtime_error("Derivative is too small");
        }

        double x1 = x - fx / dfx;
        if (std::abs(x1 - x) < tol) {
            root = x1;
            return root;
        }
        x = x1;
        iterations++;
    }

    root = x;
    return root;
}

int NewtonRaphsonMethod::get_iterations() const {
    return iterations;
}

double NewtonRaphsonMethod::get_solution() const {
    return root;
}

*/

#include "NewtonRaphsonMethod.hpp"
#include <cmath>
#include <iostream>

template <typename T>
NewtonRaphsonMethod<T>::NewtonRaphsonMethod(std::function<T(T)> func, std::function<T(T)> dfunc, T initialGuess)
    : f(func), df(dfunc), x0(initialGuess), tol(1e-6), max_iter(1000), root(T()), iterations(0) {}

template <typename T>
void NewtonRaphsonMethod<T>::initialize(T initialGuess, double tolerance, int maxIterations) {
    x0 = initialGuess;
    tol = tolerance;
    max_iter = maxIterations;
}

template <typename T>
T NewtonRaphsonMethod<T>::find_root() {
    T x = x0;
    iterations = 0;

    while (iterations < max_iter) {
        T fx = f(x);
        T dfx = df(x);
        if (std::abs(dfx) < 1e-12) {
            throw std::runtime_error("Derivative is too small");
        }

        T x1 = x - fx / dfx;
        if (std::abs(x1 - x) < tol) {
            root = x1;
            return root;
        }
        x = x1;
        iterations++;
    }

    root = x;
    return root;
}

template <typename T>
int NewtonRaphsonMethod<T>::get_iterations() const {
    return iterations;
}

template <typename T>
T NewtonRaphsonMethod<T>::get_solution() const {
    return root;
}


template class NewtonRaphsonMethod<double>;

