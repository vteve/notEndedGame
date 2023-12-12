#include "carrier.h"


int Carrier::getFullCost() {
    int costShip = 0;
    for (auto &item: getPlane()) {
        costShip += item->getWeapon()->getCost();
        costShip += item->getCost();
        costShip += item->getWeapon()->getCurrentAmmunition() *
                    getListAmmunition()[item->getWeapon()->getIndexActiveAmmunition()].getCost();
    }
    for (auto &item: getListAmmunition()) {
        costShip += item.getCost();
    }
    costShip += cost;
    return costShip;
}
