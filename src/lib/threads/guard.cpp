#include <windows.h>
#include "../../main.h"
#include "../sdk/gui.h"
#include "ammo.h"

bool stop = false;
bool ammoCheatActivated = false;

void guardThread(HMODULE hModule)
{
    showMessage("H4570 injected");
    while (!stop)
    {
        const bool xIsPressed = GetKeyState('X') & 0x8000;
        const bool zIsPressed = GetKeyState('Z') & 0x8000;
        const bool f5IsPressed = GetKeyState(VK_F5) & 0x8000;
        if (zIsPressed && xIsPressed)
            stop = true;
        if (f5IsPressed)
        {
            ammoCheatActivated = !ammoCheatActivated;
            if (ammoCheatActivated)
                showMessage("Infinite ammo activated");
            else
                showMessage("Infinite ammo deactivated");
            Sleep(500);
        }
        Sleep(100);
    }
    showMessage("H4570 uninjected");
    while (!ammoThreadExited)
        Sleep(10);
    Sleep(200);
    FreeLibraryAndExitThread(hModule, 1);
}
