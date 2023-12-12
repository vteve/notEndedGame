#ifndef OOP3_CRUISER_H
#define OOP3_CRUISER_H

#include <iostream>
#include <vector>
#include "ship.h"
#include "shipWeapon.h"
#include "../weapon/weapon.h"
#include "../ammunition/ammunition.h"


class Cruiser : public Ship, public ShipWeapon {
public:
    int shootShip(Ship *ship);

    int recharge() override;

    int shootPlane(Airplane *airplane) override;

    int getFullCost() override;

    int doSomething() override;

};

#endif
