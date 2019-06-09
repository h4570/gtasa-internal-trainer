#include <windows.h>

#ifndef AMMO_H
#define AMMO_H

extern bool ammoThreadExited;

extern DWORD *ammoPtr;

void ammoThread(HMODULE hModule);

#endif