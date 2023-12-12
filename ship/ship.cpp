#include "ship.h"


int Ship::moveShip() {
    currentCoordinates = finalCoordinates;
    return 0;
}

void Ship::setCoordinate(std::pair<int, int> coordinates) {
    finalCoordinates = coordinates;
}

int Ship::amountStorageSpace() {
    int freeSpace = maxStockStorage;
    for (auto &item: listAmmunition) {
        freeSpace -= item.getCount();
    }
    return freeSpace;
}

void Ship::setAmmunition(Ammunition ammunition, int index) {
    listAmmunition[index] = std::move(ammunition);
}

