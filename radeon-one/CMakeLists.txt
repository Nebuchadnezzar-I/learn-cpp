cmake_minimum_required(VERSION 3.10)
project(RadeonOne)

set(CMAKE_CXX_STANDARD 17)

# Set the path to your ANTLR runtime headers and libraries
set(ANTLR_RUNTIME_INCLUDE_DIR /home/admiralcapo/antlr4/runtime/Cpp/runtime/src)
set(ANTLR_RUNTIME_LIB_DIR /home/admiralcapo/antlr4/runtime/Cpp/dist)

# Include directories
include_directories(${ANTLR_RUNTIME_INCLUDE_DIR})
include_directories(src/grammar)  # Include path for generated ANTLR headers
include_directories(src)

# Add ANTLR runtime library path
link_directories(${ANTLR_RUNTIME_LIB_DIR})

# Add all source files, including the generated ANTLR files
file(GLOB SOURCES
    "src/*.cpp"
    "src/grammar/*.cpp"  # Include all .cpp files from the src/grammar directory
    "src/*.h"
    "src/grammar/*.h"
)

# Add executable
add_executable(RadeonOne ${SOURCES})

# Link ANTLR runtime library
target_link_libraries(RadeonOne antlr4-runtime)
