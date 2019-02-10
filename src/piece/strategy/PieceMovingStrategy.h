//
// Created by jw on 09.02.19.
//

#ifndef SZACHY_PIECEMOVINGSTRATEGY_H
#define SZACHY_PIECEMOVINGSTRATEGY_H


#include "../PieceMove.h"
#include "../Color.h"

class Board;
class PieceMovingStrategy {

public:
    virtual std::vector<PieceMove>& move(Board &, Position position, Color color)=0;

};

#endif //SZACHY_PIECEMOVINGSTRATEGY_H
