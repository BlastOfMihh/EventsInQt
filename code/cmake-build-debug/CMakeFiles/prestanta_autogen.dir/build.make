# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/mihh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.9161.40/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/mihh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.9161.40/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mihh/Gits/EventsInQt/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mihh/Gits/EventsInQt/code/cmake-build-debug

# Utility rule file for prestanta_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/prestanta_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prestanta_autogen.dir/progress.make

CMakeFiles/prestanta_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mihh/Gits/EventsInQt/code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target prestanta"
	/home/mihh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.9161.40/bin/cmake/linux/x64/bin/cmake -E cmake_autogen /home/mihh/Gits/EventsInQt/code/cmake-build-debug/CMakeFiles/prestanta_autogen.dir/AutogenInfo.json Debug

prestanta_autogen: CMakeFiles/prestanta_autogen
prestanta_autogen: CMakeFiles/prestanta_autogen.dir/build.make
.PHONY : prestanta_autogen

# Rule to build all files generated by this target.
CMakeFiles/prestanta_autogen.dir/build: prestanta_autogen
.PHONY : CMakeFiles/prestanta_autogen.dir/build

CMakeFiles/prestanta_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prestanta_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prestanta_autogen.dir/clean

CMakeFiles/prestanta_autogen.dir/depend:
	cd /home/mihh/Gits/EventsInQt/code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mihh/Gits/EventsInQt/code /home/mihh/Gits/EventsInQt/code /home/mihh/Gits/EventsInQt/code/cmake-build-debug /home/mihh/Gits/EventsInQt/code/cmake-build-debug /home/mihh/Gits/EventsInQt/code/cmake-build-debug/CMakeFiles/prestanta_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prestanta_autogen.dir/depend

