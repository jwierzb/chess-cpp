cmake_minimum_required(VERSION 3.13)
project(Szachy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Szachy src/main.cpp src/piece/PieceFactory.cpp src/piece/PieceFactory.h src/piece/Piece.cpp src/piece/Piece.h src/piece/Color.h src/board/Board.cpp src/board/Board.h src/player/PlayerStrategy.h src/player/Player.cpp src/player/Player.h)