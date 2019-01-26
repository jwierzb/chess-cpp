//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_PLAYERSTRATEGY_H
#define SZACHY_PLAYERSTRATEGY_H


#include "../piece/Color.h"
#include "../board/Board.h"

class PlayerStrategy {
public:
    virtual int move(Board, Color, int * from, int * to, int * beaten);
};


#endif //SZACHY_PLAYERSTRATEGY_H
