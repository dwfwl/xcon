cmake_minimum_required(VERSION 3.12)
project(xcon)

add_library(xcon src/xcon.cpp src/pch.cpp)

target_include_directories(xcon PRIVATE "${CMAKE_SOURCE_DIR}/include")