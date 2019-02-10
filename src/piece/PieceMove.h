//
// Created by jw on 09.02.19.
//

#ifndef SZACHY_MOVE_H
#define SZACHY_MOVE_H


#include <utility>
#include "../utils/Position.h"
#include <optional>
class PieceMove {
public:
    PieceMove(Position from, Position to, std::optional<Position> beatenPiecePos);

    Position getFrom() const;

    Position getTo() const;



private:
    Position from;

    Position to;

    std::optional<Position> beatenPiecePos;
};


#endif //SZACHY_MOVE_H
