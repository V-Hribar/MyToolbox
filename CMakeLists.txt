cmake_minimum_required(VERSION 3.27)
project(MyToolbox)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Mylib)
add_executable(main main.cpp)
target_link_libraries(main Toolbox)
