#!/bin/bash

# Default build type
BUILD_TYPE="Release"

# Parse command line arguments
if [ "$1" == "clean" ]; then
    echo "Cleaning build and bin directories..."
    rm -rf build bin
    echo "Clean complete."
    exit 0
elif [ "$1" == "debug" ]; then
    BUILD_TYPE="Debug"
    echo "Building in Debug mode..."
elif [ "$1" == "release" ]; then
    BUILD_TYPE="Release"
    echo "Building in Release mode..."
else
    echo "Building in Release mode (default)..."
fi

# Create build directory if it does not exist
mkdir -p build
cd build

# Run CMake with build type
cmake -DCMAKE_BUILD_TYPE=${BUILD_TYPE} ..

# Compile
make

echo "Build finished. Binaries are in the 'bin/' directory."

