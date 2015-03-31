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
include src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend.make

# Include the progress variables for this target.
include src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/progress.make

# Include the compile flags for this target's objects.
include src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/flags.make

scripts/base/bif/plugins/Bro_IRC.events.bif.bro: ../src/analyzer/protocol/irc/events.bif
scripts/base/bif/plugins/Bro_IRC.events.bif.bro: src/bifcl
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "[BIFCL] Processing events.bif"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && ../../../bifcl -p\ Bro_IRC /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/events.bif || ( rm -f /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/plugins/Bro_IRC.events.bif.bro events.bif.h events.bif.cc events.bif.init.cc && exit 1 )
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/cmake -E copy events.bif.bro /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/plugins/Bro_IRC.events.bif.bro
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/cmake -E remove -f events.bif.bro

src/analyzer/protocol/irc/events.bif.h: scripts/base/bif/plugins/Bro_IRC.events.bif.bro

src/analyzer/protocol/irc/events.bif.cc: scripts/base/bif/plugins/Bro_IRC.events.bif.bro

src/analyzer/protocol/irc/events.bif.init.cc: scripts/base/bif/plugins/Bro_IRC.events.bif.bro

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/flags.make
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o: ../src/analyzer/protocol/irc/IRC.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o -c /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/IRC.cc

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/IRC.cc > CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.i

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/IRC.cc -o CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.s

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.requires:
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.requires

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.provides: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.requires
	$(MAKE) -f src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build.make src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.provides.build
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.provides

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.provides.build: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/flags.make
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o: ../src/analyzer/protocol/irc/Plugin.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o -c /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/Plugin.cc

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/Plugin.cc > CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.i

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/Plugin.cc -o CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.s

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.requires:
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.requires

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.provides: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.requires
	$(MAKE) -f src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build.make src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.provides.build
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.provides

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.provides.build: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/flags.make
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o: src/analyzer/protocol/irc/events.bif.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o -c /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.cc

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.cc > CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.i

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.cc -o CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.s

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.requires:
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.requires

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.provides: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.requires
	$(MAKE) -f src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build.make src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.provides.build
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.provides

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.provides.build: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/flags.make
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o: src/analyzer/protocol/irc/events.bif.init.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o -c /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.init.cc

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.i"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.init.cc > CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.i

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.s"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/events.bif.init.cc -o CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.s

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.requires:
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.requires

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.provides: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.requires
	$(MAKE) -f src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build.make src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.provides.build
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.provides

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.provides.build: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o

# Object files for target plugin-Bro-IRC
plugin__Bro__IRC_OBJECTS = \
"CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o" \
"CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o" \
"CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o" \
"CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o"

# External object files for target plugin-Bro-IRC
plugin__Bro__IRC_EXTERNAL_OBJECTS =

src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o
src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o
src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o
src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o
src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build.make
src/analyzer/protocol/irc/libplugin-Bro-IRC.a: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libplugin-Bro-IRC.a"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && $(CMAKE_COMMAND) -P CMakeFiles/plugin-Bro-IRC.dir/cmake_clean_target.cmake
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plugin-Bro-IRC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build: src/analyzer/protocol/irc/libplugin-Bro-IRC.a
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/build

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/requires: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/IRC.cc.o.requires
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/requires: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/Plugin.cc.o.requires
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/requires: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.cc.o.requires
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/requires: src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/events.bif.init.cc.o.requires
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/requires

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc && $(CMAKE_COMMAND) -P CMakeFiles/plugin-Bro-IRC.dir/cmake_clean.cmake
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/clean

src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend: scripts/base/bif/plugins/Bro_IRC.events.bif.bro
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend: src/analyzer/protocol/irc/events.bif.h
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend: src/analyzer/protocol/irc/events.bif.cc
src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend: src/analyzer/protocol/irc/events.bif.init.cc
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/analyzer/protocol/irc/CMakeFiles/plugin-Bro-IRC.dir/depend

