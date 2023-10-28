#include "include/game.hpp"

int main()
{
    blockout::setMatixValue(7, 2, blockout::Obstacle);
    blockout::setMatixValue(2, 2, blockout::Obstacle);
    blockout::setMatixValue(2, 6, blockout::Obstacle);

    blockout::setMatixValue(6, 2, blockout::Player);

    blockout::printWorldMatrix();
    blockout::swipeUp();
    blockout::swipeLeft();
    blockout::swipeDown();
    blockout::swipeRight();

    blockout::printWorldMatrix();
}