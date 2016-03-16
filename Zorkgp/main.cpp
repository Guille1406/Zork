#include <iostream>
#include <stdio.h>
#include "world.h"


int main(){
	World My_world;
	char sentence[20];
	bool finish = false;
	My_world.Createworld();
	printf("Welcome to my Zork\n                ________$$$$$$$$$$________\n		_____d$$$$$$$$$$$$$b______\n		_____$$$$$$$$$$$$$$$$_____\n		____4$$$$$$$$$$$$$$$$F____\n		____4$$$$$$$$$$$$$$$$F____\n		____$$$$'_'$$$$''$$$$_____\n		_____$$F___4$$F___4$$_____\n		_____´$F___4$$F___4$'_____\n		______$$___$$$$___$P______\n		______4$$$$$'^$$$$$%_____\n		_______$$$$F__4$$$$_______\n		________'$$$ee$$$'________\n		________._*$$$$F4_________\n		_________$_____.$_________\n		_________'$$$$$$'_________\n		__________^$$$$___________\n		_4$$c_______''_______.$$r_\n		_^$$$b______________e$$$_\n		_d$$$$$e__________z$$$$$b_\n		4$$$*$$$$$c____.$$$$$*$$$r\n		_''____^*$$$be$$$*____^'_\n		__________'$$$$'__________\n		________.d$$P$$$b_________\n		_______d$$P___^$$$b_______\n		___.ed$$$'______'$$$be.___\n		_$$$$$$P__________*$$$$$$_\n		4$$$$$P____________$$$$$$\n		_'*$$$'____________^$$P___\n		____''______________^'____	\n\n\n\n	");
	My_world.Help();
	printf("\n You are in %s \n %s \n", My_world.character->pos->name, My_world.character->pos->description);
	do{
		gets_s(sentence, 20);
		My_world.readSentence(sentence);
	} while(strcmp(sentence,"quit")!=0);

	printf("\n\nThanks for play my ZORK, see you soon");
	getchar();
	return 0;
}
	