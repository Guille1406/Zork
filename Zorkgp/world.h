#ifndef _WORLD
#define _WORLD
#define NUM_ROOMS  13;
#include <iostream>
#include "rooms.h"
#include "Exits.h"




class World {
public:
	Room* room ;
	Exit* exit ;

	void Createworld();
	void MoveCharacter();

	World();

	void Go();
	void Look();
	void Help();
	
};

#endif