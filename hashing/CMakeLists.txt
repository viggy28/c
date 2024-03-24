cmake_minimum_required(VERSION 3.27)
project(hashing C)

set(CMAKE_C_STANDARD 11)

link_directories(/Users/visi/Sourcecontrol/github.com/Cyan4973/xxHash)

add_executable(hashing main.c)
target_link_libraries(hashing xxhash)