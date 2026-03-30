cmake_minimum_required(VERSION 4.2)
project(graphit-eco VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES "source/*.cpp")
add_executable(graphit-eco ${SOURCES})
