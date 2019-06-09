#include <windows.h>

#ifndef GUARD_H
#define GUARD_H

extern bool stop;

void guardThread(HMODULE hModule);

extern bool ammoCheatActivated;

#endif