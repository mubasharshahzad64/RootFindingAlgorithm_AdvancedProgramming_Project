import root_finding
import scipy.optimize
import numpy as np
import time


def function(x):
    return 0.25 * x * x - x - 1

def derivative(x):
    return 0.5 * x - 1

# Known solutions as mentioned in assignment
known_root1 = -0.8284271247462
known_root2 = 4.8284271247462


tolerance = 1e-6

def validate_root(algorithm_name, computed_root, known_root):
    if np.isclose(computed_root, known_root, atol=tolerance):
        print(f"{algorithm_name} validation passed: {computed_root} is close to {known_root}")
    else:
        print(f"{algorithm_name} validation failed: {computed_root} is not close to {known_root}")

def measure_time(func):
    start = time.time()
    result = func()
    end = time.time()
    return result, end - start

def run_tests():
    print("Running tests with Newton-Raphson and Bisection methods...\n")

    # Newton-Raphson Method with initial guess: -1
    nr_method = root_finding.NewtonRaphsonMethodDouble(function, derivative, -1.0)
    nr_method.initialize(-1.0, tolerance, 1000)
    root_nr1, time_nr1 = measure_time(nr_method.find_root)
    print(f"Newton-Raphson Method (initial guess: -1): Root found: {root_nr1}, Iterations: {nr_method.get_iterations()}, Time: {time_nr1:.6f} seconds")
    validate_root("Newton-Raphson Method (initial guess: -1)", root_nr1, known_root1)

    # Bisection Method with interval: [-2, 0]
    bis_method = root_finding.BisectionMethodDouble(function, -2, 0)
    bis_method.initialize(-2, tolerance, 1000)
    root_bis1, time_bis1 = measure_time(bis_method.find_root)
    print(f"Bisection Method (interval: [-2, 0]): Root found: {root_bis1}, Iterations: {bis_method.get_iterations()}, Time: {time_bis1:.6f} seconds")
    validate_root("Bisection Method (interval: [-2, 0])", root_bis1, known_root1)

    # Newton-Raphson Method with initial guess: 5
    nr_method = root_finding.NewtonRaphsonMethodDouble(function, derivative, 5.0)
    nr_method.initialize(5.0, tolerance, 1000)
    root_nr2, time_nr2 = measure_time(nr_method.find_root)
    print(f"Newton-Raphson Method (initial guess: 5): Root found: {root_nr2}, Iterations: {nr_method.get_iterations()}, Time: {time_nr2:.6f} seconds")
    validate_root("Newton-Raphson Method (initial guess: 5)", root_nr2, known_root2)

    # Bisection Method with interval: [4, 6]
    bis_method = root_finding.BisectionMethodDouble(function, 4, 6)
    bis_method.initialize(4, tolerance, 1000)
    root_bis2, time_bis2 = measure_time(bis_method.find_root)
    print(f"Bisection Method (interval: [4, 6]): Root found: {root_bis2}, Iterations: {bis_method.get_iterations()}, Time: {time_bis2:.6f} seconds")
    validate_root("Bisection Method (interval: [4, 6])", root_bis2, known_root2)

    print("\nComparing results with SciPy...")

    start = time.time()
    root_scipy1 = scipy.optimize.root_scalar(function, bracket=[-2, 0], method='bisect').root
    time_scipy1 = time.time() - start
    print(f"SciPy Bisection Method (interval: [-2, 0]): Root found: {root_scipy1}, Time: {time_scipy1:.6f} seconds")
    validate_root("SciPy Bisection Method (interval: [-2, 0])", root_scipy1, known_root1)

    start = time.time()
    root_scipy2 = scipy.optimize.root_scalar(function, bracket=[4, 6], method='bisect').root
    time_scipy2 = time.time() - start
    print(f"SciPy Bisection Method (interval: [4, 6]): Root found: {root_scipy2}, Time: {time_scipy2:.6f} seconds")
    validate_root("SciPy Bisection Method (interval: [4, 6])", root_scipy2, known_root2)

    # SciPy Newton-Raphson Method  with (initial guess: -1)
    start = time.time()
    root_scipy_nr1 = scipy.optimize.root_scalar(function, fprime=derivative, x0=-1, method='newton').root
    time_scipy_nr1 = time.time() - start
    print(f"SciPy Newton-Raphson Method (initial guess: -1): Root found: {root_scipy_nr1}, Time: {time_scipy_nr1:.6f} seconds")
    validate_root("SciPy Newton-Raphson Method (initial guess: -1)", root_scipy_nr1, known_root1)

    # SciPy Newton-Raphson Metho with  (initial guess: 5)
    start = time.time()
    root_scipy_nr2 = scipy.optimize.root_scalar(function, fprime=derivative, x0=5, method='newton').root
    time_scipy_nr2 = time.time() - start
    print(f"SciPy Newton-Raphson Method (initial guess: 5): Root found: {root_scipy_nr2}, Time: {time_scipy_nr2:.6f} seconds")
    validate_root("SciPy Newton-Raphson Method (initial guess: 5)", root_scipy_nr2, known_root2)

if __name__ == "__main__":
    run_tests()
