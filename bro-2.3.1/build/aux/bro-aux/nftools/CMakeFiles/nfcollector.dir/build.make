# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/benjamin/Bro/bro-2.3.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/benjamin/Bro/bro-2.3.1/build

# Include any dependencies generated for this target.
include aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/depend.make

# Include the progress variables for this target.
include aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/progress.make

# Include the compile flags for this target's objects.
include aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/flags.make

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/flags.make
aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o: ../aux/bro-aux/nftools/nfcollector.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/nfcollector.dir/nfcollector.c.o   -c /home/benjamin/Bro/bro-2.3.1/aux/bro-aux/nftools/nfcollector.c

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nfcollector.dir/nfcollector.c.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/aux/bro-aux/nftools/nfcollector.c > CMakeFiles/nfcollector.dir/nfcollector.c.i

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nfcollector.dir/nfcollector.c.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/aux/bro-aux/nftools/nfcollector.c -o CMakeFiles/nfcollector.dir/nfcollector.c.s

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.requires:
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.requires

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.provides: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.requires
	$(MAKE) -f aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/build.make aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.provides.build
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.provides

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.provides.build: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o

# Object files for target nfcollector
nfcollector_OBJECTS = \
"CMakeFiles/nfcollector.dir/nfcollector.c.o"

# External object files for target nfcollector
nfcollector_EXTERNAL_OBJECTS =

aux/bro-aux/nftools/nfcollector: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o
aux/bro-aux/nftools/nfcollector: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/build.make
aux/bro-aux/nftools/nfcollector: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable nfcollector"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nfcollector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/build: aux/bro-aux/nftools/nfcollector
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/build

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/requires: aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/nfcollector.c.o.requires
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/requires

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools && $(CMAKE_COMMAND) -P CMakeFiles/nfcollector.dir/cmake_clean.cmake
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/clean

aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/aux/bro-aux/nftools /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools /home/benjamin/Bro/bro-2.3.1/build/aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : aux/bro-aux/nftools/CMakeFiles/nfcollector.dir/depend

