//
// Created by jw on 26.01.19.
//

#include "PieceFactory.h"
#include "../board/Board.h"
#include <optional>
#include "PieceMove.h"

Piece PieceFactory::createPawn(Color color) {
    if (color == black) {
        class : public PieceMovingStrategy {
            std::vector<PieceMove> move(Board &board, Position position, Color color) override {

            }
        } strategy;
        return Piece(color, strategy, Pawn);
    } else {
        class : public PieceMovingStrategy {
            std::vector<PieceMove> move(Board &board, Position position, Color color) override {

            }
        } strategy;
        return Piece(color, strategy, Pawn);
    }
}

Piece PieceFactory::createBishop(Color color) {
    class : public PieceMovingStrategy {
        std::vector<PieceMove> move(Board &board, Position position, Color color) override {

        }
    } strategy;
    return Piece(color, strategy, Bishop);
}

Piece PieceFactory::createKnight(Color color) {
    class : public PieceMovingStrategy {
        std::vector<PieceMove> move(Board &board, Position position, Color color) override {

        }
    } strategy;
    return Piece(color, strategy, Knight);
}

Piece PieceFactory::createRook(Color color) {
    class : public PieceMovingStrategy {
        std::vector<PieceMove> move(Board &board, Position position, Color color) override {

        }
    } strategy;
    return Piece(color, strategy, Rook);
}

Piece PieceFactory::createQueen(Color color) {
    class : public PieceMovingStrategy {
        std::vector<PieceMove> move(Board &board, Position position, Color color) override {

        }
    } strategy;
    return Piece(color, strategy, Queen);
}

Piece PieceFactory::createKing(Color color) {
    class : public PieceMovingStrategy {
        std::vector<PieceMove> move(Board &board, Position position, Color color) override {

        }
    } strategy;
    return Piece(color, strategy, King);
}
