#include "include/game.hpp"

namespace blockout
{
    void printWorldMatrix()
    {
        std::cout << "[\n";
        for (auto &row : blockout::worldMatrix)
        {
            for (unsigned int tile : row)
            {
                std::cout << '\t' << tile;
            }
            std::cout << '\n';
        }
        std::cout << "\n]\n";
    }
};
