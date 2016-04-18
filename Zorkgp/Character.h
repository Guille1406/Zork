#ifndef _CHARACTER
#define _CHARACTER 
#include <iostream>
#include "worlds.h"
#include "Entity.h"
class Character:public Entity{
public:
	Room* pos;
	int storage;
	int hp;
	int attack;
	Character(const char* _name, const char* _description);
	~Character();
};


#endif //_CHARAPTER