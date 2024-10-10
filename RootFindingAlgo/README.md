# Root-Finding Algorithms Project

This repository contains the implementation of two classic root-finding algorithms: the Bisection Method and the Newton-Raphson Method. It includes both C++ implementations with Python bindings using pybind11, allowing the algorithms to be utilized from Python.This project covers also the root-finding classes be templated over the number of equations to be solved, to allow the solution of only scalar equations.

## 1. To Install Dependencies
Ensure you have the necessary dependencies installed. You will need:
- C++ compiler (like `g++`)
- CMake
- Python (and `pip`)
- Pybind11
- setupTools   # for seting up the build process for the Python bindings.


## 2. Clone the repository
Navigate to the directory where you want to position this repository.

## 3. Create a Build Directory
Create a `build` directory inside the project root and navigate into it. In order to do so execute the following commands.
```
mkdir build
cd build
```

## 4. Run CMake
Configure the project using CMake. This step generates the necessary Makefiles for building the project.
```
cmake ..
```

## 5. Compile the Project with make command
Use `make` to compile the project. This step builds the shared library `root_finding.cpython-312-darwin.so`.
```
make
```

## 6. Run the C++ test
Use the C++ test.
```
./rootFinder
```
Run the following command so that `build` directory can be added to the `PYTHONPATH` environment variable so that Python can find the bindings modules:
```
export PYTHONPATH=$(pwd):$PYTHONPATH
```

## 7. Running the python test Scripts

cd test
python3 test.py          # Basic functionality tests
python3 test_optimize.py # Comparison with SciPy's methods along with time taken

##Additional tests
cd cd RootFindingAlgo/build
python3 test_root_finding.py
python3 test_root_finding_optimize.py


## 8.Project Structure after compilation

RootFindingAlgo/
├── README.md
├── CMakeLists.txt
├── setup.py
├── build/
│   ├── CMakeCache.txt
│   ├── Makefile
│   ├── cmake_install.cmake
│   ├── rootFinder     # Executable created during the cmake build
│   ├── root_finding.cpython-312-darwin.so        # shared library created during build
│   ├── CMakeFiles/
│   ├── test_root_finding_optimize.py
│   ├── test_root_finding.py
├── dist/
├── root_finding.egg-info/
├── src/
│   ├── NewtonRaphsonMethod.hpp
│   ├── BisectionMethod.hpp
│   ├── RootFindingMethod.hpp
│   ├── QuadfuncRootFinder.hpp
│   ├── pybind_module.cpp
│   ├── NewtonRaphsonMethod.cpp
│   ├── BisectionMethod.cpp
│   ├── main.cpp
│   ├── rootFinder  # Executable created during the g++ compilation
├── test/
│   ├── test_optimize.py
│   ├── test.py





