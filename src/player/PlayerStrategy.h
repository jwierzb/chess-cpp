//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_PLAYERSTRATEGY_H
#define SZACHY_PLAYERSTRATEGY_H


#include "../piece/Color.h"
#include "../board/Board.h"
#include "../piece/PieceMove.h"
#include "../piece/MoveType.h"

class PlayerStrategy {
public:
    virtual MoveType move(Board *, Color, PieceMove) = 0;
};

#endif //SZACHY_PLAYERSTRATEGY_H
