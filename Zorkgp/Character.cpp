#include <iostream>
#include <stdio.h>
#include "rooms.h"
#include "Character.h"
#include "world.h"
#define NUM_EXITS 23


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
		printf( "You cant go there");
	}
}

void World::lookroom(){
	printf("%s", character->pos->description);
}

void World::Look(dir opera1){// to look through the exits selected;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){
			if (exit[i].mydirection == opera1){
				puts(exit[i].description);
				if (exit[i].open == false){
					printf("but this door is closed");
				}

			}
		}
	}
}

void World::Open(dir opera1){// to open doors;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){
			if (exit[i].mydirection == opera1){
				if (exit[i].door == true){
					if (exit[i].open == false){
						exit[i].open == true;
						printf("You have open de door ,yei");
					}
				}
			}
		}
	}
}

void World::Close(dir opera1){ //to close doors;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){
			if (exit[i].mydirection == opera1){

				if (exit[i].door == false){
					printf("there is not doors in this place");
					break;
				}
				else if (exit[i].door == true){
					if (exit[i].open == true){
						exit[i].open = false;
						printf("You have close de door, woho");
					}
				}


			}
		}
	}
}
