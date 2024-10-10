# test_root_finding.py
import root_finding


def function(x):
    return 0.25 * x * x - x - 1

def derivative(x):
    return 0.5 * x - 1

# Newton-Raphson Method
print("Newton-Raphson Method (initial guess: -1):")
nr_method = root_finding.NewtonRaphsonMethodDouble(function, derivative, -1.0)
nr_method.initialize(-1.0, 1e-6, 1000)
root = nr_method.find_root()
print(f"Root found: {root}")
print(f"Iterations: {nr_method.get_iterations()}")

# Bisection Method
print("Bisection Method (interval: [-2, 0]):")
bis_method = root_finding.BisectionMethodDouble(function, -2, 0)
bis_method.initialize(-2, 1e-6, 1000)
root = bis_method.find_root()
print(f"Root found: {root}")
print(f"Iterations: {bis_method.get_iterations()}")

# Newton-Raphson Method
print("Newton-Raphson Method (initial guess: 5):")
nr_method = root_finding.NewtonRaphsonMethodDouble(function, derivative, 5.0)
nr_method.initialize(5.0, 1e-6, 1000)
root = nr_method.find_root()
print(f"Root found: {root}")
print(f"Iterations: {nr_method.get_iterations()}")

# Bisection Method
print("Bisection Method (interval: [4, 6]):")
bis_method = root_finding.BisectionMethodDouble(function, 4, 6)
bis_method.initialize(4, 1e-6, 1000)
root = bis_method.find_root()
print(f"Root found: {root}")
print(f"Iterations: {bis_method.get_iterations()}")
