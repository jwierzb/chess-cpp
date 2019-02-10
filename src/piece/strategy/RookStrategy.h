//
// Created by jw on 10.02.19.
//

#ifndef SZACHY_ROOK_H
#define SZACHY_ROOK_H


#include <vector>
#include "PieceMovingStrategy.h"

class Rook: public PieceMovingStrategy {
public:
    std::vector<PieceMove> &move(Board &board, Position position, Color color) override;

};


#endif //SZACHY_ROOK_H
