//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_BOARD_H
#define SZACHY_BOARD_H


#include <vector>
#include "../piece/Piece.h"
#include <cassert>

class Board {

private:
    int size;
    std::vector<std::vector<Piece*>>  board;

public:
    Board(int size);

    void init();

    bool checkGameState();

    int getSize() const;

    std::vector<std::vector<Piece*>> &getBoard();

};


#endif //SZACHY_BOARD_H
