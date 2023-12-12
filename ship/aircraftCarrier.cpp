#include "aircraftCarrier.h"
#include <cmath>


int Aircraft::getFullCost() {
    int costShip = 0;
    for (auto &item: plane) {
        costShip += item->getWeapon()->getCost();
        costShip += item->getCost();
        costShip += item->getWeapon()->getCurrentAmmunition() *
                    listAmmunition[item->getWeapon()->getIndexActiveAmmunition()].getCost();
    }
    for (auto &item: getWeapon()) {
        costShip += item->getCost();
        costShip += item->getCurrentAmmunition() * listAmmunition[item->getIndexActiveAmmunition()].getCost();
    }
    for (auto &item: listAmmunition) {
        costShip += item.getCost();
    }
    costShip += cost;
    return costShip;
}

int Aircraft::shootPlane(Airplane *airplane) {
    for (auto &item:weapon) {
        if (item->getFiringRange() >= std::sqrt(
                pow(getCurrentCoordinates().first - airplane->getCurrentCoordinates().first, 2) +
                pow(getCurrentCoordinates().second - airplane->getCurrentCoordinates().second, 2))) {
            item->shoot(airplane);
        }
    }
    return 0;
}

int Aircraft::recharge() {
    for (auto &item: weapon) {
        if (item->getCurrentAmmunition() <= 0){
            item->recharge(this, item->getIndexActiveAmmunition());
        }
    }
    return 0;
}


