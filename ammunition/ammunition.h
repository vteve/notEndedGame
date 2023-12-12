//
// Created by Alexander on 29.11.2023.
//

#ifndef OOP3_AMMUNITION_H
#define OOP3_AMMUNITION_H

#include <iostream>

class Ammunition {
private:
    int cost;
    std::string name;
    int size;
    int count;
    int damage;
public:
    [[nodiscard]] int getCost() const {
        return cost;
    }

    [[nodiscard]] std::string getName() const {
        return name;
    }

    [[nodiscard]] int getSize() const {
        return size;
    }

    [[nodiscard]] int getCount() const {
        return count;
    }

    [[nodiscard]] int getDamage() const {
        return damage;
    }

    void setCost(int cost) {
        Ammunition::cost = cost;
    }

    void setName(const std::string &name) {
        Ammunition::name = name;
    }

    void setSize(int size) {
        Ammunition::size = size;
    }

    void setCount(int count) {
        Ammunition::count = count;
    }

    void setDamage(int damage) {
        Ammunition::damage = damage;
    }

};

#endif
