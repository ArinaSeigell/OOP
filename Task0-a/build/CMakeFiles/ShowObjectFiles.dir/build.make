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
CMAKE_SOURCE_DIR = /home/psychic-octo-potato/Task0-a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/psychic-octo-potato/Task0-a/build

# Utility rule file for ShowObjectFiles.

# Include any custom commands dependencies for this target.
include CMakeFiles/ShowObjectFiles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ShowObjectFiles.dir/progress.make

CMakeFiles/ShowObjectFiles:
	/usr/bin/cmake -E echo Object\ files\ created:
	/usr/bin/cmake -E echo /home/psychic-octo-potato/Task0-a/build/CMakeFiles/Task0_objects.dir/src/main.cpp.o;/home/psychic-octo-potato/Task0-a/build/CMakeFiles/Task0_objects.dir/src/module1.cpp.o;/home/psychic-octo-potato/Task0-a/build/CMakeFiles/Task0_objects.dir/src/module2.cpp.o

ShowObjectFiles: CMakeFiles/ShowObjectFiles
ShowObjectFiles: CMakeFiles/ShowObjectFiles.dir/build.make
.PHONY : ShowObjectFiles

# Rule to build all files generated by this target.
CMakeFiles/ShowObjectFiles.dir/build: ShowObjectFiles
.PHONY : CMakeFiles/ShowObjectFiles.dir/build

CMakeFiles/ShowObjectFiles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ShowObjectFiles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ShowObjectFiles.dir/clean

CMakeFiles/ShowObjectFiles.dir/depend:
	cd /home/psychic-octo-potato/Task0-a/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/psychic-octo-potato/Task0-a /home/psychic-octo-potato/Task0-a /home/psychic-octo-potato/Task0-a/build /home/psychic-octo-potato/Task0-a/build /home/psychic-octo-potato/Task0-a/build/CMakeFiles/ShowObjectFiles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ShowObjectFiles.dir/depend

