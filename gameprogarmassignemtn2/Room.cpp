#include "Room.h"
#include <iostream>
#include <fstream>
void Room::loadFile(string fileName)
{
    fstream inFile;

    // Open the file for readding
    inFile.open(fileName, ios::in);
    if (!inFile)
    {
        cout << "Cannot open file " << fileName;
        return;
    }

    




}
