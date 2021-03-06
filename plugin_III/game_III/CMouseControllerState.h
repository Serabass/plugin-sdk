/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"

class CMousePointerStateHelper {
public:
    int GetMouseSetUp();
};

#pragma pack(push, 1)
class CMouseControllerState {
public:
    unsigned char lmb;
    unsigned char rmb;
    unsigned char mmb;
    unsigned char wheelUp;
    unsigned char wheelDown;
    unsigned char bmx1;
    unsigned char bmx2;
    char _pad7;
    float X;
    float Y;

    //funcs
    CMouseControllerState();
    void Clear();
};
#pragma pack(pop)

VALIDATE_SIZE(CMouseControllerState, 0x10);