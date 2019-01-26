//
// Created by jw on 26.01.19.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include "Color.h"

class Piece {

public:
    Piece(Color color, int **moves, const String &name);

private:
    Color color;
    int ** moves;
    String name;

};


#endif //SZACHY_PIECE_H
