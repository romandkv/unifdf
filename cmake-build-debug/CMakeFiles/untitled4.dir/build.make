# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pshock/CLionProjects/untitled4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pshock/CLionProjects/untitled4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled4.dir/flags.make

CMakeFiles/untitled4.dir/main.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled4.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/main.c.o   -c /Users/pshock/CLionProjects/untitled4/main.c

CMakeFiles/untitled4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/main.c > CMakeFiles/untitled4.dir/main.c.i

CMakeFiles/untitled4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/main.c -o CMakeFiles/untitled4.dir/main.c.s

CMakeFiles/untitled4.dir/parser.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/parser.c.o: ../parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/untitled4.dir/parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/parser.c.o   -c /Users/pshock/CLionProjects/untitled4/parser.c

CMakeFiles/untitled4.dir/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/parser.c > CMakeFiles/untitled4.dir/parser.c.i

CMakeFiles/untitled4.dir/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/parser.c -o CMakeFiles/untitled4.dir/parser.c.s

CMakeFiles/untitled4.dir/vec_handle.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/vec_handle.c.o: ../vec_handle.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/untitled4.dir/vec_handle.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/vec_handle.c.o   -c /Users/pshock/CLionProjects/untitled4/vec_handle.c

CMakeFiles/untitled4.dir/vec_handle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/vec_handle.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/vec_handle.c > CMakeFiles/untitled4.dir/vec_handle.c.i

CMakeFiles/untitled4.dir/vec_handle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/vec_handle.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/vec_handle.c -o CMakeFiles/untitled4.dir/vec_handle.c.s

CMakeFiles/untitled4.dir/put_line.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/put_line.c.o: ../put_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/untitled4.dir/put_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/put_line.c.o   -c /Users/pshock/CLionProjects/untitled4/put_line.c

CMakeFiles/untitled4.dir/put_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/put_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/put_line.c > CMakeFiles/untitled4.dir/put_line.c.i

CMakeFiles/untitled4.dir/put_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/put_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/put_line.c -o CMakeFiles/untitled4.dir/put_line.c.s

CMakeFiles/untitled4.dir/projection.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/projection.c.o: ../projection.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/untitled4.dir/projection.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/projection.c.o   -c /Users/pshock/CLionProjects/untitled4/projection.c

CMakeFiles/untitled4.dir/projection.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/projection.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/projection.c > CMakeFiles/untitled4.dir/projection.c.i

CMakeFiles/untitled4.dir/projection.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/projection.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/projection.c -o CMakeFiles/untitled4.dir/projection.c.s

CMakeFiles/untitled4.dir/rotate.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/rotate.c.o: ../rotate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/untitled4.dir/rotate.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/rotate.c.o   -c /Users/pshock/CLionProjects/untitled4/rotate.c

CMakeFiles/untitled4.dir/rotate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/rotate.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/rotate.c > CMakeFiles/untitled4.dir/rotate.c.i

CMakeFiles/untitled4.dir/rotate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/rotate.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/rotate.c -o CMakeFiles/untitled4.dir/rotate.c.s

CMakeFiles/untitled4.dir/init.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/init.c.o: ../init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/untitled4.dir/init.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/init.c.o   -c /Users/pshock/CLionProjects/untitled4/init.c

CMakeFiles/untitled4.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/init.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/init.c > CMakeFiles/untitled4.dir/init.c.i

CMakeFiles/untitled4.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/init.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/init.c -o CMakeFiles/untitled4.dir/init.c.s

CMakeFiles/untitled4.dir/mem_free.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/mem_free.c.o: ../mem_free.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/untitled4.dir/mem_free.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/mem_free.c.o   -c /Users/pshock/CLionProjects/untitled4/mem_free.c

CMakeFiles/untitled4.dir/mem_free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/mem_free.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/mem_free.c > CMakeFiles/untitled4.dir/mem_free.c.i

CMakeFiles/untitled4.dir/mem_free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/mem_free.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/mem_free.c -o CMakeFiles/untitled4.dir/mem_free.c.s

CMakeFiles/untitled4.dir/getmap.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/getmap.c.o: ../getmap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/untitled4.dir/getmap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/getmap.c.o   -c /Users/pshock/CLionProjects/untitled4/getmap.c

CMakeFiles/untitled4.dir/getmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/getmap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/getmap.c > CMakeFiles/untitled4.dir/getmap.c.i

CMakeFiles/untitled4.dir/getmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/getmap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/getmap.c -o CMakeFiles/untitled4.dir/getmap.c.s

CMakeFiles/untitled4.dir/list_hand.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/list_hand.c.o: ../list_hand.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/untitled4.dir/list_hand.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/list_hand.c.o   -c /Users/pshock/CLionProjects/untitled4/list_hand.c

CMakeFiles/untitled4.dir/list_hand.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/list_hand.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/list_hand.c > CMakeFiles/untitled4.dir/list_hand.c.i

CMakeFiles/untitled4.dir/list_hand.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/list_hand.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/list_hand.c -o CMakeFiles/untitled4.dir/list_hand.c.s

CMakeFiles/untitled4.dir/strspl.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/strspl.c.o: ../strspl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/untitled4.dir/strspl.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/strspl.c.o   -c /Users/pshock/CLionProjects/untitled4/strspl.c

CMakeFiles/untitled4.dir/strspl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/strspl.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/strspl.c > CMakeFiles/untitled4.dir/strspl.c.i

CMakeFiles/untitled4.dir/strspl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/strspl.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/strspl.c -o CMakeFiles/untitled4.dir/strspl.c.s

CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o: ../pshockg/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o   -c /Users/pshock/CLionProjects/untitled4/pshockg/get_next_line.c

CMakeFiles/untitled4.dir/pshockg/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/pshockg/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/pshockg/get_next_line.c > CMakeFiles/untitled4.dir/pshockg/get_next_line.c.i

CMakeFiles/untitled4.dir/pshockg/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/pshockg/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/pshockg/get_next_line.c -o CMakeFiles/untitled4.dir/pshockg/get_next_line.c.s

CMakeFiles/untitled4.dir/action.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/action.c.o: ../action.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/untitled4.dir/action.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/action.c.o   -c /Users/pshock/CLionProjects/untitled4/action.c

CMakeFiles/untitled4.dir/action.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/action.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/action.c > CMakeFiles/untitled4.dir/action.c.i

CMakeFiles/untitled4.dir/action.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/action.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/action.c -o CMakeFiles/untitled4.dir/action.c.s

CMakeFiles/untitled4.dir/events.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/events.c.o: ../events.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/untitled4.dir/events.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/events.c.o   -c /Users/pshock/CLionProjects/untitled4/events.c

CMakeFiles/untitled4.dir/events.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/events.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pshock/CLionProjects/untitled4/events.c > CMakeFiles/untitled4.dir/events.c.i

CMakeFiles/untitled4.dir/events.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/events.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pshock/CLionProjects/untitled4/events.c -o CMakeFiles/untitled4.dir/events.c.s

# Object files for target untitled4
untitled4_OBJECTS = \
"CMakeFiles/untitled4.dir/main.c.o" \
"CMakeFiles/untitled4.dir/parser.c.o" \
"CMakeFiles/untitled4.dir/vec_handle.c.o" \
"CMakeFiles/untitled4.dir/put_line.c.o" \
"CMakeFiles/untitled4.dir/projection.c.o" \
"CMakeFiles/untitled4.dir/rotate.c.o" \
"CMakeFiles/untitled4.dir/init.c.o" \
"CMakeFiles/untitled4.dir/mem_free.c.o" \
"CMakeFiles/untitled4.dir/getmap.c.o" \
"CMakeFiles/untitled4.dir/list_hand.c.o" \
"CMakeFiles/untitled4.dir/strspl.c.o" \
"CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o" \
"CMakeFiles/untitled4.dir/action.c.o" \
"CMakeFiles/untitled4.dir/events.c.o"

# External object files for target untitled4
untitled4_EXTERNAL_OBJECTS =

untitled4: CMakeFiles/untitled4.dir/main.c.o
untitled4: CMakeFiles/untitled4.dir/parser.c.o
untitled4: CMakeFiles/untitled4.dir/vec_handle.c.o
untitled4: CMakeFiles/untitled4.dir/put_line.c.o
untitled4: CMakeFiles/untitled4.dir/projection.c.o
untitled4: CMakeFiles/untitled4.dir/rotate.c.o
untitled4: CMakeFiles/untitled4.dir/init.c.o
untitled4: CMakeFiles/untitled4.dir/mem_free.c.o
untitled4: CMakeFiles/untitled4.dir/getmap.c.o
untitled4: CMakeFiles/untitled4.dir/list_hand.c.o
untitled4: CMakeFiles/untitled4.dir/strspl.c.o
untitled4: CMakeFiles/untitled4.dir/pshockg/get_next_line.c.o
untitled4: CMakeFiles/untitled4.dir/action.c.o
untitled4: CMakeFiles/untitled4.dir/events.c.o
untitled4: CMakeFiles/untitled4.dir/build.make
untitled4: CMakeFiles/untitled4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking C executable untitled4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled4.dir/build: untitled4

.PHONY : CMakeFiles/untitled4.dir/build

CMakeFiles/untitled4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled4.dir/clean

CMakeFiles/untitled4.dir/depend:
	cd /Users/pshock/CLionProjects/untitled4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pshock/CLionProjects/untitled4 /Users/pshock/CLionProjects/untitled4 /Users/pshock/CLionProjects/untitled4/cmake-build-debug /Users/pshock/CLionProjects/untitled4/cmake-build-debug /Users/pshock/CLionProjects/untitled4/cmake-build-debug/CMakeFiles/untitled4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled4.dir/depend

