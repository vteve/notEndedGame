#include "shipWeapon.h"


int ShipWeapon::setWeapon(Weapon *weap, int index) {
    if (index < 0 || index >= weapon.size()){
        return -1;
    }
    weapon[index] = weap;
    return 0;
}


