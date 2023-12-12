#ifndef OOP3_WEAPON_H
#define OOP3_WEAPON_H

#include <iostream>
#include "../ammunition/ammunition.h"
#include "../ship/ship.h"
#include "vector"
#include "../unit/Unit.h"
#include "../ship/shipWeapon.h"

class Weapon {
public:
    enum class typeGun {
        lightWeapon, heavyWeapon
    };
protected:
    static const std::vector<Ammunition> ammunition;
    std::string name;
    typeGun typeWeapon;
    std::vector<std::string> nameAmmunition;
    int indexActiveAmmunition;
    bool activity;
//    int damage;
    int firingRange;
    int rateFire;
    int maxAmmunition;
    int currentAmmunition;
    int speedRecharge;
    int cost;
public:
//    static const std::vector<Ammunition> &getAmmunition() {
//        return ammunition;
//    }
//
//    static void setAmmunition(const std::vector<Ammunition> &ammunition) {
//        Weapon::ammunition = ammunition;
//    }

    [[nodiscard]] const std::string &getName() const {
        return name;
    }

    [[nodiscard]] typeGun getTypeWeapon() const {
        return typeWeapon;
    }

    [[nodiscard]] std::vector<std::string> getNameAmmunition() const {
        return nameAmmunition;
    }

    [[nodiscard]] bool isActivity() const {
        return activity;
    }

//    [[nodiscard]] int getDamage() const {
//        return damage;
//    }

    [[nodiscard]] int getFiringRange() const {
        return firingRange;
    }

    [[nodiscard]] int getRateFire() const {
        return rateFire;
    }

    [[nodiscard]] int getMaxAmmunition() const {
        return maxAmmunition;
    }

    [[nodiscard]] int getCurrentAmmunition() const {
        return currentAmmunition;
    }

    [[nodiscard]] int getSpeedRecharge() const {
        return speedRecharge;
    }

    [[nodiscard]] int getCost() const {
        return cost;
    }

    [[nodiscard]] int getIndexActiveAmmunition() const {
        return indexActiveAmmunition;
    }

    void setName(const std::string &name) {
        Weapon::name = name;
    }

    void setTypeWeapon(typeGun typeWeapon) {
        Weapon::typeWeapon = typeWeapon;
    }

    void setNameAmmunition(std::vector<std::string> nameAmmunition) {
        Weapon::nameAmmunition = nameAmmunition;
    }

    void setActivity(bool activity) {
        Weapon::activity = activity;
    }

//    void setDamage(int damage) {
//        Weapon::damage = damage;
//    }

    void setFiringRange(int firingRange) {
        Weapon::firingRange = firingRange;
    }

    void setRateFire(int rateFire) {
        Weapon::rateFire = rateFire;
    }

    void setMaxAmmunition(int maxAmmunition) {
        Weapon::maxAmmunition = maxAmmunition;
    }

    void setCurrentAmmunition(int currentAmmunition) {
        Weapon::currentAmmunition = currentAmmunition;
    }

    void setSpeedRecharge(int speedRecharge) {
        Weapon::speedRecharge = speedRecharge;
    }

    void setCost(int cost) {
        Weapon::cost = cost;
    }

    void setIndexActiveAmmunition(int indexActiveAmmunition) {
        Weapon::indexActiveAmmunition = indexActiveAmmunition;
    }

    virtual int shoot(Unit *enemy) = 0;

    virtual int recharge(Ship *ship, int newIndexActiveAmm) = 0;
};

class LightWeapon : public Weapon {
public:
    int shoot(Unit *enemy) override;

    int recharge(Ship *ship, int newIndexActiveAmm) override;
};

class HeavyWeapon : public Weapon {
public:
    int shoot(Unit *) override;

    int recharge(Ship *ship, int newIndexActiveAmm) override;
};

#endif
