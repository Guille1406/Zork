#ifndef _CHARACTER
#define _CHARACTER 
#include <iostream>
#include "rooms.h"

class Character{

	char name[30];
	char description[200];

public:
	Room* Actualroom;

	Character();
	~Character();
};


#endif