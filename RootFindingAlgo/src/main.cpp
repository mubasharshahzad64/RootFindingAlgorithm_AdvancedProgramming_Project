#include <iostream>
#include <memory>
#include <chrono>  // For timing of c++ algorithm
#include "RootFindingMethod.hpp"
#include "NewtonRaphsonMethod.hpp"
#include "BisectionMethod.hpp"
#include "QuadfuncRootFinder.hpp"

// function required for C++11 compatibility to be added 
template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

int main() {
    int choice;
    double initialGuess;
    double tolerance = 1e-6;
    int maxIterations = 1000;
    double a1 = -2;  // interval settings for Bisection method
    double b1 = 0;   // interval settings for Bisection method
    double a2 = 4;   // interval settings for Bisection method
    double b2 = 6;   // interval settings for Bisection method

    std::cout << "Choose root-finding algorithm:\n";
    std::cout << "1. Newton-Raphson Method (initial guess: -1)\n";
    std::cout << "2. Bisection Method (interval: [-2, 0])\n";
    std::cout << "3. Newton-Raphson Method (initial guess: 5)\n";
    std::cout << "4. Bisection Method (interval: [4, 6])\n";
    std::cin >> choice;

    
    std::unique_ptr<RootFindingMethod<double>> solver;

    if (choice == 1) {
        initialGuess = -1.0;
        solver = make_unique<NewtonRaphsonMethod<double>>(QuadfuncRootFinder::function, QuadfuncRootFinder::derivative, initialGuess);
    } else if (choice == 2) {
        if (QuadfuncRootFinder::function(a1) * QuadfuncRootFinder::function(b1) < 0) {
            solver = make_unique<BisectionMethod<double>>(QuadfuncRootFinder::function, a1, b1);
        } else {
            std::cerr << "Function values at the endpoints must have opposite signs for interval [-2, 0]." << std::endl;
            return 1;
        }
    } else if (choice == 3) {
        initialGuess = 5.0;
        solver = make_unique<NewtonRaphsonMethod<double>>(QuadfuncRootFinder::function, QuadfuncRootFinder::derivative, initialGuess);
    } else if (choice == 4) {
        if (QuadfuncRootFinder::function(a2) * QuadfuncRootFinder::function(b2) < 0) {
            solver = make_unique<BisectionMethod<double>>(QuadfuncRootFinder::function, a2, b2);
        } else {
            std::cerr << "Function values at the endpoints must have opposite signs for interval [4, 6]." << std::endl;
            return 1;
        }
    } else {
        std::cerr << "Invalid choice!" << std::endl;
        return 1;
    }

    solver->initialize(initialGuess, tolerance, maxIterations);

    
    auto start = std::chrono::high_resolution_clock::now();
    double root = solver->find_root();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    
    std::cout << "Root found: " << root << std::endl;
    std::cout << "Iterations: " << solver->get_iterations() << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
