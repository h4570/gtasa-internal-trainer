#include "offsets.h"
#include <windows.h>
#include <string>

using namespace std;

void setPointerValue(DWORD *pointer, int offset, int value)
{
    int *address = (int *)(*pointer + offset);
    *address = value;
}

int *getAddressValue(int offset)
{
    DWORD *address = (DWORD *)(baseAddress + offset);
    return (int *)(*address);
}