extern int baseAddress;

struct AssaultRifleAmmunitionOffsets
{
    const int magazine = 0x634;
    const int full = 0x638;
};

struct Items2AmmunitionOffsets
{
    const int magazine = 0x6A4;
    const int full = 0x6A8;
};

struct PistolAmmunitionOffsets
{
    const int magazine = 0x5E0;
    const int full = 0x5E4;
};

struct SMGAmmunitionOffsets
{
    const int magazine = 0x618;
    const int full = 0x61C;
};

struct ShotgunAmmunitionOffsets
{
    const int magazine = 0x5FC;
    const int full = 0x600;
};

struct AmmunitionOffsets
{
    const int main = 0x76F3B8;
    const SMGAmmunitionOffsets smg;
    const ShotgunAmmunitionOffsets shotgun;
    const int rifleAmmunitionOffset = 0x654;
    const PistolAmmunitionOffsets pistol;
    const AssaultRifleAmmunitionOffsets assaultRifle;
    const Items2AmmunitionOffsets items2;
    const int items1AmmunitionOffset = 0x670;
    const int thrownWeaponAmmunitionOffset = 0x68C;
};

struct Offsets
{
    const AmmunitionOffsets ammo;
    const int currentWeapon = 0x18F62C;
};

extern struct Offsets OFFSETS;