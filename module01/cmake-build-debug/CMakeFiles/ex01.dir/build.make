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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hangyulkim/42/42cursus/4_circle/cpp/module01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ex01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ex01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex01.dir/flags.make

CMakeFiles/ex01.dir/ex01/main.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/ex01/main.cpp.o: ../ex01/main.cpp
CMakeFiles/ex01.dir/ex01/main.cpp.o: CMakeFiles/ex01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex01.dir/ex01/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex01.dir/ex01/main.cpp.o -MF CMakeFiles/ex01.dir/ex01/main.cpp.o.d -o CMakeFiles/ex01.dir/ex01/main.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/main.cpp

CMakeFiles/ex01.dir/ex01/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/ex01/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/main.cpp > CMakeFiles/ex01.dir/ex01/main.cpp.i

CMakeFiles/ex01.dir/ex01/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/ex01/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/main.cpp -o CMakeFiles/ex01.dir/ex01/main.cpp.s

CMakeFiles/ex01.dir/ex01/Zombie.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/ex01/Zombie.cpp.o: ../ex01/Zombie.cpp
CMakeFiles/ex01.dir/ex01/Zombie.cpp.o: CMakeFiles/ex01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex01.dir/ex01/Zombie.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex01.dir/ex01/Zombie.cpp.o -MF CMakeFiles/ex01.dir/ex01/Zombie.cpp.o.d -o CMakeFiles/ex01.dir/ex01/Zombie.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/Zombie.cpp

CMakeFiles/ex01.dir/ex01/Zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/ex01/Zombie.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/Zombie.cpp > CMakeFiles/ex01.dir/ex01/Zombie.cpp.i

CMakeFiles/ex01.dir/ex01/Zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/ex01/Zombie.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/Zombie.cpp -o CMakeFiles/ex01.dir/ex01/Zombie.cpp.s

CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o: ../ex01/zombieHorde.cpp
CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o: CMakeFiles/ex01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o -MF CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o.d -o CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/zombieHorde.cpp

CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/zombieHorde.cpp > CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.i

CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/ex01/zombieHorde.cpp -o CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.s

# Object files for target ex01
ex01_OBJECTS = \
"CMakeFiles/ex01.dir/ex01/main.cpp.o" \
"CMakeFiles/ex01.dir/ex01/Zombie.cpp.o" \
"CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o"

# External object files for target ex01
ex01_EXTERNAL_OBJECTS =

ex01: CMakeFiles/ex01.dir/ex01/main.cpp.o
ex01: CMakeFiles/ex01.dir/ex01/Zombie.cpp.o
ex01: CMakeFiles/ex01.dir/ex01/zombieHorde.cpp.o
ex01: CMakeFiles/ex01.dir/build.make
ex01: CMakeFiles/ex01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ex01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex01.dir/build: ex01
.PHONY : CMakeFiles/ex01.dir/build

CMakeFiles/ex01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex01.dir/clean

CMakeFiles/ex01.dir/depend:
	cd /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hangyulkim/42/42cursus/4_circle/cpp/module01 /Users/hangyulkim/42/42cursus/4_circle/cpp/module01 /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug /Users/hangyulkim/42/42cursus/4_circle/cpp/module01/cmake-build-debug/CMakeFiles/ex01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex01.dir/depend

