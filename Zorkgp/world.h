#ifndef _WORLD
#define _WORLD
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
	void readSentence(char opera1[], char opera2[]);
	int readDirection(char opera1[]);
	World();

	void Go(char opera1[]);
	void Look(char opera1[]);
	void Help();
	
};

#endif