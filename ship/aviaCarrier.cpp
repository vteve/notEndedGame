#include "aviaCarrier.h"

int AviaCarrier::setPlane(Airplane *airplane, int index) {
    if (index < 0 || index >= plane.size()){
        return -1;
    }
    plane[index] = airplane;
    return 0;
}

int AviaCarrier::takeDestructionFighter(Airplane *airplane) {
    for (auto &item: plane) {
        item->makeRaid(airplane);
    }
}

int AviaCarrier::takeDestructionStormtrooper(Ship *ship) {
    for (auto &item: plane) {
        item->makeRaid(ship);
    }
}


