#include "airplane.h"
#include <cmath>


double Airplane::getRadiusFly() const {
    return speed * fuelVolume / fuelConsumption;
}

int Airplane::goToShip(Ship *ship) {
    if (getRadiusFly() < std::sqrt(pow(ship->getCurrentCoordinates().first - currentCoordinates.first, 2) +
                  pow(ship->getCurrentCoordinates().first - currentCoordinates.second,
                      2))){
        return -1;
    }
    currentCoordinates = ship->getCurrentCoordinates();
    activity = false;
    return 0;
}


int Fighter::makeRaid(Unit *enemy) {
    double distance;
    if (enemy->getType() != Unit::technique::airplane ||
        getRadiusFly() < (distance = std::sqrt(pow(enemy->getCurrentCoordinates().first - currentCoordinates.first, 2) +
                                               pow(enemy->getCurrentCoordinates().first - currentCoordinates.second,
                                                   2)))) {
        return -1;
    }
    activity = true;
    currentCoordinates = enemy->getCurrentCoordinates(); ///////////можно ли так?
    while (enemy->getHealthPoint() >= 0 || getWeapon()->getCurrentAmmunition() > 0) {
        getWeapon()->shoot(enemy);
    }
    fuelVolume -= distance / speed * fuelConsumption;
    return 0;
}

int Stormtrooper::makeRaid(Unit *enemy) {
    double distance;
    if (getRadiusFly() < (distance = std::sqrt(pow(enemy->getCurrentCoordinates().first - currentCoordinates.first, 2) +
                                               pow(enemy->getCurrentCoordinates().first - currentCoordinates.second,
                                                   2)))) {
        return -1;
    }
    activity = true;
    currentCoordinates = enemy->getCurrentCoordinates(); ///////////можно ли так?
    while (enemy->getHealthPoint() >= 0 || getWeapon()->getCurrentAmmunition() > 0) {
        getWeapon()->shoot(enemy);
    }
    fuelVolume -= distance / speed * fuelConsumption;
    return 0;
}
