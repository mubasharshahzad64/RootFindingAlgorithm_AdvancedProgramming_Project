# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build"

# Include any dependencies generated for this target.
include CMakeFiles/rootFinder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rootFinder.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rootFinder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rootFinder.dir/flags.make

CMakeFiles/rootFinder.dir/src/main.cpp.o: CMakeFiles/rootFinder.dir/flags.make
CMakeFiles/rootFinder.dir/src/main.cpp.o: /Users/vishal/Documents/Advanced\ Programmimg/RootFindingAlgo/src/main.cpp
CMakeFiles/rootFinder.dir/src/main.cpp.o: CMakeFiles/rootFinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rootFinder.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rootFinder.dir/src/main.cpp.o -MF CMakeFiles/rootFinder.dir/src/main.cpp.o.d -o CMakeFiles/rootFinder.dir/src/main.cpp.o -c "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/main.cpp"

CMakeFiles/rootFinder.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/rootFinder.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/main.cpp" > CMakeFiles/rootFinder.dir/src/main.cpp.i

CMakeFiles/rootFinder.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/rootFinder.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/main.cpp" -o CMakeFiles/rootFinder.dir/src/main.cpp.s

CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o: CMakeFiles/rootFinder.dir/flags.make
CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o: /Users/vishal/Documents/Advanced\ Programmimg/RootFindingAlgo/src/BisectionMethod.cpp
CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o: CMakeFiles/rootFinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o -MF CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o.d -o CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o -c "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/BisectionMethod.cpp"

CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/BisectionMethod.cpp" > CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.i

CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/BisectionMethod.cpp" -o CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.s

CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o: CMakeFiles/rootFinder.dir/flags.make
CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o: /Users/vishal/Documents/Advanced\ Programmimg/RootFindingAlgo/src/NewtonRaphsonMethod.cpp
CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o: CMakeFiles/rootFinder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o -MF CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o.d -o CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o -c "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/NewtonRaphsonMethod.cpp"

CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/NewtonRaphsonMethod.cpp" > CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.i

CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/src/NewtonRaphsonMethod.cpp" -o CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.s

# Object files for target rootFinder
rootFinder_OBJECTS = \
"CMakeFiles/rootFinder.dir/src/main.cpp.o" \
"CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o" \
"CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o"

# External object files for target rootFinder
rootFinder_EXTERNAL_OBJECTS =

rootFinder: CMakeFiles/rootFinder.dir/src/main.cpp.o
rootFinder: CMakeFiles/rootFinder.dir/src/BisectionMethod.cpp.o
rootFinder: CMakeFiles/rootFinder.dir/src/NewtonRaphsonMethod.cpp.o
rootFinder: CMakeFiles/rootFinder.dir/build.make
rootFinder: /Library/Frameworks/Python.framework/Versions/3.12/lib/libpython3.12.dylib
rootFinder: CMakeFiles/rootFinder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable rootFinder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rootFinder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rootFinder.dir/build: rootFinder
.PHONY : CMakeFiles/rootFinder.dir/build

CMakeFiles/rootFinder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rootFinder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rootFinder.dir/clean

CMakeFiles/rootFinder.dir/depend:
	cd "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo" "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo" "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build" "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build" "/Users/vishal/Documents/Advanced Programmimg/RootFindingAlgo/build/CMakeFiles/rootFinder.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/rootFinder.dir/depend

