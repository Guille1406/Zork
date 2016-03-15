#ifndef _WORLD
#define _WORLD
#define NUM_ROOMS  13;
#include <iostream>
#include "rooms.h"
#include "Exits.h"
#include "Character.h"




class World {
public:
	Room* room ;
	Exit* exit ;
	Character* character;
	void Createworld();
	void MoveCharacter(char sentence[]);

	World();

	void Go();
	void Look();
	void Help();
	
};

#endif