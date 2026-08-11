cmake_minimum_required(VERSION 4.3)

project(CellCompiler)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

add_executable(CellCompiler
        Main.cpp
        AbstractStream.h
        String.h
        String.cpp
)