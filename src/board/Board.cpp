//
// Created by jw on 26.01.19.
//

#include "Board.h"
#include <algorithm>

void Board::init() {
    board = std::vector<std::vector<Piece*>>(size, std::vector<Piece*>(size, nullptr));
}

bool Board::checkGameState() {
    return false;
}

int Board::getSize() const {
    return size;
}

std::vector<std::vector<Piece*>> &Board::getBoard() {
    return board;
}

Board::Board(int size) {
    assert(size>0);
    this->size = size;
    init();
}

