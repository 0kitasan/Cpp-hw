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
CMAKE_SOURCE_DIR = /home/xyt/cpp_proj/array/array11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xyt/cpp_proj/array/array11/build

# Include any dependencies generated for this target.
include CMakeFiles/cpphw.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cpphw.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cpphw.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpphw.dir/flags.make

CMakeFiles/cpphw.dir/main.cpp.o: CMakeFiles/cpphw.dir/flags.make
CMakeFiles/cpphw.dir/main.cpp.o: ../main.cpp
CMakeFiles/cpphw.dir/main.cpp.o: CMakeFiles/cpphw.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xyt/cpp_proj/array/array11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpphw.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpphw.dir/main.cpp.o -MF CMakeFiles/cpphw.dir/main.cpp.o.d -o CMakeFiles/cpphw.dir/main.cpp.o -c /home/xyt/cpp_proj/array/array11/main.cpp

CMakeFiles/cpphw.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpphw.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xyt/cpp_proj/array/array11/main.cpp > CMakeFiles/cpphw.dir/main.cpp.i

CMakeFiles/cpphw.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpphw.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xyt/cpp_proj/array/array11/main.cpp -o CMakeFiles/cpphw.dir/main.cpp.s

# Object files for target cpphw
cpphw_OBJECTS = \
"CMakeFiles/cpphw.dir/main.cpp.o"

# External object files for target cpphw
cpphw_EXTERNAL_OBJECTS =

cpphw: CMakeFiles/cpphw.dir/main.cpp.o
cpphw: CMakeFiles/cpphw.dir/build.make
cpphw: CMakeFiles/cpphw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xyt/cpp_proj/array/array11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpphw"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpphw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpphw.dir/build: cpphw
.PHONY : CMakeFiles/cpphw.dir/build

CMakeFiles/cpphw.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpphw.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpphw.dir/clean

CMakeFiles/cpphw.dir/depend:
	cd /home/xyt/cpp_proj/array/array11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xyt/cpp_proj/array/array11 /home/xyt/cpp_proj/array/array11 /home/xyt/cpp_proj/array/array11/build /home/xyt/cpp_proj/array/array11/build /home/xyt/cpp_proj/array/array11/build/CMakeFiles/cpphw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpphw.dir/depend

