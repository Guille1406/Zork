#include <iostream>
#include "Exits.h"


Exit::Exit(const char* _name, const char* descr, Room* _destiny, Room* _origin, bool _door, bool _open, dir _mydirection): Entity(_name, descr){
	destiny = _destiny;
	origin = _origin;
	door = _door;
	open = _open;
	mydirection = _mydirection;
}
Exit::~Exit(){
	
}