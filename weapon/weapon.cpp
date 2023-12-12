#include <string>
#include "weapon.h"


int LightWeapon::shoot(Unit *enemy) {
    activity = true;
    if (!enemy->isStatusAlive() || currentAmmunition == 0) {
        return -1;
    }
    if (enemy->getType() == Unit::technique::ship) {
        return -1;
    }
    enemy->takeDamage(ammunition[indexActiveAmmunition].getDamage());
    currentAmmunition--;
    return ammunition[indexActiveAmmunition].getDamage();
}

int LightWeapon::recharge(Ship *ship, int newIndexActiveAmm) {
    if (currentAmmunition == maxAmmunition) {
        return -1;
    }
    int countAmm = 0;
    for (const auto &i: ship->getListAmmunition()) {
        countAmm += i.getCount();
    }
    if (countAmm <= 0) {
        return -1;
    }
    ship->getListAmmunition()[indexActiveAmmunition].setCount(
            ship->getListAmmunition()[indexActiveAmmunition].getCount() + currentAmmunition);
    currentAmmunition = 0;
    setIndexActiveAmmunition(newIndexActiveAmm);
    currentAmmunition = std::min(maxAmmunition, ship->getListAmmunition()[indexActiveAmmunition].getCount());
    ship->getListAmmunition()[indexActiveAmmunition].setCount(
            ship->getListAmmunition()[indexActiveAmmunition].getCount() - currentAmmunition);
    return 0;
}

int HeavyWeapon::shoot(Unit *enemy) {
    activity = true;
    if (!enemy->isStatusAlive() || currentAmmunition == 0) {
        return -1;
    }
    enemy->takeDamage(ammunition[indexActiveAmmunition].getDamage());
    currentAmmunition--;
    return ammunition[indexActiveAmmunition].getDamage();
}

int HeavyWeapon::recharge(Ship *ship, int newIndexActiveAmm) {
    if (currentAmmunition == maxAmmunition) {
        return -1;
    }
    int countAmm = 0;
    for (const auto &i: ship->getListAmmunition()) {
        countAmm += i.getCount();
    }
    if (countAmm <= 0) {
        return -1;
    }
    ship->getListAmmunition()[indexActiveAmmunition].setCount(
            ship->getListAmmunition()[indexActiveAmmunition].getCount() + currentAmmunition);
    currentAmmunition = 0;
    setIndexActiveAmmunition(newIndexActiveAmm);
    currentAmmunition = std::min(maxAmmunition, ship->getListAmmunition()[indexActiveAmmunition].getCount());
    ship->getListAmmunition()[indexActiveAmmunition].setCount(
            ship->getListAmmunition()[indexActiveAmmunition].getCount() - currentAmmunition);
    return 0;
}
