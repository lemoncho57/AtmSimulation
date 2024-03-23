cmake_minimum_required(VERSION 3.28)
project(AtmSimulation)

set(CMAKE_CXX_STANDARD 17)

add_executable(AtmSimulation src/main.cpp
        src/account.h
        src/account.cpp)
