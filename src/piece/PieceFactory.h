//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_PIECEFACTORY_H
#define SZACHY_PIECEFACTORY_H

#include "Piece.h"
#include "strategy/PieceMovingStrategy.h"
#include "Color.h"

class PieceFactory {
public:
    static Piece createPawn(Color);
    static Piece createKnight(Color);
    static Piece createBishop(Color);
    static Piece createRook(Color);
    static Piece createQueen(Color);
    static Piece createKing(Color);
};


#endif //SZACHY_PIECEFACTORY_H
