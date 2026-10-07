cmake_minimum_required(VERSION 4.4.0)

project(miniSens LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# opencv configs
find_package(Qt6 REQUIRED COMPONENTS Core Widgets OpenGLWidgets)
qt_standard_project_setup()

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)
add_subdirectory(include)