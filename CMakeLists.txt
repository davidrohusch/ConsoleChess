cmake_minimum_required(VERSION 3.21)
project(ConsoleChess)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wno-long-long -c -Werror ")

add_executable(ConsoleChess src/main.cpp src/CGame.cpp src/CGame.h src/CFigure.cpp src/CFigure.h src/CPlayer.cpp src/CPlayer.h)

