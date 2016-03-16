#include <iostream>
#include <stdio.h>
#include "world.h"


int main(){
	World My_world;
	char sentence[20];
	bool finish = false;
	My_world.Createworld();
	printf("Welcome to my Zork");
	My_world.Help();
	printf("\n You are in %s \n %s \n", My_world.character->pos->name, My_world.character->pos->description);
	do{
		gets_s(sentence, 20);
		My_world.readSentence(sentence);
	} while(strcmp(sentence,"quit")!=0);

	printf("\n\nThanks for play my ZORk, see you soon");
	getchar();
	return 0;
}
	