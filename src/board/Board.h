//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_BOARD_H
#define SZACHY_BOARD_H


#include "../piece/Piece.h"

class Board {
private:
    Piece * board;
public:
    void init();
    Piece *get();
    bool checkGameState();
};


#endif //SZACHY_BOARD_H
