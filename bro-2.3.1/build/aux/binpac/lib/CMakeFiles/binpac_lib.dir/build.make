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
include aux/binpac/lib/CMakeFiles/binpac_lib.dir/depend.make

# Include the progress variables for this target.
include aux/binpac/lib/CMakeFiles/binpac_lib.dir/progress.make

# Include the compile flags for this target's objects.
include aux/binpac/lib/CMakeFiles/binpac_lib.dir/flags.make

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o: aux/binpac/lib/CMakeFiles/binpac_lib.dir/flags.make
aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o: ../aux/binpac/lib/binpac_buffer.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o -c /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_buffer.cc

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binpac_lib.dir/binpac_buffer.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_buffer.cc > CMakeFiles/binpac_lib.dir/binpac_buffer.cc.i

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binpac_lib.dir/binpac_buffer.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_buffer.cc -o CMakeFiles/binpac_lib.dir/binpac_buffer.cc.s

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.requires:
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.requires

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.provides: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.requires
	$(MAKE) -f aux/binpac/lib/CMakeFiles/binpac_lib.dir/build.make aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.provides.build
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.provides

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.provides.build: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o: aux/binpac/lib/CMakeFiles/binpac_lib.dir/flags.make
aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o: ../aux/binpac/lib/binpac_bytestring.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o -c /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_bytestring.cc

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_bytestring.cc > CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.i

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib/binpac_bytestring.cc -o CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.s

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.requires:
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.requires

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.provides: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.requires
	$(MAKE) -f aux/binpac/lib/CMakeFiles/binpac_lib.dir/build.make aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.provides.build
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.provides

aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.provides.build: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o

# Object files for target binpac_lib
binpac_lib_OBJECTS = \
"CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o" \
"CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o"

# External object files for target binpac_lib
binpac_lib_EXTERNAL_OBJECTS =

aux/binpac/lib/libbinpac.a: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o
aux/binpac/lib/libbinpac.a: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o
aux/binpac/lib/libbinpac.a: aux/binpac/lib/CMakeFiles/binpac_lib.dir/build.make
aux/binpac/lib/libbinpac.a: aux/binpac/lib/CMakeFiles/binpac_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libbinpac.a"
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && $(CMAKE_COMMAND) -P CMakeFiles/binpac_lib.dir/cmake_clean_target.cmake
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binpac_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
aux/binpac/lib/CMakeFiles/binpac_lib.dir/build: aux/binpac/lib/libbinpac.a
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/build

aux/binpac/lib/CMakeFiles/binpac_lib.dir/requires: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_buffer.cc.o.requires
aux/binpac/lib/CMakeFiles/binpac_lib.dir/requires: aux/binpac/lib/CMakeFiles/binpac_lib.dir/binpac_bytestring.cc.o.requires
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/requires

aux/binpac/lib/CMakeFiles/binpac_lib.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib && $(CMAKE_COMMAND) -P CMakeFiles/binpac_lib.dir/cmake_clean.cmake
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/clean

aux/binpac/lib/CMakeFiles/binpac_lib.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/aux/binpac/lib /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib /home/benjamin/Bro/bro-2.3.1/build/aux/binpac/lib/CMakeFiles/binpac_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : aux/binpac/lib/CMakeFiles/binpac_lib.dir/depend

