#ifndef OOP3_CARRIER_H
#define OOP3_CARRIER_H

#include <iostream>
#include <vector>
#include "ship.h"
#include "aviaCarrier.h"
#include "../airplane/airplane.h"

class Carrier : public Ship, public AviaCarrier {
public:
    int getFullCost() override;

    int doSomething() override;

};

#endif
