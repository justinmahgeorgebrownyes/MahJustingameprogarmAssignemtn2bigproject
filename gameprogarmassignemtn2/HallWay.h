#pragma once
#include "Room.h"
class HallWay :
    public Room
{

    HallWay() {

    }

    HallWay(string name, string description, string detailed_description, vector<string> rooms, vector<string> entities, string content_description)
        : Room(name, description, detailed_description, rooms, entities, content_description)
    {

    }
};

