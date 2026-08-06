cmake_minimum_required(VERSION 4.3)

project(Cell)

set(CMAKE_CXX_STANDARD 26)

add_executable(CellCompiler
        Main.cpp
        AbstractStream.h
        String.h
        String.cpp
)