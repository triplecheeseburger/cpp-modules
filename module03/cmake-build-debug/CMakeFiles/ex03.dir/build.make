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
CMAKE_SOURCE_DIR = /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex03.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ex03.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ex03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex03.dir/flags.make

CMakeFiles/ex03.dir/ex03/main.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ex03/main.cpp.o: ../ex03/main.cpp
CMakeFiles/ex03.dir/ex03/main.cpp.o: CMakeFiles/ex03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex03.dir/ex03/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex03.dir/ex03/main.cpp.o -MF CMakeFiles/ex03.dir/ex03/main.cpp.o.d -o CMakeFiles/ex03.dir/ex03/main.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/main.cpp

CMakeFiles/ex03.dir/ex03/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ex03/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/main.cpp > CMakeFiles/ex03.dir/ex03/main.cpp.i

CMakeFiles/ex03.dir/ex03/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ex03/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/main.cpp -o CMakeFiles/ex03.dir/ex03/main.cpp.s

CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o: ../ex03/ClapTrap.cpp
CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o: CMakeFiles/ex03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o -MF CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o.d -o CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ClapTrap.cpp

CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ClapTrap.cpp > CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.i

CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ClapTrap.cpp -o CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.s

CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o: ../ex03/ScavTrap.cpp
CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o: CMakeFiles/ex03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o -MF CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o.d -o CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ScavTrap.cpp

CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ScavTrap.cpp > CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.i

CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/ScavTrap.cpp -o CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.s

CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o: ../ex03/FragTrap.cpp
CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o: CMakeFiles/ex03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o -MF CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o.d -o CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/FragTrap.cpp

CMakeFiles/ex03.dir/ex03/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ex03/FragTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/FragTrap.cpp > CMakeFiles/ex03.dir/ex03/FragTrap.cpp.i

CMakeFiles/ex03.dir/ex03/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ex03/FragTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/FragTrap.cpp -o CMakeFiles/ex03.dir/ex03/FragTrap.cpp.s

CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o: ../ex03/DiamondTrap.cpp
CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o: CMakeFiles/ex03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o -MF CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o.d -o CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o -c /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/DiamondTrap.cpp

CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/DiamondTrap.cpp > CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.i

CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/ex03/DiamondTrap.cpp -o CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.s

# Object files for target ex03
ex03_OBJECTS = \
"CMakeFiles/ex03.dir/ex03/main.cpp.o" \
"CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o" \
"CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o" \
"CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o" \
"CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o"

# External object files for target ex03
ex03_EXTERNAL_OBJECTS =

ex03: CMakeFiles/ex03.dir/ex03/main.cpp.o
ex03: CMakeFiles/ex03.dir/ex03/ClapTrap.cpp.o
ex03: CMakeFiles/ex03.dir/ex03/ScavTrap.cpp.o
ex03: CMakeFiles/ex03.dir/ex03/FragTrap.cpp.o
ex03: CMakeFiles/ex03.dir/ex03/DiamondTrap.cpp.o
ex03: CMakeFiles/ex03.dir/build.make
ex03: CMakeFiles/ex03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ex03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex03.dir/build: ex03
.PHONY : CMakeFiles/ex03.dir/build

CMakeFiles/ex03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex03.dir/clean

CMakeFiles/ex03.dir/depend:
	cd /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03 /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03 /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug /Users/hangyulkim/42/42cursus/4_circle/cpp-modules/module03/cmake-build-debug/CMakeFiles/ex03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex03.dir/depend

