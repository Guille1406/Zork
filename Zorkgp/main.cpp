#include <iostream>
#include <stdio.h>
#include "world.h"


int main(){
	World My_world;
	char sentence[20];
	My_world.Createworld();
	printf("Welcome to my Zork");
	printf("The day is approaching, soon we will purified our lands and get honor to my\n father, I cant accept  one more day the fact that my nephew is a Pevensies.\nLive long to the marfil crown.");
	printf("\n You are in %s /n %s ", My_world.character->pos->name,My_world.character->pos->description);
	do{
		gets_s(sentence, 20);
		My_world.readSentence(sentence);
	} while(sentence != "quit");

	My_world.~World();
	return 0;
}
	