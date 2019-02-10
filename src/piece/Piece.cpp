//
// Created by jw on 26.01.19.
//

#include "Piece.h"

Piece::Piece(Color color, PieceMovingStrategy &movingStrategy, PieceType pieceType) : color(color),
                                                                                      movingStrategy(movingStrategy),
                                                                                      pieceType(pieceType) {}

std::vector<PieceMove> Piece::getMoves(Board * board, Position position) {
    return std::vector<PieceMove>();
}

Color Piece::getColor() const {
    return color;
}
