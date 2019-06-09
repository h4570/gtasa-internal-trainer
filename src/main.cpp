#include <windows.h>
#include <iostream>
#include <string>
#include "lib/threads/guard.h"
#include "lib/threads/ammo.h"

using namespace std;

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)guardThread, hModule, 0, NULL);
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ammoThread, hModule, 0, NULL);
    }
    return 1;
}
