# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/alex/Downloads/clion-2020.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alex/Downloads/clion-2020.2.5/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/CLionProjects/Nhap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/CLionProjects/Nhap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/nhap3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nhap3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nhap3.dir/flags.make

CMakeFiles/nhap3.dir/nhap3.cpp.o: CMakeFiles/nhap3.dir/flags.make
CMakeFiles/nhap3.dir/nhap3.cpp.o: ../nhap3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/Nhap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nhap3.dir/nhap3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nhap3.dir/nhap3.cpp.o -c /home/alex/CLionProjects/Nhap/nhap3.cpp

CMakeFiles/nhap3.dir/nhap3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nhap3.dir/nhap3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/Nhap/nhap3.cpp > CMakeFiles/nhap3.dir/nhap3.cpp.i

CMakeFiles/nhap3.dir/nhap3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nhap3.dir/nhap3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/Nhap/nhap3.cpp -o CMakeFiles/nhap3.dir/nhap3.cpp.s

# Object files for target nhap3
nhap3_OBJECTS = \
"CMakeFiles/nhap3.dir/nhap3.cpp.o"

# External object files for target nhap3
nhap3_EXTERNAL_OBJECTS =

nhap3: CMakeFiles/nhap3.dir/nhap3.cpp.o
nhap3: CMakeFiles/nhap3.dir/build.make
nhap3: CMakeFiles/nhap3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/CLionProjects/Nhap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nhap3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nhap3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nhap3.dir/build: nhap3

.PHONY : CMakeFiles/nhap3.dir/build

CMakeFiles/nhap3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nhap3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nhap3.dir/clean

CMakeFiles/nhap3.dir/depend:
	cd /home/alex/CLionProjects/Nhap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/CLionProjects/Nhap /home/alex/CLionProjects/Nhap /home/alex/CLionProjects/Nhap/cmake-build-debug /home/alex/CLionProjects/Nhap/cmake-build-debug /home/alex/CLionProjects/Nhap/cmake-build-debug/CMakeFiles/nhap3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nhap3.dir/depend

