//
// Created by jw on 10.02.19.
//

#ifndef SZACHY_PAWNSTRATEGY_H
#define SZACHY_PAWNSTRATEGY_H


#include <vector>
#include "PieceMovingStrategy.h"
#include "../Color.h"
#include "../Piece.h"

class PawnStrategy : public PieceMovingStrategy {
public:
    std::vector<PieceMove> &move(Board &board, Position position, Color color);

private:
    bool canMoveOneSquare(Board &board, Position position, Color color);
    bool canMoveTwoSquares(Board &board, Position position, Color color);
    bool canBeatOnTheLeft(Board &board, Position position, Color color);
    bool canBeatOnTheRight(Board &board, Position position, Color color);
};


#endif //SZACHY_PAWNSTRATEGY_H
