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

# Utility rule file for bif-std-const.bif.

# Include the progress variables for this target.
include src/CMakeFiles/bif-std-const.bif.dir/progress.make

src/CMakeFiles/bif-std-const.bif: src/const.bif.func_h
src/CMakeFiles/bif-std-const.bif: src/const.bif.netvar_h
src/CMakeFiles/bif-std-const.bif: src/const.bif.func_def
src/CMakeFiles/bif-std-const.bif: src/const.bif.func_init
src/CMakeFiles/bif-std-const.bif: src/const.bif.netvar_def
src/CMakeFiles/bif-std-const.bif: src/const.bif.netvar_init

scripts/base/bif/const.bif.bro: ../src/const.bif
scripts/base/bif/const.bif.bro: src/bifcl
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "[BIFCL] Processing const.bif"
	cd /home/benjamin/Bro/bro-2.3.1/build/src && ./bifcl /home/benjamin/Bro/bro-2.3.1/src/const.bif || ( rm -f /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/const.bif.bro /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.func_def /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.func_h /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.func_init /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.netvar_def /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.netvar_h /home/benjamin/Bro/bro-2.3.1/build/src/const.bif.netvar_init && exit 1 )
	cd /home/benjamin/Bro/bro-2.3.1/build/src && /usr/bin/cmake -E copy const.bif.bro /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/const.bif.bro
	cd /home/benjamin/Bro/bro-2.3.1/build/src && /usr/bin/cmake -E remove -f const.bif.bro

src/const.bif.func_def: scripts/base/bif/const.bif.bro

src/const.bif.func_h: scripts/base/bif/const.bif.bro

src/const.bif.func_init: scripts/base/bif/const.bif.bro

src/const.bif.netvar_def: scripts/base/bif/const.bif.bro

src/const.bif.netvar_h: scripts/base/bif/const.bif.bro

src/const.bif.netvar_init: scripts/base/bif/const.bif.bro

bif-std-const.bif: src/CMakeFiles/bif-std-const.bif
bif-std-const.bif: scripts/base/bif/const.bif.bro
bif-std-const.bif: src/const.bif.func_def
bif-std-const.bif: src/const.bif.func_h
bif-std-const.bif: src/const.bif.func_init
bif-std-const.bif: src/const.bif.netvar_def
bif-std-const.bif: src/const.bif.netvar_h
bif-std-const.bif: src/const.bif.netvar_init
bif-std-const.bif: src/CMakeFiles/bif-std-const.bif.dir/build.make
.PHONY : bif-std-const.bif

# Rule to build all files generated by this target.
src/CMakeFiles/bif-std-const.bif.dir/build: bif-std-const.bif
.PHONY : src/CMakeFiles/bif-std-const.bif.dir/build

src/CMakeFiles/bif-std-const.bif.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/bif-std-const.bif.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/bif-std-const.bif.dir/clean

src/CMakeFiles/bif-std-const.bif.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/src /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/src /home/benjamin/Bro/bro-2.3.1/build/src/CMakeFiles/bif-std-const.bif.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/bif-std-const.bif.dir/depend

