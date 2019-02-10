//
// Created by jw on 09.02.19.
//

#ifndef SZACHY_POSITION_H
#define SZACHY_POSITION_H
class Position{
public:
    Position(int x, int y) : x(x), y(y) {}

    int getX() const {
        return x;
    }

    void setX(int x) {
        Position::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Position::y = y;
    }

private:
    int x;
    int y;
};
#endif //SZACHY_POSITION_H
