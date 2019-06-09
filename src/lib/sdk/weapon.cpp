#include <windows.h>
#include "weapon.h"
#include "../offsets.h"
#include "../utility.h"

WEAPON_TYPE getCurrentWeapon()
{
    int *currentWeapon = getAddressValue(OFFSETS.currentWeapon);
    switch (*currentWeapon)
    {
    case 16: // Grenade
        return THROWN_WEAPON;
    case 18: // Molotov
        return THROWN_WEAPON;
    case 22 ... 24: // Pistol, Silencer, Desert eagle
        return PISTOL;
    case 25 ... 27: // Classic rifle, Double rifle, Alien rifle
        return SHOTGUN;
    case 28 ... 29: // Uzi, MP5
        return SMG;
    case 30 ... 31: // AK-47, M4
        return ASSAULT_RIFLE;
    case 32: // Tec-9
        return SMG;
    case 33 ... 34: // Rifle, Sniper rifle
        return RIFLE;
    case 35 ... 37: // RPG, Rocket launcher, Flame thrower
        return ITEMS_1;
    case 39: // Bomb
        return THROWN_WEAPON;
    case 41 ... 42: // Spray, Fire extinguisher
        return ITEMS_2;
    }
    return OTHER;
}