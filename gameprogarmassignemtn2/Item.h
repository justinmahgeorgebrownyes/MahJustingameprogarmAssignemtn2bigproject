#pragma once
#include "Entity.h"
class Item :
    public Entity
{


private:
  //  vector<Item*> m_items;


public: 



    Item() {

    }


    Item(string name, string description)
        : Entity(name, description, "green")
    {

    }




};

