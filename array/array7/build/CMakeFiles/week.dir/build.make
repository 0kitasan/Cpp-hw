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
CMAKE_SOURCE_DIR = /home/xyt/cpptest/array7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xyt/cpptest/array7/build

# Include any dependencies generated for this target.
include CMakeFiles/week.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/week.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/week.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week.dir/flags.make

CMakeFiles/week.dir/main.cpp.o: CMakeFiles/week.dir/flags.make
CMakeFiles/week.dir/main.cpp.o: ../main.cpp
CMakeFiles/week.dir/main.cpp.o: CMakeFiles/week.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xyt/cpptest/array7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/week.dir/main.cpp.o -MF CMakeFiles/week.dir/main.cpp.o.d -o CMakeFiles/week.dir/main.cpp.o -c /home/xyt/cpptest/array7/main.cpp

CMakeFiles/week.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xyt/cpptest/array7/main.cpp > CMakeFiles/week.dir/main.cpp.i

CMakeFiles/week.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xyt/cpptest/array7/main.cpp -o CMakeFiles/week.dir/main.cpp.s

# Object files for target week
week_OBJECTS = \
"CMakeFiles/week.dir/main.cpp.o"

# External object files for target week
week_EXTERNAL_OBJECTS =

week: CMakeFiles/week.dir/main.cpp.o
week: CMakeFiles/week.dir/build.make
week: CMakeFiles/week.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xyt/cpptest/array7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week.dir/build: week
.PHONY : CMakeFiles/week.dir/build

CMakeFiles/week.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week.dir/clean

CMakeFiles/week.dir/depend:
	cd /home/xyt/cpptest/array7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xyt/cpptest/array7 /home/xyt/cpptest/array7 /home/xyt/cpptest/array7/build /home/xyt/cpptest/array7/build /home/xyt/cpptest/array7/build/CMakeFiles/week.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week.dir/depend

