#include "include/game.hpp"

namespace blockout
{
    void printWorldMatrix()
    {
        std::cout << "[\n";
        for (auto &row : worldMatrix)
        {
            for (unsigned int tile : row)
            {
                std::cout << '\t' << tile;
            }
            std::cout << '\n';
        }
        std::cout << "\n]\n";
    }

    void setMatixValue(unsigned int x, unsigned int y, unsigned int value)
    {
        worldMatrix[x][y] = value;
    }

    bool isTileEmpty(int i, int j)
    {
        if (i < 0 || j < 0 || j > 7 || i > 7)
        {
            return false;
        }

        return worldMatrix[i][j] ==
               Tile::Empty;
    }

    void swipeUp()
    {
        for (int i = 1; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (worldMatrix[i][j] == 0)
                    continue;

                for (int ci = i; isTileEmpty(ci - 1, j); --ci)
                {
                    setMatixValue(ci - 1, j, worldMatrix[ci][j]);
                    setMatixValue(ci, j, Tile::Empty);
                }
            }
        }
    }

    void swipeLeft()
    {
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 1; j < 8; ++j)
            {
                if (worldMatrix[i][j] == 0)
                    continue;

                for (int cj = j; isTileEmpty(i, cj - 1); --cj)
                {
                    setMatixValue(i, cj - 1, worldMatrix[i][cj]);
                    setMatixValue(i, cj, Tile::Empty);
                }
            }
        }
    }
    void swipeDown()
    {
        for (int i = 7; i > -1; --i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (worldMatrix[i][j] == 0)
                    continue;

                for (int ci = i; isTileEmpty(ci + 1, j); ++ci)
                {
                    setMatixValue(ci + 1, j, worldMatrix[ci][j]);
                    setMatixValue(ci, j, Tile::Empty);
                }
            }
        }
    }

    void swipeRight()
    {
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 7; j > -1; --j)
            {
                if (worldMatrix[i][j] == 0)
                    continue;

                for (int cj = j; isTileEmpty(i, cj + 1); ++cj)
                {
                    setMatixValue(i, cj + 1, worldMatrix[i][cj]);
                    setMatixValue(i, cj, Tile::Empty);
                }
            }
        }
    }
};
