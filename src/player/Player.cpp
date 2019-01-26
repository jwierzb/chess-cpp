//
// Created by jw on 26.01.19.
//

#include "Player.h"

int Player::move(Board board, Color color, int *a, int *b, int *c) {
    return playerStrategy.move(board, color, a, b, c);
}

Player::Player(const PlayerStrategy &playerStrategy, const String &name) : playerStrategy(playerStrategy), name(name) {}
