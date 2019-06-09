#include <windows.h>
#include "offsets.h"

int baseAddress = (uintptr_t)GetModuleHandle(TEXT("gta_sa.exe"));
Offsets OFFSETS;
