# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/wqy/文档/clion-2018.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wqy/文档/clion-2018.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wqy/文档/BeagleTranslator/Verifier

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Verifier.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Verifier.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Verifier.dir/flags.make

CMakeFiles/Verifier.dir/main.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Verifier.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/main.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/main.cpp

CMakeFiles/Verifier.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/main.cpp > CMakeFiles/Verifier.dir/main.cpp.i

CMakeFiles/Verifier.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/main.cpp -o CMakeFiles/Verifier.dir/main.cpp.s

CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o: ../Translator/BeagleTranslator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Translator/BeagleTranslator.cpp

CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Translator/BeagleTranslator.cpp > CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.i

CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Translator/BeagleTranslator.cpp -o CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.s

CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o: ../Model/Process/Process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Process.cpp

CMakeFiles/Verifier.dir/Model/Process/Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Process/Process.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Process.cpp > CMakeFiles/Verifier.dir/Model/Process/Process.cpp.i

CMakeFiles/Verifier.dir/Model/Process/Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Process/Process.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Process.cpp -o CMakeFiles/Verifier.dir/Model/Process/Process.cpp.s

CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o: ../Model/Pragma/InitialKnowledge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/InitialKnowledge.cpp

CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/InitialKnowledge.cpp > CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.i

CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/InitialKnowledge.cpp -o CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.s

CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o: ../Model/Pragma/Property.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/Property.cpp

CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/Property.cpp > CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.i

CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Pragma/Property.cpp -o CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.s

CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o: ../Model/Process/Attribute.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Attribute.cpp

CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Attribute.cpp > CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.i

CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Attribute.cpp -o CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.s

CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o: ../Model/Process/Type.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Type.cpp

CMakeFiles/Verifier.dir/Model/Process/Type.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Process/Type.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Type.cpp > CMakeFiles/Verifier.dir/Model/Process/Type.cpp.i

CMakeFiles/Verifier.dir/Model/Process/Type.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Process/Type.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Type.cpp -o CMakeFiles/Verifier.dir/Model/Process/Type.cpp.s

CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o: ../Model/Process/Method.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Method.cpp

CMakeFiles/Verifier.dir/Model/Process/Method.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Process/Method.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Method.cpp > CMakeFiles/Verifier.dir/Model/Process/Method.cpp.i

CMakeFiles/Verifier.dir/Model/Process/Method.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Process/Method.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Method.cpp -o CMakeFiles/Verifier.dir/Model/Process/Method.cpp.s

CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o: ../Model/Process/Signal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Signal.cpp

CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Signal.cpp > CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.i

CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/Process/Signal.cpp -o CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.s

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o: ../Model/FiniteStateMachine/FiniteStateMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/FiniteStateMachine.cpp

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/FiniteStateMachine.cpp > CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.i

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/FiniteStateMachine.cpp -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.s

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o: ../Model/FiniteStateMachine/Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Vertex.cpp

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Vertex.cpp > CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.i

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Vertex.cpp -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.s

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o: ../Model/FiniteStateMachine/Edge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Edge.cpp

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Edge.cpp > CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.i

CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/Model/FiniteStateMachine/Edge.cpp -o CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.s

CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o: ../BeagleModel/BeagleModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModule.cpp

CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModule.cpp > CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.i

CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModule.cpp -o CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.s

CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o: ../BeagleModel/BeagleProperty.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleProperty.cpp

CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleProperty.cpp > CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.i

CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleProperty.cpp -o CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.s

CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o: ../BeagleModel/BeagleVariable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleVariable.cpp

CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleVariable.cpp > CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.i

CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleVariable.cpp -o CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.s

CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o: CMakeFiles/Verifier.dir/flags.make
CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o: ../BeagleModel/BeagleModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o -c /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModel.cpp

CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModel.cpp > CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.i

CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wqy/文档/BeagleTranslator/Verifier/BeagleModel/BeagleModel.cpp -o CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.s

# Object files for target Verifier
Verifier_OBJECTS = \
"CMakeFiles/Verifier.dir/main.cpp.o" \
"CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o" \
"CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o" \
"CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o" \
"CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o" \
"CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o" \
"CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o" \
"CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o" \
"CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o" \
"CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o"

# External object files for target Verifier
Verifier_EXTERNAL_OBJECTS =

Verifier: CMakeFiles/Verifier.dir/main.cpp.o
Verifier: CMakeFiles/Verifier.dir/Translator/BeagleTranslator.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Process/Process.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Pragma/InitialKnowledge.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Pragma/Property.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Process/Attribute.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Process/Type.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Process/Method.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/Process/Signal.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/FiniteStateMachine/FiniteStateMachine.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Vertex.cpp.o
Verifier: CMakeFiles/Verifier.dir/Model/FiniteStateMachine/Edge.cpp.o
Verifier: CMakeFiles/Verifier.dir/BeagleModel/BeagleModule.cpp.o
Verifier: CMakeFiles/Verifier.dir/BeagleModel/BeagleProperty.cpp.o
Verifier: CMakeFiles/Verifier.dir/BeagleModel/BeagleVariable.cpp.o
Verifier: CMakeFiles/Verifier.dir/BeagleModel/BeagleModel.cpp.o
Verifier: CMakeFiles/Verifier.dir/build.make
Verifier: CMakeFiles/Verifier.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Verifier"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Verifier.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Verifier.dir/build: Verifier

.PHONY : CMakeFiles/Verifier.dir/build

CMakeFiles/Verifier.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Verifier.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Verifier.dir/clean

CMakeFiles/Verifier.dir/depend:
	cd /home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wqy/文档/BeagleTranslator/Verifier /home/wqy/文档/BeagleTranslator/Verifier /home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug /home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug /home/wqy/文档/BeagleTranslator/Verifier/cmake-build-debug/CMakeFiles/Verifier.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Verifier.dir/depend

