#ifndef OOP3_SHIP_H
#define OOP3_SHIP_H

#include <iostream>
#include "../unit/Unit.h"
#include "../ammunition/ammunition.h"
#include <vector>


class Ship: public Unit {
protected:
    std::string name;
    std::string captainName;
    std::string captainRank;
    int speed;
    int cost;
    std::vector<Ammunition> listAmmunition;
    int maxStockStorage;
public:
    [[nodiscard]] const std::string &getName() const {
        return name;
    }

    [[nodiscard]] const std::string &getCaptainName() const {
        return captainName;
    }

    [[nodiscard]] const std::string &getCaptainRank() const {
        return captainRank;
    }

    [[nodiscard]] int getSpeed() const {
        return speed;
    }

    [[nodiscard]] int getCost() const {
        return cost;
    }

    void setName(const std::string &name) {
        Ship::name = name;
    }

    void setCaptainName(const std::string &captainName) {
        Ship::captainName = captainName;
    }

    void setCaptainRank(const std::string &captainRank) {
        Ship::captainRank = captainRank;
    }

    void setSpeed(int speed) {
        Ship::speed = speed;
    }

    void setCost(int cost) {
        Ship::cost = cost;
    }

    [[nodiscard]] std::vector<Ammunition> &getListAmmunition() {
        return listAmmunition;
    }

    void setListAmmunition(const std::vector<Ammunition> &listAmmunition) {
        Ship::listAmmunition = listAmmunition;
    }

    [[nodiscard]] int getMaxStockStorage() const {
        return maxStockStorage;
    }

    void setMaxStockStorage(int maxStockCapacity) {
        Ship::maxStockStorage = maxStockCapacity;
    }

    void setAmmunition(Ammunition ammunition, int index);

    virtual int getFullCost() = 0;

    void setCoordinate(std::pair<int, int> coordinates);

    int moveShip();

    int amountStorageSpace();

    virtual int doSomething() = 0;
};

#endif
