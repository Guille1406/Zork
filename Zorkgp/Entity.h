#ifndef _ENTITY
#define _ENTITY
#include  "worlds.h"
#include "My_String.h"

class Entity
{
public:
	Mstr name;
	Mstr description;

	Entity(const char* _name, const char* descrip);
};

#endif