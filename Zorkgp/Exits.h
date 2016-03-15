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
public:
	
	char description[200];

	Room* origin;
	Room* destiny;
	bool open= true;
	dir mydirection;

	Exit();
	~Exit();
};

#endif