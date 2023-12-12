#include "Unit.h"

int Unit::takeDamage(int damage) {
    healthPoint -= damage;
    if (healthPoint <= 0) {
        statusAlive = false;
    }
    return healthPoint;
}