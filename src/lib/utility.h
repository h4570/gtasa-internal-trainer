#include <string>
#include <windows.h>

using namespace std;

#ifndef UTILITY_H
#define UTILITY_H

void setPointerValue(DWORD *pointer, int offset, int value);

int *getAddressValue(int offset);

#endif