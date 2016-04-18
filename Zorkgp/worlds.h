#ifndef _WORLDs
#define _WORLDs
#include <iostream>
#include "Character.h"
#include "Entity.h"
#include "Exits.h"
#include  "My_String.h"
#include "rooms.h"
#include "vector.h"


class World {
public:
	vector <Room*> rooms;
	vector <Exit*> exits;
	
	Character* character;
	void Createworld();

	void readSentence(char opera[]);
	World();
	~World();

	void LookI();
	void Inventory;
	void Go(dir opera);
	void Look(dir opera);
	void Help()const;
	void Pick(Mstr&);
	void drop(Mstr&);
	void Equip(Mstr&);
	void UnEquip(Mstr&);
	void Combinetwo(Mstr&, Mstr&);
	void lookroom();
	void Close(dir opera);
	void Open(dir opera);
	bool quit();

};

#endif //_WORLDs
