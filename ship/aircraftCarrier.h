#ifndef OOP3_AIRCRAFTCARRIER_H
#define OOP3_AIRCRAFTCARRIER_H

#include <iostream>
#include <vector>
#include "ship.h"
#include "shipWeapon.h"
#include "../weapon/weapon.h"
#include "../ammunition/ammunition.h"
#include "aviaCarrier.h"

class Aircraft : public Ship, public ShipWeapon, public AviaCarrier {
public:
    int getFullCost() override;

    int recharge() override;

    int shootPlane(Airplane *airplane) override;

    int doSomething() override;

};


#endif
