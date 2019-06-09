#include <windows.h>
#include "guard.h"
#include "ammo.h"
#include "../offsets.h"
#include "../utility.h"
#include "../sdk/weapon.h"
#include "../sdk/gui.h"
#include "../../main.h"

bool ammoThreadExited = false;

DWORD *ammoPtr;

void ammoThread(HMODULE hModule)
{
    ammoPtr = (DWORD *)(baseAddress + OFFSETS.ammo.main);
    while (!stop)
    {
        Sleep(100);
        if (!ammoCheatActivated)
            continue;

        int currentWeapon = getCurrentWeapon();
        switch (currentWeapon)
        {
        case PISTOL:
            setPointerValue(ammoPtr, OFFSETS.ammo.pistol.full, 999);
            setPointerValue(ammoPtr, OFFSETS.ammo.pistol.magazine, 17);
        case SHOTGUN:
            setPointerValue(ammoPtr, OFFSETS.ammo.shotgun.full, 999);
            setPointerValue(ammoPtr, OFFSETS.ammo.shotgun.magazine, 7);
        case SMG:
            setPointerValue(ammoPtr, OFFSETS.ammo.smg.full, 999);
            setPointerValue(ammoPtr, OFFSETS.ammo.smg.magazine, 30);
        case RIFLE:
            setPointerValue(ammoPtr, OFFSETS.ammo.rifleAmmunitionOffset, 999);
        case ASSAULT_RIFLE:
            setPointerValue(ammoPtr, OFFSETS.ammo.assaultRifle.full, 999);
            setPointerValue(ammoPtr, OFFSETS.ammo.assaultRifle.magazine, 50);
        case THROWN_WEAPON:
            setPointerValue(ammoPtr, OFFSETS.ammo.thrownWeaponAmmunitionOffset, 9999);
        case ITEMS_1:
            setPointerValue(ammoPtr, OFFSETS.ammo.items1AmmunitionOffset, 9999);
        case ITEMS_2:
            setPointerValue(ammoPtr, OFFSETS.ammo.items2.full, 999);
            setPointerValue(ammoPtr, OFFSETS.ammo.items2.magazine, 500);
        }
    }
    ammoThreadExited = true;
}