# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jabin/programme/gitprojects/c11primer/vec

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jabin/programme/gitprojects/c11primer/vec/build

# Include any dependencies generated for this target.
include CMakeFiles/vec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vec.dir/flags.make

CMakeFiles/vec.dir/MyStr.cpp.o: CMakeFiles/vec.dir/flags.make
CMakeFiles/vec.dir/MyStr.cpp.o: ../MyStr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jabin/programme/gitprojects/c11primer/vec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vec.dir/MyStr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vec.dir/MyStr.cpp.o -c /home/jabin/programme/gitprojects/c11primer/vec/MyStr.cpp

CMakeFiles/vec.dir/MyStr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vec.dir/MyStr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jabin/programme/gitprojects/c11primer/vec/MyStr.cpp > CMakeFiles/vec.dir/MyStr.cpp.i

CMakeFiles/vec.dir/MyStr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vec.dir/MyStr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jabin/programme/gitprojects/c11primer/vec/MyStr.cpp -o CMakeFiles/vec.dir/MyStr.cpp.s

CMakeFiles/vec.dir/MyStr.cpp.o.requires:

.PHONY : CMakeFiles/vec.dir/MyStr.cpp.o.requires

CMakeFiles/vec.dir/MyStr.cpp.o.provides: CMakeFiles/vec.dir/MyStr.cpp.o.requires
	$(MAKE) -f CMakeFiles/vec.dir/build.make CMakeFiles/vec.dir/MyStr.cpp.o.provides.build
.PHONY : CMakeFiles/vec.dir/MyStr.cpp.o.provides

CMakeFiles/vec.dir/MyStr.cpp.o.provides.build: CMakeFiles/vec.dir/MyStr.cpp.o


CMakeFiles/vec.dir/MyStrTest.cc.o: CMakeFiles/vec.dir/flags.make
CMakeFiles/vec.dir/MyStrTest.cc.o: ../MyStrTest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jabin/programme/gitprojects/c11primer/vec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vec.dir/MyStrTest.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vec.dir/MyStrTest.cc.o -c /home/jabin/programme/gitprojects/c11primer/vec/MyStrTest.cc

CMakeFiles/vec.dir/MyStrTest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vec.dir/MyStrTest.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jabin/programme/gitprojects/c11primer/vec/MyStrTest.cc > CMakeFiles/vec.dir/MyStrTest.cc.i

CMakeFiles/vec.dir/MyStrTest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vec.dir/MyStrTest.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jabin/programme/gitprojects/c11primer/vec/MyStrTest.cc -o CMakeFiles/vec.dir/MyStrTest.cc.s

CMakeFiles/vec.dir/MyStrTest.cc.o.requires:

.PHONY : CMakeFiles/vec.dir/MyStrTest.cc.o.requires

CMakeFiles/vec.dir/MyStrTest.cc.o.provides: CMakeFiles/vec.dir/MyStrTest.cc.o.requires
	$(MAKE) -f CMakeFiles/vec.dir/build.make CMakeFiles/vec.dir/MyStrTest.cc.o.provides.build
.PHONY : CMakeFiles/vec.dir/MyStrTest.cc.o.provides

CMakeFiles/vec.dir/MyStrTest.cc.o.provides.build: CMakeFiles/vec.dir/MyStrTest.cc.o


# Object files for target vec
vec_OBJECTS = \
"CMakeFiles/vec.dir/MyStr.cpp.o" \
"CMakeFiles/vec.dir/MyStrTest.cc.o"

# External object files for target vec
vec_EXTERNAL_OBJECTS =

vec: CMakeFiles/vec.dir/MyStr.cpp.o
vec: CMakeFiles/vec.dir/MyStrTest.cc.o
vec: CMakeFiles/vec.dir/build.make
vec: CMakeFiles/vec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jabin/programme/gitprojects/c11primer/vec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vec.dir/build: vec

.PHONY : CMakeFiles/vec.dir/build

CMakeFiles/vec.dir/requires: CMakeFiles/vec.dir/MyStr.cpp.o.requires
CMakeFiles/vec.dir/requires: CMakeFiles/vec.dir/MyStrTest.cc.o.requires

.PHONY : CMakeFiles/vec.dir/requires

CMakeFiles/vec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vec.dir/clean

CMakeFiles/vec.dir/depend:
	cd /home/jabin/programme/gitprojects/c11primer/vec/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jabin/programme/gitprojects/c11primer/vec /home/jabin/programme/gitprojects/c11primer/vec /home/jabin/programme/gitprojects/c11primer/vec/build /home/jabin/programme/gitprojects/c11primer/vec/build /home/jabin/programme/gitprojects/c11primer/vec/build/CMakeFiles/vec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vec.dir/depend
