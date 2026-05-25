cmake_minimum_required(VERSION 3.10)
project(WardLogicEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(WardLogicEngine
    src/main.cpp
    src/engine.cpp
)
