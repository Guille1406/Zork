#include <iostream>
#include <stdio.h>
#include "world.h"

using namespace std;
int main(){
	World My_world;
	char sentence[20];
	My_world.Createworld();
	cout << "Welcome to my Zork" << endl;
	cout << "“The day is approaching, soon we will purified our lands and get honor to my\n father, I cant accept  one more day the fact that my nephew is a Pevensies.\nLive long to the marfil crown.”" << endl;
	cout << "You are in " << My_world.character->pos->name<<"\n" << My_world.character->pos->description << endl;
	do{
		gets_s(sentence, 20);
		My_world.MoveCharacter(sentence);
	} while(sentence != "quit");

	My_world.~World();
	return 0;
}
	