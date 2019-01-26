//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_PLAYER_H
#define SZACHY_PLAYER_H


#include "PlayerStrategy.h"

class Player {
private:
    PlayerStrategy playerStrategy;
    String name;
public:
    Player(const PlayerStrategy &playerStrategy, const String &name);

    int move(Board board, Color color, int * a, int * b, int * c);
};


#endif //SZACHY_PLAYER_H
