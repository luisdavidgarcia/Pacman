cmake_minimum_required(VERSION 3.31)
project(PacmanGame)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 5.5)
find_package(raylib ${RAYLIB_VERSION} REQUIRED)

if (NOT raylib_FOUND)
  message(STATUS "raylib not found, fetching it with FetchContent")
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  set(FETCHCONTENT_QUIET OFF)
  FetchContent_MakeAvailable(raylib)

  set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
endif()

# Source files here
add_executable(${PROJECT_NAME} core_basic_window.c)

# Link raylib
target_link_libraries(${PROJECT_NAME} raylib)

# Web Configurations (Optional)
if (${PLATFORM} STREQUAL "Web")
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s USE_GLFW=3 -s ASSERTIONS=1 -s WASM=1 -s ASYNCIFY -s GL_ENABLE_GET_PROC_ADDRESS=1")
endif()

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
    target_link_libraries(${PROJECT_NAME} "-framework CoreVideo")
    target_link_libraries(${PROJECT_NAME} "-framework CoreAudio")
endif()
