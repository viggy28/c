cmake_minimum_required(VERSION 3.27)
project(libex C)

set(CMAKE_C_STANDARD 11)

add_library(libex STATIC library.c)
