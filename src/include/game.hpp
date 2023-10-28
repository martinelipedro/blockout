#ifndef GAME_HPP
#define GAME_HPP

#include <array>
#include <iostream>
#include <optional>

namespace blockout
{
    enum Tile
    {
        Empty = 0,
        Player = 1,
        Obstacle = 2,
    };
    static unsigned int worldMatrix[8][8];

    void printWorldMatrix();
    void setMatixValue(unsigned int x, unsigned int y, unsigned int value);
    void swipeUp();
    void swipeDown();
    void swipeLeft();
    void swipeRight();
};

#endif