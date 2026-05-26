cmake_minimum_required(VERSION 3.10)
project(WardLogicEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(WardLogicEngine
    src/main.cpp
    src/engine.cpp
    src/AIConsistencyModule.cpp
)
add_executable(TestModule1
    tests/test_module1.cpp
    src/AIConsistencyModule.cpp
)
target_include_directories(TestModule1 PRIVATE include)
