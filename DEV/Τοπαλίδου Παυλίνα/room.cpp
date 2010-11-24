#include "room.h"
#include <QString>
#include <iostream>

using namespace std;

//default constructor
Room::Room()
{
    id=0;
    type="";
    free=true;
}

//constructor with all class atributes
Room::Room(int i, QString t, bool fr)
{
    id=i;
    type=t;
    free=fr;
}

//-------------------- setter operations ----------------------//
//setId->sets the room id
void Room::setId(int i){
    if (i>=0) //checks if the room id is valid
        id = i;
    else
        cerr << "Invalid room id\nPlease try again. . .\n";
}

//setType->sets the Type of the room
void Room::setType(QString t){
    if (t!=NULL) // checks if the room type is valid
        type = t;
    else
        cerr << "Invalid room type\nPlease try again. . .\n";
}

//setFree->sets the status of the room.(free or not)
void Room::setFree(bool fr){
        free = fr;
}

//-------------- getter operations -----------------------//

//getId-> returns the room id
 int Room::getId(){
    return id;
}

 //getType-> returns the room type
QString   Room::getType(){
    return type;
}

//getFree-> returns the status of the room (free or not)[true/false]
bool Room::getFree(){
    return free;
}

