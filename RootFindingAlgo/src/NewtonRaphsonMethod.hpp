#ifndef NEWTON_RAPHSON_METHOD_HPP
#define NEWTON_RAPHSON_METHOD_HPP

#include "RootFindingMethod.hpp"
#include <functional>
#include <stdexcept>

/*
class NewtonRaphsonMethod : public RootFindingMethod {
private:
    std::function<double(double)> f;
    std::function<double(double)> df;
    double x0;
    double tol;
    int max_iter;
    double root;
    int iterations;

public:
    NewtonRaphsonMethod(std::function<double(double)> func, std::function<double(double)> dfunc, double initialGuess);

    void initialize(double initialGuess, double tol, int max_iter) override;
    double find_root() override;
    int get_iterations() const override;
    double get_solution() const override;
};

#endif // NEWTON_RAPHSON_METHOD_HPP

*/

template <typename T>
class NewtonRaphsonMethod : public RootFindingMethod<T> {
private:
    std::function<T(T)> f;
    std::function<T(T)> df;
    T x0;
    double tol;
    int max_iter;
    T root;
    int iterations;

public:
    NewtonRaphsonMethod(std::function<T(T)> func, std::function<T(T)> dfunc, T initialGuess);

    void initialize(T initialGuess, double tol, int max_iter) override;
    T find_root() override;
    int get_iterations() const override;
    T get_solution() const override;
};

#endif // NEWTON_RAPHSON_METHOD_HPP
