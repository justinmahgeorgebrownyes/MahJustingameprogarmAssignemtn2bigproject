#pragma once
#include "Entity.h"
class Player :
    public Entity
{


public:

    Player(string name, string description, string detailed_description, vector<Room*> rooms, vector<Furniture*> furniture, vector<Item*> items, string content_description)
        : Entity(name, description, "red"), m_detailedDescription(detailed_description), m_connectedRooms(rooms), m_furniture(furniture), m_items(items), m_contentDescription(content_description)
    {

    }








};

