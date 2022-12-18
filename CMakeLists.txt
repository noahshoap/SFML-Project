cmake_minimum_required(VERSION 3.21.1)

project(SFML-Project VERSION 1.0.0 LANGUAGES CXX)

# Specify C++ Flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -O3")

# Specify output path to bin directory
set(EXECUTABLE_OUTPUT_PATH "bin")

# TODO: Find and link SFML

add_executable(game
    src/main.cpp
)