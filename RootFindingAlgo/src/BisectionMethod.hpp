/*
#ifndef BISECTION_METHOD_HPP
#define BISECTION_METHOD_HPP

#include "RootFindingMethod.hpp"
#include <functional>

class BisectionMethod : public RootFindingMethod {
private:
    std::function<double(double)> f;
    double a, b;
    double tol;
    int max_iter;
    double root;
    int iterations;

public:
    BisectionMethod(std::function<double(double)> func, double a, double b);

    void initialize(double initialGuess, double tol, int max_iter) override;
    double find_root() override;
    int get_iterations() const override;
    double get_solution() const override;
};

#endif // BISECTION_METHOD_HPP

*/

#ifndef BISECTION_METHOD_HPP
#define BISECTION_METHOD_HPP

#include "RootFindingMethod.hpp"
#include <functional>
#include <vector>

template <typename T>
class BisectionMethod : public RootFindingMethod<T> {
private:
    std::function<T(T)> f;
    T a, b;
    double tol;
    int max_iter;
    T root;
    int iterations;

public:
    BisectionMethod(std::function<T(T)> func, T a, T b);

    void initialize(T initialGuess, double tol, int max_iter) override;
    T find_root() override;
    int get_iterations() const override;
    T get_solution() const override;
};

#endif // BISECTION_METHOD_HPP

