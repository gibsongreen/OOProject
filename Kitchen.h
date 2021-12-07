#pragma once
#include "Refridgerator.h"
#include "Freezer.h"
#include "Pantry.h"
#include "CannedGoods.h"
#include "SpiceDrawer.h"

class Kitchen
{
public:
    Kitchen();
    Refridgerator fridge;
    Freezer freezer;
    Pantry pantry;
    CannedGoods cannedgoods;
    SpiceDrawer spicedrawer;
    //void SetNewUserData();
};