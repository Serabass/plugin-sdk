/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CEntity.h"

class CWorld {
public:

    //funcs
    static void Add(CEntity* entity);
    static void Remove(CEntity* entity);
    static float FindGroundZForCoord(float x, float y);
};