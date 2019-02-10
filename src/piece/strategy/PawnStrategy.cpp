//
// Created by jw on 10.02.19.
//

#include "PawnStrategy.h"
#include "../Piece.h"
#include "../../board/Board.h"


std::vector<PieceMove> &PawnStrategy::move(Board &board, Position position, Color color) {
    std::vector<PieceMove> *possibleMoves = new std::vector<PieceMove>();
    std::vector<std::vector<Piece *>> boardTab = board.getBoard();
    if (canMoveTwoSquares(board, position, color)) {
        PieceMove move = PieceMove(position, Position(position.getX(), position.getY() + 2), std::nullopt);
        possibleMoves->push_back(move);
    }
    if (canMoveOneSquare(board, position, color)) {
        PieceMove move = PieceMove(position, Position(position.getX(), position.getY() + 1), std::nullopt);
        possibleMoves->push_back(move);
    }
    if (canBeatOnTheLeft(board, position, color)) {
        std::optional<Position> beaten(Position(position.getX(), position.getY() + 1));
        PieceMove move = PieceMove(position, Position(position.getX()+1, position.getY() + 1), beaten);
        possibleMoves->push_back(move);
    }
    if(canBeatOnTheRight(board, position, color)) {
        std::optional<Position> beaten(Position(position.getX(), position.getY() + 1));
        PieceMove move = PieceMove(position, Position(position.getX()-1, position.getY() + 1), beaten);
        possibleMoves->push_back(move);
    }
    return *possibleMoves;
}

bool PawnStrategy::canMoveTwoSquares(Board &board, Position position, Color color) {
    std::vector<std::vector<Piece *>> boardTab = board.getBoard();
    return position.getY() == 1 && boardTab.at(static_cast<unsigned>(position.getX())).at(3) == nullptr
           && boardTab.at(static_cast<unsigned>(position.getX())).at(2) == nullptr;
}

bool PawnStrategy::canMoveOneSquare(Board &board, Position position, Color color) {
    std::vector<std::vector<Piece *>> boardTab = board.getBoard();
    return (position.getY() + 1 < board.getSize() &&
    boardTab.at(static_cast<unsigned>(position.getX())).at(static_cast<unsigned>(position.getY() + 1)) == nullptr);
}

bool PawnStrategy::canBeatOnTheLeft(Board &board, Position position, Color color) {
    std::vector<std::vector<Piece *>> boardTab = board.getBoard();
    return (position.getY() + 1 < board.getSize() && boardTab.at(static_cast<unsigned>(position.getX())).at(static_cast<unsigned>(position.getY() + 1)) != nullptr
           && (*boardTab.at(static_cast<unsigned>(position.getX())).at(static_cast<unsigned>(position.getY() + 1))).getColor() != color
           &&  position.getY() + 1 < board.getSize());
}

bool PawnStrategy::canBeatOnTheRight(Board &board, Position position, Color color) {
    std::vector<std::vector<Piece *>> boardTab = board.getBoard();
    return (position.getY() - 1 < board.getSize() && boardTab.at(static_cast<unsigned>(position.getX())).at(static_cast<unsigned>(position.getY() + 1)) != nullptr
            && (*boardTab.at(static_cast<unsigned>(position.getX())).at(static_cast<unsigned>(position.getY() + 1))).getColor() != color
            &&  position.getY() - 1 < board.getSize());
}
