# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rina/OOP-Task1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rina/OOP-Task1/build

# Include any dependencies generated for this target.
include CMakeFiles/CircularBufferTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CircularBufferTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CircularBufferTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CircularBufferTests.dir/flags.make

CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o: CMakeFiles/CircularBufferTests.dir/flags.make
CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o: ../tests/CircularBufferTests.cpp
CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o: CMakeFiles/CircularBufferTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rina/OOP-Task1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o -MF CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o.d -o CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o -c /home/rina/OOP-Task1/tests/CircularBufferTests.cpp

CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rina/OOP-Task1/tests/CircularBufferTests.cpp > CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.i

CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rina/OOP-Task1/tests/CircularBufferTests.cpp -o CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.s

# Object files for target CircularBufferTests
CircularBufferTests_OBJECTS = \
"CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o"

# External object files for target CircularBufferTests
CircularBufferTests_EXTERNAL_OBJECTS =

CircularBufferTests: CMakeFiles/CircularBufferTests.dir/tests/CircularBufferTests.cpp.o
CircularBufferTests: CMakeFiles/CircularBufferTests.dir/build.make
CircularBufferTests: lib/libgtest_main.a
CircularBufferTests: libCircularBuffer.a
CircularBufferTests: lib/libgtest.a
CircularBufferTests: CMakeFiles/CircularBufferTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rina/OOP-Task1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CircularBufferTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CircularBufferTests.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=CircularBufferTests -D TEST_EXECUTABLE=/home/rina/OOP-Task1/build/CircularBufferTests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/rina/OOP-Task1/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=CircularBufferTests_TESTS -D CTEST_FILE=/home/rina/OOP-Task1/build/CircularBufferTests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/CircularBufferTests.dir/build: CircularBufferTests
.PHONY : CMakeFiles/CircularBufferTests.dir/build

CMakeFiles/CircularBufferTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CircularBufferTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CircularBufferTests.dir/clean

CMakeFiles/CircularBufferTests.dir/depend:
	cd /home/rina/OOP-Task1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rina/OOP-Task1 /home/rina/OOP-Task1 /home/rina/OOP-Task1/build /home/rina/OOP-Task1/build /home/rina/OOP-Task1/build/CMakeFiles/CircularBufferTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CircularBufferTests.dir/depend

