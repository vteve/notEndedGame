#ifndef OOP3_UNIT_H
#define OOP3_UNIT_H

#include <iostream>

class Unit {
public:
    enum class technique{
        airplane, ship
    };
protected:
    int healthPoint;
    technique type;
    bool statusAlive = true;
    std::pair<int, int> currentCoordinates;
    std::pair<int, int> finalCoordinates;
public:
    [[nodiscard]] int getHealthPoint() const {
        return healthPoint;
    }

    void setHealthPoint(int healthPoint) {
        Unit::healthPoint = healthPoint;
    }

    [[nodiscard]] technique getType() const {
        return type;
    }

    void setType(technique type) {
        Unit::type = type;
    }

    [[nodiscard]] bool isStatusAlive() const {
        return statusAlive;
    }

    void setStatusAlive(bool statusAlive) {
        Unit::statusAlive = statusAlive;
    }

    [[nodiscard]] const std::pair<int, int> &getCurrentCoordinates() const {
        return currentCoordinates;
    }

    void setCurrentCoordinates(const std::pair<int, int> &currentCoordinates) {
        Unit::currentCoordinates = currentCoordinates;
    }

    [[nodiscard]] const std::pair<int, int> &getFinalCoordinates() const {
        return finalCoordinates;
    }

    void setFinalCoordinates(const std::pair<int, int> &finalCoordinates) {
        Unit::finalCoordinates = finalCoordinates;
    }

    int takeDamage(int damage);
};


#endif //OOP3_UNIT_H
