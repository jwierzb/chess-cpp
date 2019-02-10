//
// Created by jw on 26.01.19.
//

#ifndef SZACHY_PLAYER_H
#define SZACHY_PLAYER_H


#include "PlayerStrategy.h"
#include <string>

class Player {
private:
    PlayerStrategy & playerStrategy;
    std::string name;

public:
    Player(PlayerStrategy &playerStrategy, const std::string &name);

    MoveType move(Board board, Color color, PieceMove *playerMove);

};


#endif //SZACHY_PLAYER_H
