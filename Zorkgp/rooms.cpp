#include <iostream>
#include "rooms.h"
#include "worlds.h"


Room::Room(const char* _name, const char* descrip):Entity(_name, descrip){
	
	name = _name;
	description = descrip;

}
Room::~Room(){}