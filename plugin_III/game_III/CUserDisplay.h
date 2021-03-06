/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPager.h"
#include "CCurrentVehicle.h"
#include "CPlaceName.h"

class COnscreenTimer;

class CUserDisplay {
public:
    //variables
    static CPager &Pager;
    static CCurrentVehicle &CurrentVehicle;
    static CPlaceName &PlaceName;
    static COnscreenTimer &OnscnTimer;

    //funcs
    static void Init();
    static void Process();
};