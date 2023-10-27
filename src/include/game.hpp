#ifndef GAME_HPP
#define GAME_HPP

#include <array>
#include <iostream>

namespace blockout
{
    enum class Tile
    {
        Empty = 0,
        Player = 1,
        Obstacle = 2,
    };

    static std::array<std::array<unsigned int, 8>, 8> worldMatrix{};

    void printWorldMatrix();
};

#endif