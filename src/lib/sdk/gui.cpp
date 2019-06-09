#include <string>
#include <iostream>
#include "../utility.h"

using namespace std;

#define SHOWMSG_ADDY 0x588BE0

typedef char(__cdecl *_showMsg)(const char *, int, int, int);
_showMsg showMsg = (_showMsg)SHOWMSG_ADDY;

void showMessage(string msg) { showMsg(msg.c_str(), 0, 0, 0); }