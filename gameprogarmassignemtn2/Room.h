#pragma once


#include <vector>
#include <string>
#include "Entity.h"
#include "Item.h"
#include "Furniture.h"
using namespace std;
class Room :
    public Entity
{

/*
  Name e.g.“Elevator”
        ● A list of 1 or more Connected Rooms e.g.“Lobby”
        ● A number of Entities in the room e.g.“Button Panel, Document”
        ● Description e.g.“An Elevator.”
        ● Detailed description E.g.“The Elevator is cleanand neat, with reflective
        steel bracketing wood laminate paneling engraved with the Corporation
        logo : A letter ‘C’ with an Eye in it”
        ● Description of contents, procedurally generated based on the basic descriptions of all
        Entities insideand connected rooms e.g.“There is a Button Panel with buttons
        on it for floors B1 to 12—No number 13. There is a piece of a
        photocopied Document on the floor.This Room is connected to : Lobby”

*/

private:
    string m_detailedDescription;
    vector<Room*> m_connectedRooms;
    vector<Furniture*> m_furniture;
    vector<Item*> m_items;
    string m_contentDescription;

public:

    Room();
    

    Room(string name, string description, string detailed_description, vector<Room*> rooms, vector<Furniture*> furniture, vector<Item*> items, string content_description)
        : Entity(name, description, "red"), m_detailedDescription(detailed_description), m_connectedRooms(rooms), m_furniture(furniture), m_items(items), m_contentDescription(content_description)
    {
        
    }


    void loadFile(string fileName);

};

