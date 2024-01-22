cmake_minimum_required(VERSION 3.14)
project(DataStructures)

# Include Google Test
add_subdirectory(googletest)

# Include Project Files
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

# Create the main executable
add_executable(DataStructures ${SOURCES})

# Link Google test to main executable
target_link_libraries(DataStructures gtest gtest_main)

# Specify test files
file(GLOB TEST_SOURCES "tests/*.cpp")

# Create the test executable
add_executable(DataStructuresTest ${TEST_SOURCES})

# Link Google test to test executable
target_link_libraries(DataStructuresTest gtest gtest_main)

# Enable testing
enable_testing()

# Add tests
add_test(NAME DataStructuresTest COMMAND DataStructuresTest)