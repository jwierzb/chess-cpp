//
// Created by jw on 09.02.19.
//

#include "PieceMove.h"
#include "../utils/Position.h"

PieceMove::PieceMove(Position from, Position to,
                     std::optional<Position>  beatenPiecePos) : from(from), to(to),
                                                beatenPiecePos(beatenPiecePos) {}

Position PieceMove::getFrom() const {
    return from;
}

Position PieceMove::getTo() const {
    return to;
}


