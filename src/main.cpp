#include <iostream>
#include "include/weapon.h"
#include <string>

int main()
{
    Weapon myWeapon = Weapon("Gun");
    int test = 0;

    myWeapon.Collect();
    myWeapon.Drop();
    myWeapon.DealDamage(20);
    myWeapon.Break();
    myWeapon.Upgrade();
}