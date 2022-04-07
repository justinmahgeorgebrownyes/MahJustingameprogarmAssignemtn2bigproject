#pragma once
#include "Item.h"
class MasterKey :
    public Item
{

private:
    

public:

    MasterKey(){}

    MasterKey(string name, string description, bool inventory)
        : Item(name, description, inventory)
    {

    }

};

