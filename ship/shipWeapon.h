#ifndef OOP3_SHIPWEAPON_H
#define OOP3_SHIPWEAPON_H

#include <iostream>
#include <vector>
#include "../ammunition/ammunition.h"
#include "ship.h"
#include "../airplane/airplane.h"


class ShipWeapon {
protected:
    int maxCountWeapon;
    std::vector<Weapon*> weapon;
public:
    [[nodiscard]] int getMaxCountWeapon() const {
        return maxCountWeapon;
    }

    void setMaxCountWeapon(int maxCountWeapon) {
        ShipWeapon::maxCountWeapon = maxCountWeapon;
    }


    [[nodiscard]] std::vector<Weapon *> &getWeapon() {
        return weapon;
    }

    void setWeapon1(const std::vector<Weapon *> &weapon) {
        ShipWeapon::weapon = weapon;
    }

    int setWeapon(Weapon *weap, int index);

    virtual int recharge() = 0;

    virtual int shootPlane(Airplane *airplane) = 0;
};

#endif
