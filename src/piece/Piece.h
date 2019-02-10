//
// Created by jw on 26.01.19.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <string>
#include <vector>
#include "Color.h"
#include "PieceType.h"
#include "strategy/PieceMovingStrategy.h"

class Piece {
public:
    Piece(Color color, PieceMovingStrategy &movingStrategy, PieceType pieceType);
    std::vector<PieceMove> getMoves(Board * board, Position position);
    Color getColor() const;

private:
    Color color;
    PieceMovingStrategy & movingStrategy;
    PieceType pieceType;
};


#endif //SZACHY_PIECE_H
