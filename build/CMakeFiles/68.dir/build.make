# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jjkjjk23/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jjkjjk23/LeetCode/build

# Include any dependencies generated for this target.
include CMakeFiles/68.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/68.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/68.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/68.dir/flags.make

CMakeFiles/68.dir/68.cpp.o: CMakeFiles/68.dir/flags.make
CMakeFiles/68.dir/68.cpp.o: /home/jjkjjk23/LeetCode/68.cpp
CMakeFiles/68.dir/68.cpp.o: CMakeFiles/68.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jjkjjk23/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/68.dir/68.cpp.o"
	/usr/bin/clang-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/68.dir/68.cpp.o -MF CMakeFiles/68.dir/68.cpp.o.d -o CMakeFiles/68.dir/68.cpp.o -c /home/jjkjjk23/LeetCode/68.cpp

CMakeFiles/68.dir/68.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/68.dir/68.cpp.i"
	/usr/bin/clang-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjkjjk23/LeetCode/68.cpp > CMakeFiles/68.dir/68.cpp.i

CMakeFiles/68.dir/68.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/68.dir/68.cpp.s"
	/usr/bin/clang-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjkjjk23/LeetCode/68.cpp -o CMakeFiles/68.dir/68.cpp.s

# Object files for target 68
68_OBJECTS = \
"CMakeFiles/68.dir/68.cpp.o"

# External object files for target 68
68_EXTERNAL_OBJECTS =

68: CMakeFiles/68.dir/68.cpp.o
68: CMakeFiles/68.dir/build.make
68: CMakeFiles/68.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jjkjjk23/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 68"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/68.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/68.dir/build: 68
.PHONY : CMakeFiles/68.dir/build

CMakeFiles/68.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/68.dir/cmake_clean.cmake
.PHONY : CMakeFiles/68.dir/clean

CMakeFiles/68.dir/depend:
	cd /home/jjkjjk23/LeetCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jjkjjk23/LeetCode /home/jjkjjk23/LeetCode /home/jjkjjk23/LeetCode/build /home/jjkjjk23/LeetCode/build /home/jjkjjk23/LeetCode/build/CMakeFiles/68.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/68.dir/depend

