#ifndef _EXITS
#define _EXITS

#include <iostream>
#include "rooms.h"
#include "worlds.h"
	enum dir{
		north,
		south,
		east,
		west
	};
class Exit: public Entity{
public:
	
	

	Room* origin;
	Room* destiny;
	bool open= true;
	bool door = false;
	dir mydirection;

	Exit(const char* _name, const char* _descrip, Room* _destiny, Room* _origin, bool _open, bool _door,dir  _direction);
	~Exit();
};

#endif