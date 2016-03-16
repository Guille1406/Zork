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
	
	void readSentence(char opera[]);
	World();
	~World();

	void Go(dir opera);
	void Look(dir opera);
	void Help();
	void lookroom();
	void Close(dir opera);
	void Open(dir opera);
	bool quit();

};

#endif //_WORLD