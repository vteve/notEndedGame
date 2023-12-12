#ifndef OOP3_AVIACARRIER_H
#define OOP3_AVIACARRIER_H

#include "../airplane/airplane.h"

class AviaCarrier {
protected:
    int maxCountPlane;
    std::vector<Airplane *> plane;
public:
    [[nodiscard]] int getMaxCountPlane() const {
        return maxCountPlane;
    }

    void setMaxCountPlane(int maxCountPlane) {
        AviaCarrier::maxCountPlane = maxCountPlane;
    }

    [[nodiscard]] std::vector<Airplane *> &getPlane() {
        return plane;
    }

    void setPlane1(const std::vector<Airplane *> &plane) {
        AviaCarrier::plane = plane;
    }

    int setPlane(Airplane *airplane, int index);

    int takeDestructionFighter(Airplane *airplane);

    int takeDestructionStormtrooper(Ship *ship);
};


#endif
