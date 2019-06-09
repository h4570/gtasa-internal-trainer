#ifndef WEAPON_H
#define WEAPON_H

enum WEAPON_TYPE
{
    PISTOL,
    SHOTGUN,
    SMG,
    RIFLE,
    ASSAULT_RIFLE,
    THROWN_WEAPON,
    ITEMS_1,
    ITEMS_2,
    OTHER
};

WEAPON_TYPE getCurrentWeapon();

#endif