#include "Clyde.h"
#include "Entity.h"
#include "Ghost.h"
#include <ctime>
#include <random>

Clyde::Clyde() : Ghost(17, 9) {}

Clyde::~Clyde()
{
}

void Clyde::moveBehaviour(char** &arr2)
{
    std::mt19937 generator;

    generator.seed(std::time(0));
    std::uniform_int_distribution<int> number(1, 4);

    switch (number(generator))
    {
    case 3:
        if (arr2[coordinateY - 1][coordinateX] == '.' || arr2[coordinateY - 1][coordinateX] == 'o' || arr2[coordinateY - 1][coordinateX] == ' ')
        {
            //move(0, -1);
            coordinateY--;
        }
        break;
    case 4:
        if (arr2[coordinateY + 1][coordinateX] == '.' || arr2[coordinateY + 1][coordinateX] == 'o' || arr2[coordinateY + 1][coordinateX] == ' ')
        {
            coordinateY++;
            //move(0, 1);
        }
        break;
    case 1:
        if (arr2[coordinateY][coordinateX - 1] == '.' || arr2[coordinateY][coordinateX - 1] == 'o' || arr2[coordinateY][coordinateX - 1] == ' ')
        {
            coordinateX--;
            //move(-1, 0);
        }
        break;
    case 2:
        if (arr2[coordinateY][coordinateX + 1] == '.' || arr2[coordinateY][coordinateX + 1] == 'o' || arr2[coordinateY][coordinateX + 1] == ' ')
        {

            coordinateX++;
            //move(1, 0);
        }
        break;
    }
}