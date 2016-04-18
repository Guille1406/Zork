#ifndef _ROOMS
#define _ROOMS
#include <iostream>
#include "Entity.h"

class  Room: public Entity{
public:

	Room(const char* _name, const char* _descrip );
	~Room();
};

#endif //_ROOMS