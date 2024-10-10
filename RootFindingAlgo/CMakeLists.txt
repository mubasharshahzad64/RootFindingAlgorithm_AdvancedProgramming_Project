cmake_minimum_required(VERSION 3.10)
project(RootFindingAlgo)

set(CMAKE_CXX_STANDARD 11)

# Find Python3 and pybind11
find_package(pybind11 REQUIRED)
find_package(Python3 REQUIRED COMPONENTS Interpreter Development)


# Include directories
include_directories(${Python3_INCLUDE_DIRS})
include_directories(${pybind11_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/src)

# Add the executable
add_executable(rootFinder
    src/main.cpp
    src/BisectionMethod.cpp
    src/NewtonRaphsonMethod.cpp
)

# Add the Python bindings module
pybind11_add_module(root_finding 
    src/pybind_module.cpp 
    src/BisectionMethod.cpp 
    src/NewtonRaphsonMethod.cpp 
)

# Link the Python library
target_link_libraries(rootFinder ${Python3_LIBRARIES})
target_link_libraries(root_finding PRIVATE ${Python3_LIBRARIES})

# Ensure the output binaries are placed in the build directory
set_target_properties(rootFinder PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set_target_properties(root_finding PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})




