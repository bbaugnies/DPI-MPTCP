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

# Utility rule file for bif-plugin-Bro_ICMP-events.bif.

# Include the progress variables for this target.
include src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/progress.make

src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.h
src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.cc
src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.init.cc

scripts/base/bif/plugins/Bro_ICMP.events.bif.bro: ../src/analyzer/protocol/icmp/events.bif
scripts/base/bif/plugins/Bro_ICMP.events.bif.bro: src/bifcl
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "[BIFCL] Processing events.bif"
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp && ../../../bifcl -p\ Bro_ICMP /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/icmp/events.bif || ( rm -f /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/plugins/Bro_ICMP.events.bif.bro events.bif.h events.bif.cc events.bif.init.cc && exit 1 )
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp && /usr/bin/cmake -E copy events.bif.bro /home/benjamin/Bro/bro-2.3.1/build/scripts/base/bif/plugins/Bro_ICMP.events.bif.bro
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp && /usr/bin/cmake -E remove -f events.bif.bro

src/analyzer/protocol/icmp/events.bif.h: scripts/base/bif/plugins/Bro_ICMP.events.bif.bro

src/analyzer/protocol/icmp/events.bif.cc: scripts/base/bif/plugins/Bro_ICMP.events.bif.bro

src/analyzer/protocol/icmp/events.bif.init.cc: scripts/base/bif/plugins/Bro_ICMP.events.bif.bro

bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif
bif-plugin-Bro_ICMP-events.bif: scripts/base/bif/plugins/Bro_ICMP.events.bif.bro
bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.h
bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.cc
bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/events.bif.init.cc
bif-plugin-Bro_ICMP-events.bif: src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/build.make
.PHONY : bif-plugin-Bro_ICMP-events.bif

# Rule to build all files generated by this target.
src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/build: bif-plugin-Bro_ICMP-events.bif
.PHONY : src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/build

src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp && $(CMAKE_COMMAND) -P CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/cmake_clean.cmake
.PHONY : src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/clean

src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/icmp /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp /home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/analyzer/protocol/icmp/CMakeFiles/bif-plugin-Bro_ICMP-events.bif.dir/depend

