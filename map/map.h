#ifndef OOP3_MAP_H
#define OOP3_MAP_H

#include <iostream>
#include <vector>
#include "../ship/ship.h"


class Map {
public:
    enum class Ceil {
        water, land
    };
private:
    std::vector<std::vector<Ceil>> map;
    std::pair<int, int> point;
    std::vector<Ship *> enemy;
    std::vector<Ship *> ally;
public:
    int allDoSomething();
};

#endif
