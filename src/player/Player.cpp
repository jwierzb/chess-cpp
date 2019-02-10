//
// Created by jw on 26.01.19.
//

#include "Player.h"


MoveType Player::move(Board board, Color color, PieceMove *playerMove) {
    return Beat;
}

Player::Player(PlayerStrategy &playerStrategy, const std::string &name) : playerStrategy(playerStrategy),
                                                                                name(name) {}
