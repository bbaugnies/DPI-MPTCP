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
include aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/depend.make

# Include the progress variables for this target.
include aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/progress.make

# Include the compile flags for this target's objects.
include aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/flags.make

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/flags.make
aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o: ../aux/broccoli/test/broccoli-v6addrs.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o   -c /home/benjamin/Bro/bro-2.3.1/aux/broccoli/test/broccoli-v6addrs.c

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/aux/broccoli/test/broccoli-v6addrs.c > CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.i

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/aux/broccoli/test/broccoli-v6addrs.c -o CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.s

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.requires:
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.requires

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.provides: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.requires
	$(MAKE) -f aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/build.make aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.provides.build
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.provides

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.provides.build: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o

# Object files for target broccoli-v6addrs
broccoli__v6addrs_OBJECTS = \
"CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o"

# External object files for target broccoli-v6addrs
broccoli__v6addrs_EXTERNAL_OBJECTS =

aux/broccoli/test/broccoli-v6addrs: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o
aux/broccoli/test/broccoli-v6addrs: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/build.make
aux/broccoli/test/broccoli-v6addrs: aux/broccoli/src/libbroccoli.so.5.1.0
aux/broccoli/test/broccoli-v6addrs: /usr/lib/x86_64-linux-gnu/libssl.so
aux/broccoli/test/broccoli-v6addrs: /usr/lib/x86_64-linux-gnu/libcrypto.so
aux/broccoli/test/broccoli-v6addrs: /usr/lib/x86_64-linux-gnu/libresolv.a
aux/broccoli/test/broccoli-v6addrs: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable broccoli-v6addrs"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/broccoli-v6addrs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/build: aux/broccoli/test/broccoli-v6addrs
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/build

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/requires: aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/broccoli-v6addrs.c.o.requires
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/requires

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test && $(CMAKE_COMMAND) -P CMakeFiles/broccoli-v6addrs.dir/cmake_clean.cmake
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/clean

aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/aux/broccoli/test /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test /home/benjamin/Bro/bro-2.3.1/build/aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : aux/broccoli/test/CMakeFiles/broccoli-v6addrs.dir/depend

