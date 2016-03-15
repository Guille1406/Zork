#ifndef _EXITS
#define _EXITS

#include <iostream>
#include "rooms.h"
	enum dir{
		north,
		south,
		east,
		west
	};
class Exit{
private: 
	char name;
	char description;
public:
	Room* origin;
	Room* destiny;
	bool open= true;
	dir mydirection;

	Exit();
	~Exit();
};

#endif