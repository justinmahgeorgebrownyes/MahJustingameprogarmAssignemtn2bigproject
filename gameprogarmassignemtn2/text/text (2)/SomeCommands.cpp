#include "SomeCommands.h"
#include "Room.h"


#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector> 

string SomeCommands::getVerb(string line)
{
	auto first_token = line.substr(0, line.find(' '));
	return string(first_token);
}

string SomeCommands::getNoun(string line)
{
	auto second_token = line.substr(1, line.find(' '));
	return string(second_token);
}



void SomeCommands::checkCommand(string linee, Room* currentRoom)
{
	
	std::for_each(linee.begin(), linee.end(), [](char& c) {
	c = ::tolower(c);
		});

	if (linee == "" && )
	{

	}

//	"Enter elevator"

	vector <Room*> connectedRooms= currentRoom->getconnectedRooms();
		
	for (int i = 0; i < connectedRooms.size(); i++)
	{
		string konnectedName = connectedRooms[i]->getName(); 
		vector<string> konnectedRoomVerbss = connectedRooms[i]->getVerbs();


		for (int j = 0; j < konnectedRoomVerbss.size(); j++)
		{
			cout << konnectedRoomVerbss[j] << " " << konnectedName << endl;
		}
		



	}

	vector <Furniture*> containedFurniture = currentRoom->getContainedFurniture();
	for (int i = 0; i < containedFurniture.size(); i++)
	{
		string kontainedFurnitureName = containedFurniture[i]->getName();
		vector<string> kontainedFurnitureVerb = containedFurniture[i]->getVerbs();


		for (int j = 0; j < kontainedFurnitureVerb.size(); j++)
		{
			cout << kontainedFurnitureVerb[j] << " " << kontainedFurnitureName << endl;
		}




	}


	vector <Item*> containedItem = currentRoom->getContainedItem();
	for (int i = 0; i < containedItem.size(); i++)
	{
		string kontainedItemName = containedItem[i]->getName();
		vector<string> kontainedItemVerb = containedItem[i]->getVerbs();


		for (int j = 0; j < kontainedItemVerb.size(); j++)
		{
			cout << kontainedItemVerb[j] << " " << kontainedItemName << endl;
		}




	}


	/*� 
		� Push button
		� Exit elevator
		� Open door
		� Talk tot lceaninrg person
		� Move desk
		� Search desk
		� Search bed
		� Open drawer
		� Enter closet
		� Take hammer
		� Shake iron board
		� Smash closet
		� Smash chair
		� Smash bed
		� Smash tv
		� Smash toilet
		� Smash desk*/


}

