cmake_minimum_required(VERSION 3.10)

# Project name
project(CPCodeforces)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set source directory
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/800")

# Set binary output directory
set(BIN_DIR "${CMAKE_SOURCE_DIR}/bin")

# Create bin directory
file(MAKE_DIRECTORY ${BIN_DIR})

# Gather all .cpp files in the source directory
file(GLOB CPP_FILES "${SOURCE_DIR}/*.cpp")

# For each cpp file, create an executable
foreach(CPP_FILE ${CPP_FILES})
    # Extract the filename without extension
    get_filename_component(EXEC_NAME ${CPP_FILE} NAME_WE)

    # Add executable
    add_executable(${EXEC_NAME} ${CPP_FILE})

    # Set the output directory of the binary
    set_target_properties(${EXEC_NAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
    )
endforeach()

