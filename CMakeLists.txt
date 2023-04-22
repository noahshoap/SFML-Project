cmake_minimum_required(VERSION 3.21.1)

project(SFML-Project VERSION 1.0.0 LANGUAGES CXX)

# Specify C++ Flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -O3")

# Specify output path to bin directory
set(EXECUTABLE_OUTPUT_PATH "bin")

# Specify include path
include_directories("./include")

# Find SFML
find_package(SFML 2.5 COMPONENTS
    system window graphics network audio REQUIRED)

# Create game executable
add_executable(game
    src/AssetManager.cpp
    src/Button.cpp
    src/TextButton.cpp
    src/PauseState.cpp
    src/GameState.cpp
    src/MenuState.cpp
    src/StateManager.cpp
    src/Game.cpp
    src/main.cpp
)

# Link SFML to executable
target_link_libraries(game sfml-graphics sfml-window sfml-audio)