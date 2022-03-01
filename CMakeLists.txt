cmake_minimum_required(VERSION 3.21)
project(ConsoleChess)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wno-long-long -c -Werror ")

add_executable(ConsoleChess src/main.cpp src/CGame.cpp src/CGame.h src/pieces/CPiece.cpp src/pieces/CPiece.h src/players/CPlayer.cpp src/players/CPlayer.h src/players/CPlayerHuman.cpp src/players/CPlayerHuman.h src/pieces/CPawn.cpp src/pieces/CPawn.h src/pieces/CBishop.cpp src/pieces/CBishop.h src/pieces/CKnight.cpp src/pieces/CKnight.h src/pieces/CRook.cpp src/pieces/CRook.h src/pieces/CQueen.cpp src/pieces/CQueen.h src/pieces/CKing.cpp src/pieces/CKing.h src/PIECES.h)

