# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /private/var/folders/zz/zyxvpxvq6csfxvn_n000clmh0034x4/T/AppTranslocation/316573B8-3433-4213-AF90-392A9042AC5B/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/zz/zyxvpxvq6csfxvn_n000clmh0034x4/T/AppTranslocation/316573B8-3433-4213-AF90-392A9042AC5B/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hakim/cpp-modules/module02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hakim/cpp-modules/module02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ex01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ex01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex01.dir/flags.make

CMakeFiles/ex01.dir/ex01/Fixed.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/ex01/Fixed.cpp.o: ../ex01/Fixed.cpp
CMakeFiles/ex01.dir/ex01/Fixed.cpp.o: CMakeFiles/ex01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hakim/cpp-modules/module02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex01.dir/ex01/Fixed.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex01.dir/ex01/Fixed.cpp.o -MF CMakeFiles/ex01.dir/ex01/Fixed.cpp.o.d -o CMakeFiles/ex01.dir/ex01/Fixed.cpp.o -c /Users/hakim/cpp-modules/module02/ex01/Fixed.cpp

CMakeFiles/ex01.dir/ex01/Fixed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/ex01/Fixed.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hakim/cpp-modules/module02/ex01/Fixed.cpp > CMakeFiles/ex01.dir/ex01/Fixed.cpp.i

CMakeFiles/ex01.dir/ex01/Fixed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/ex01/Fixed.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hakim/cpp-modules/module02/ex01/Fixed.cpp -o CMakeFiles/ex01.dir/ex01/Fixed.cpp.s

CMakeFiles/ex01.dir/ex01/main.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/ex01/main.cpp.o: ../ex01/main.cpp
CMakeFiles/ex01.dir/ex01/main.cpp.o: CMakeFiles/ex01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hakim/cpp-modules/module02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex01.dir/ex01/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex01.dir/ex01/main.cpp.o -MF CMakeFiles/ex01.dir/ex01/main.cpp.o.d -o CMakeFiles/ex01.dir/ex01/main.cpp.o -c /Users/hakim/cpp-modules/module02/ex01/main.cpp

CMakeFiles/ex01.dir/ex01/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/ex01/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hakim/cpp-modules/module02/ex01/main.cpp > CMakeFiles/ex01.dir/ex01/main.cpp.i

CMakeFiles/ex01.dir/ex01/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/ex01/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hakim/cpp-modules/module02/ex01/main.cpp -o CMakeFiles/ex01.dir/ex01/main.cpp.s

# Object files for target ex01
ex01_OBJECTS = \
"CMakeFiles/ex01.dir/ex01/Fixed.cpp.o" \
"CMakeFiles/ex01.dir/ex01/main.cpp.o"

# External object files for target ex01
ex01_EXTERNAL_OBJECTS =

ex01: CMakeFiles/ex01.dir/ex01/Fixed.cpp.o
ex01: CMakeFiles/ex01.dir/ex01/main.cpp.o
ex01: CMakeFiles/ex01.dir/build.make
ex01: CMakeFiles/ex01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hakim/cpp-modules/module02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex01.dir/build: ex01
.PHONY : CMakeFiles/ex01.dir/build

CMakeFiles/ex01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex01.dir/clean

CMakeFiles/ex01.dir/depend:
	cd /Users/hakim/cpp-modules/module02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hakim/cpp-modules/module02 /Users/hakim/cpp-modules/module02 /Users/hakim/cpp-modules/module02/cmake-build-debug /Users/hakim/cpp-modules/module02/cmake-build-debug /Users/hakim/cpp-modules/module02/cmake-build-debug/CMakeFiles/ex01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex01.dir/depend
