# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/varun/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/varun/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/varun/Desktop/Aether

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin

# Include any dependencies generated for this target.
include CMakeFiles/Aether.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Aether.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Aether.dir/flags.make

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o: CMakeFiles/Aether.dir/flags.make
CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o: ../Aether/src/Aether/Common/Errors/Errors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o -c /cygdrive/c/Users/varun/Desktop/Aether/Aether/src/Aether/Common/Errors/Errors.cpp

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/varun/Desktop/Aether/Aether/src/Aether/Common/Errors/Errors.cpp > CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.i

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/varun/Desktop/Aether/Aether/src/Aether/Common/Errors/Errors.cpp -o CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.s

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.requires:

.PHONY : CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.requires

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.provides: CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.requires
	$(MAKE) -f CMakeFiles/Aether.dir/build.make CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.provides.build
.PHONY : CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.provides

CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.provides.build: CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o


# Object files for target Aether
Aether_OBJECTS = \
"CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o"

# External object files for target Aether
Aether_EXTERNAL_OBJECTS =

../bin/Aether.exe: CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o
../bin/Aether.exe: CMakeFiles/Aether.dir/build.make
../bin/Aether.exe: CMakeFiles/Aether.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/Aether.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Aether.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Aether.dir/build: ../bin/Aether.exe

.PHONY : CMakeFiles/Aether.dir/build

CMakeFiles/Aether.dir/requires: CMakeFiles/Aether.dir/Aether/src/Aether/Common/Errors/Errors.cpp.o.requires

.PHONY : CMakeFiles/Aether.dir/requires

CMakeFiles/Aether.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Aether.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Aether.dir/clean

CMakeFiles/Aether.dir/depend:
	cd /cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/varun/Desktop/Aether /cygdrive/c/Users/varun/Desktop/Aether /cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin /cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin /cygdrive/c/Users/varun/Desktop/Aether/cmake-build-debug-cygin/CMakeFiles/Aether.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Aether.dir/depend

