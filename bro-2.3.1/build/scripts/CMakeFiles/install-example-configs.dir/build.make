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

# Utility rule file for install-example-configs.

# Include the progress variables for this target.
include scripts/CMakeFiles/install-example-configs.dir/progress.make

scripts/CMakeFiles/install-example-configs:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/benjamin/Bro/bro-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Installed example configuration files"

install-example-configs: scripts/CMakeFiles/install-example-configs
install-example-configs: scripts/CMakeFiles/install-example-configs.dir/build.make
.PHONY : install-example-configs

# Rule to build all files generated by this target.
scripts/CMakeFiles/install-example-configs.dir/build: install-example-configs
.PHONY : scripts/CMakeFiles/install-example-configs.dir/build

scripts/CMakeFiles/install-example-configs.dir/clean:
	cd /home/benjamin/Bro/bro-2.3.1/build/scripts && $(CMAKE_COMMAND) -P CMakeFiles/install-example-configs.dir/cmake_clean.cmake
.PHONY : scripts/CMakeFiles/install-example-configs.dir/clean

scripts/CMakeFiles/install-example-configs.dir/depend:
	cd /home/benjamin/Bro/bro-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjamin/Bro/bro-2.3.1 /home/benjamin/Bro/bro-2.3.1/scripts /home/benjamin/Bro/bro-2.3.1/build /home/benjamin/Bro/bro-2.3.1/build/scripts /home/benjamin/Bro/bro-2.3.1/build/scripts/CMakeFiles/install-example-configs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scripts/CMakeFiles/install-example-configs.dir/depend

