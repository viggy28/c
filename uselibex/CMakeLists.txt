cmake_minimum_required(VERSION 3.27)
project(uselibex C)

set(CMAKE_C_STANDARD 11)

add_executable(uselibex main.c)

target_link_libraries(uselibex /Users/visi/Sourcecontrol/github.com/viggy28/c/libex/cmake-build-debug/liblibex.a)