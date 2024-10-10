import root_finding
from scipy import optimize
import time

def func(x):
    return 0.25 * x * x - x - 1

def func_derivative(x):
    return 0.5 * x - 1

def test_bisection(a, b, tolerance):
    bisection = root_finding.BisectionMethodDouble(func, a, b)
    bisection.initialize(a, tolerance, 1000) 

    if func(a) * func(b) >= 0:
        print("Bisection Method cannot be used because function values at the endpoints must have opposite signs.")
        return None, None

    root = bisection.find_root()
    return bisection.get_solution(), bisection.get_iterations()

def test_newton_raphson(initial_guess, tolerance):
    newton = root_finding.NewtonRaphsonMethodDouble(func, func_derivative, initial_guess)
    newton.initialize(initial_guess, tolerance, 1000)

    root = newton.find_root()
    return newton.get_solution(), newton.get_iterations()

def validate_with_scipy(a, b, initial_guess, tolerance):
    start = time.time()
    root_bisect = optimize.root_scalar(func, bracket=[a, b], method='bisect', xtol=tolerance).root
    time_bisect = time.time() - start

    start = time.time()
    root_newton = optimize.root_scalar(func, fprime=func_derivative, x0=initial_guess, method='newton', xtol=tolerance).root
    time_newton = time.time() - start

    return root_bisect, time_bisect, root_newton, time_newton

def main():
    a, b = -5, 0
    initial_guess = -4.9
    tolerance = 0.001

    # Test of  Bisection Method
    bisection_root, bisection_iterations = test_bisection(a, b, tolerance)
    if bisection_root is not None:
        print("Bisection Method:")
        print(f"  Root: {bisection_root}")
        print(f"  Iterations: {bisection_iterations}")
    else:
        print("Bisection Method failed to find a root.")

    # Test of Newton-Raphson Method
    newton_root, newton_iterations = test_newton_raphson(initial_guess, tolerance)
    if newton_root is not None:
        print("Newton-Raphson Method:")
        print(f"  Root: {newton_root}")
        print(f"  Iterations: {newton_iterations}")
    else:
        print("Newton-Raphson Method failed to find a root.")

    # Validation with SciPy
    scipy_bisect_root, time_bisect, scipy_newton_root, time_newton = validate_with_scipy(a, b, initial_guess, tolerance)
    print("SciPy Results:")
    print(f"  Bisection Root: {scipy_bisect_root}, Time: {time_bisect:.6f} seconds")
    print(f"  Newton-Raphson Root: {scipy_newton_root}, Time: {time_newton:.6f} seconds")

if __name__ == "__main__":
    main()
