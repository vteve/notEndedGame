#ifndef OOP3_AIRPLANE_H
#define OOP3_AIRPLANE_H

#include <iostream>
#include "../unit/Unit.h"
#include "../weapon/weapon.h"


class Airplane : public Unit {
public:
    enum class typeAirplane {
        fighter, stormtrooper
    };
protected:
    typeAirplane typePlane;
//    int damage;
    bool activity;
    int fuelConsumption;
    double fuelVolume;
    int speedRecharge;
    int speedRefueling;
    int speed;
    int cost;
    Weapon *weapon;
public:
    [[nodiscard]] typeAirplane getTypePlane() const {
        return typePlane;
    }

    [[nodiscard]] bool isActivity() const {
        return activity;
    }

    [[nodiscard]] int getFuelConsumption() const {
        return fuelConsumption;
    }

    [[nodiscard]] double getFuelVolume() const {
        return fuelVolume;
    }

    [[nodiscard]] int getSpeedRecharge() const {
        return speedRecharge;
    }

    [[nodiscard]] int getSpeedRefueling() const {
        return speedRefueling;
    }

    [[nodiscard]] int getSpeed() const {
        return speed;
    }

    [[nodiscard]] int getCost() const {
        return cost;
    }

    void setTypePlane(typeAirplane typePlane) {
        Airplane::typePlane = typePlane;
    }

    void setActivity(bool activity) {
        Airplane::activity = activity;
    }

    void setFuelConsumption(int fuelConsumption) {
        Airplane::fuelConsumption = fuelConsumption;
    }

    void setFuelVolume(double fuelVolume) {
        Airplane::fuelVolume = fuelVolume;
    }

    void setSpeedRecharge(int speedRecharge) {
        Airplane::speedRecharge = speedRecharge;
    }

    void setSpeedRefueling(int speedRefueling) {
        Airplane::speedRefueling = speedRefueling;
    }

    void setSpeed(int speed) {
        Airplane::speed = speed;
    }

    void setCost(int cost) {
        Airplane::cost = cost;
    }

    [[nodiscard]] Weapon *getWeapon() const {
        return weapon;
    }

    void setWeapon(Weapon *weapon) {
        Airplane::weapon = weapon;
    }

    [[nodiscard]] double getRadiusFly() const;

    virtual int makeRaid(Unit *enemy) = 0;

    int goToShip(Ship *ship);
};

class Fighter : public Airplane {
public:
    int makeRaid(Unit *enemy) override;
};

class Stormtrooper : public Airplane {
public:
    int makeRaid(Unit *enemy) override;
};

#endif
