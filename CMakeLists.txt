cmake_minimum_required(VERSION 3.20)

project(GeometryApp
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(geometry
    src/main.cpp
    src/Circle.cpp
    src/Square.cpp
    src/ShapeManager.cpp
    src/AppController.cpp
)

target_include_directories(geometry PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(MSVC)
    target_compile_options(geometry PRIVATE /W4 /permissive-)
else()
    target_compile_options(geometry PRIVATE -Wall -Wextra -Wpedantic)
endif()