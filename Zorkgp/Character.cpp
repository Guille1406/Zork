#include <iostream>
#include <stdio.h>
#include "rooms.h"
#include "Character.h"
#include "world.h"
#define NUM_EXITS 23
using namespace std;

Character::Character(){

}

Character::~Character(){

}

void World::Go(dir opera1){// to move the character.
	int direction;
	direction = opera1;
	bool flags1 = true;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){

			if (exit[i].mydirection == direction){
				
				if (exit[i].open == false){
					printf(" this door is closed, try to open it" );
					break;
				}
				else {
					character->pos = exit[i].destiny;
					printf("\n You are in  \n  ");
					puts(character->pos->name);
					puts(character->pos->description);
					flags1 = false;
					break;
				}
			}

		}
	}

	if (flags1 == true) {
		cout << "You cant go there" << endl;
	}
}