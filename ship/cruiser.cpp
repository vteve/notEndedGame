#include "cruiser.h"
#include <cmath>

int Cruiser::getFullCost() {
    int costShip = 0;
    for (auto &item: weapon) {
        costShip += item->getCost();
        costShip += item->getCurrentAmmunition() * getListAmmunition()[item->getIndexActiveAmmunition()].getCost();
    }
    for (auto &item: getListAmmunition()) {
        costShip += item.getCost();
    }
    costShip += cost;
    return costShip;
}

int Cruiser::shootShip(Ship *ship) {
    for (auto &item: weapon) {
        if (item->getFiringRange() >= std::sqrt(
                pow(getCurrentCoordinates().first - ship->getCurrentCoordinates().first, 2) +
                pow(getCurrentCoordinates().second - ship->getCurrentCoordinates().second, 2))) {
            item->shoot(ship);
        }
    }
    return 0;
}

int Cruiser::recharge() {
    for (auto &item: weapon) {
        if (item->getCurrentAmmunition() <= 0){
            item->recharge(this, item->getIndexActiveAmmunition());
        }
    }
    return 0;
}

int Cruiser::shootPlane(Airplane *airplane) {
    for (auto &item:weapon) {
        if (item->getFiringRange() >= std::sqrt(
                pow(getCurrentCoordinates().first - airplane->getCurrentCoordinates().first, 2) +
                pow(getCurrentCoordinates().second - airplane->getCurrentCoordinates().second, 2))) {
            item->shoot(airplane);
        }
    }
    return 0;
}
