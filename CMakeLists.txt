cmake_minimum_required(VERSION 3.31)
project(PacmanGame)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# --- Dependencies ---
set(RAYLIB_VERSION 5.5)
find_package(raylib ${RAYLIB_VERSION} REQUIRED)


# --- Source files ---
add_executable(${PROJECT_NAME} 
  src/main.cpp
  src/pacman.cpp
  src/Maze.cpp
  src/Ghost.cpp
)

# --- Include paths ---
target_include_directories(${PROJECT_NAME} PRIVATE include)

# --- Link raylib ---
target_link_libraries(${PROJECT_NAME} raylib)

# --- macOS Frameworks --- 
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
    target_link_libraries(${PROJECT_NAME} "-framework CoreVideo")
    target_link_libraries(${PROJECT_NAME} "-framework CoreAudio")
endif()
