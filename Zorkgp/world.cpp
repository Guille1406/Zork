#include <iostream>
#include <stdio.h>
#include "rooms.h"
#include "Exits.h"
#include "world.h"
#include <string.h>
#include "Character.h"
#define NUM_ROOMS 13 //number of rooms created
#define NUM_EXITS 23 //number of exit created

World::World(){
	room = new Room[NUM_ROOMS];
	exit = new Exit[NUM_EXITS];  
	character = new Character;
	character->pos = room + 0;
}

World::~World(){
	delete character;
	delete[]exit;
	delete[]room;


}

void World::Createworld(){
	
	//Rooms
	
	// this 'for' is for introduce the name of the room into the room;
	const char *names[] = { "West Garden", "Entrance of the castle", "East Garden", "Mail room", "Throne room", "Kitchen", "Royal Army", "Army", "Dungeon", "Kings room", "Hall", "Johns room", "Carls room" };
	for (int i = 0; i < NUM_ROOMS; i++){
		strcpy_s(room[i].name, names[i]);
	}
	
	// this 'for' is for introduce the description of the room into the room;
	const char *desc[] = { "A delicate garden full of roses for the queen, castle can be contemplated in all its glory",
		"A Giant Portal with many soldiers armed, in the distance you can see the Throne",
		" A garden with Tall trees, the Queen has her pets around here",
		"The place where the castle sends messages to his kingdom ",
		"An extravagant room where the king leads his people , full of soldiers of the Royal army",
		"where the champions are fed",
		" they protect the Royal Family",
		" they just die for you jaja",
		"the prison of the badest people of the kingdom",
		"the room of your parents",
		" a conection to your uncles room",
		" the room of your uncle cool",
		" the room of your uncle carls, the bored"
	};
	for (int i = 0; i < NUM_ROOMS; i++){
		strcpy_s(room[i].description,desc[i]);
	}



	//exits;
	
	//exit 0 from West Garden to Entrance of the caste;
	strcpy_s((exit + 0)->description, "You see a bridge with soldiers");
	exit[0].origin = room + 0;
	exit[0].destiny = room + 1;
	exit[0].mydirection = east;
	//exit 1 from Entrance of the castle to West Garden;
	strcpy_s((exit + 1)->description, "You see a a garden full of flowers");
	exit[1].origin = room + 1;
	exit[1].destiny = room + 0;
	exit[1].mydirection = west;
	//exit 2 from Entrance of the Castle to East Garden;
	strcpy_s((exit + 2)->description, "You see some trees,amimals and roses");
	exit[2].origin = room + 1;
	exit[2].destiny = room + 2;
	exit[2].mydirection = east;
	//exit 3 from East Garden to Entrance of the Castle;
	strcpy_s((exit + 3)->description, "You see a bridge with soldiers");
	exit[3].origin = room + 2;
	exit[3].destiny = room + 1;
	exit[3].mydirection = west;
	///exit 4 from East Garden to Mail room;
	strcpy_s((exit + 4)->description, "a little cabin dools");
	exit[4].origin = room + 2;
	exit[4].destiny = room + 3;
	exit[4].mydirection = east;
	///exit 5 from Mail room to East Garden;
	strcpy_s((exit + 5)->description, "You see some trees,amimals and roses");
	exit[5].origin = room + 3;
	exit[5].destiny = room + 2;
	exit[5].mydirection = west;
	//exit 6 from Entrance of the Castle to Throne room;
	strcpy_s((exit + 6)->description, "You see one big Throne with Diamonds and wings");
	exit[6].origin = room + 1;
	exit[6].destiny = room + 4;
	exit[6].mydirection = north;
	//exit 7 from Throne room to Entrance of the Castle;
	strcpy_s((exit + 7)->description, "You see a bridge with soldiers");
	exit[7].origin = room + 4;
	exit[7].destiny = room + 1;
	exit[7].mydirection = south;
	//exit 8 from Throne room to kitchen;
	strcpy_s((exit + 8)->description, "you see a kitchen full of food");
	exit[8].origin = room + 4;
	exit[8].destiny = room + 5;
	exit[8].mydirection = east;
	//exit 9 from kitchen to Throne room;
	strcpy_s((exit + 9)->description, "You see one big Throne with Diamonds and wings");
	exit[9].origin = room + 5;
	exit[9].destiny = room + 4;
	exit[9].mydirection = west;
	//exit 10 from throne room to Royal army;
	strcpy_s((exit + 10)->description, "You see golden swords, very tall people and shields");
	exit[10].origin = room + 4;
	exit[10].destiny = room + 6;
	exit[10].mydirection = west;
	//exit 11 from Royal army to throne room;
	strcpy_s((exit + 11)->description, "You see one big Throne with Diamonds and wings");
	exit[11].origin = room + 6;
	exit[11].destiny = room + 4;
	exit[11].mydirection = east;
	//exit 12 from Royal army to army;
	strcpy_s((exit + 12)->description, "You see some soldiers and wood swords ");
	exit[12].origin = room + 6;
	exit[12].destiny = room + 7;
	exit[12].mydirection = south;
	//exit 13 from army to Royal army;
	strcpy_s((exit + 13)->description, "You see golden swords, very tall people and shields");
	exit[13].origin = room + 7;
	exit[13].destiny = room + 6;
	exit[13].mydirection = north;
	//exit 14 from army to Dungeon;
	strcpy_s((exit + 14)->description, "you see a thin man prisoner, rats and webs");
	exit[14].origin = room + 7;
	exit[14].destiny = room + 8;
	exit[14].mydirection = west;
	//exit 15 from Dungeon to army;
	strcpy_s((exit + 15)->description, "You see some soldiers and wood swords ");
	exit[15].origin = room + 8;
	exit[15].destiny = room + 7;
	exit[15].mydirection = east;
	//exit 16 from Throne room from Kings room;
	strcpy_s((exit + 16)->description, "you see a very big bed, two mirrors and one table");
	exit[16].origin = room + 4;
	exit[16].destiny = room + 9;
	exit[16].mydirection = north;
	//exit 17 from Kings room from Throne room;
	strcpy_s((exit + 17)->description, "You see one big Throne with Diamonds and wings");
	exit[17].origin = room + 9;
	exit[17].destiny = room + 4;
	exit[17].mydirection = south;
	//exit 18 from Kings room to Hall;
	strcpy_s((exit + 18)->description, "a dark passage with a light in the end");
	exit[18].origin = room + 9;
	exit[18].destiny = room + 10;
	exit[18].mydirection = north;
	exit[18].open = false;
	exit[18].door = true;
	//exit 19 from Hall to Kings room;
	strcpy_s((exit + 19)->description, "you see a very big bed, two mirrors and one table");
	exit[19].origin = room + 10;
	exit[19].destiny = room + 9;
	exit[19].mydirection = south; 
	exit[19].open = false;
	exit[19].door = true;
	//exit 20 from Hall to Johns room;
	strcpy_s((exit + 20)->description, "you see the room of your uncle John");
	exit[20].origin = room + 10;
	exit[20].destiny = room + 11;
	exit[20].mydirection = west;
	exit[20].open = false;
	exit[20].door = true;
	//exit 21 from Johns room to Hall;
	strcpy_s((exit + 21)->description, "a dark passage with a light in the end");
	exit[21].origin = room + 11;
	exit[21].destiny = room + 10;
	exit[21].mydirection = east;
	exit[21].open = false;
	exit[21].door = true;
	//exit22 from Hall to Carls room;
	strcpy_s((exit + 22)->description, "you see the room of your uncle Carl");
	exit[22].origin = room + 10;
	exit[22].destiny = room + 12;
	exit[22].mydirection = east;
	exit[22].open = false;
	exit[22].door = true;
	//exit 23 from Carls room to Hall;
	strcpy_s((exit + 21)->description, "a dark passage with a light in the end");
	exit[23].origin = room + 12;
	exit[23].destiny = room + 10;
	exit[23].mydirection = west;
	exit[23].open = false;
	exit[23].door = true;

}


void World::readSentence(char* opera1){//to read the sentence typed by the user (already fragmented)
	if (strcmp(opera1, "north") == 0 || strcmp(opera1, "n") == 0){
		Go(north);
		return;
	}
	if (strcmp(opera1, "south") == 0 || strcmp(opera1, "s") == 0){
		Go(south);
		return;
	}
	if (strcmp(opera1, "east") == 0 || strcmp(opera1, "e") == 0){
		Go(east);
		return;
	}
	if (strcmp(opera1, "west") == 0 || strcmp(opera1, "w") == 0){
		Go(west);
		return;
	}
	if (strcmp(opera1, "go north") == 0 || strcmp(opera1, "g n") == 0){
		Go(north);
		return;
	}
	if (strcmp(opera1, "go south") == 0 || strcmp(opera1, "g s") == 0){
		Go(south);
		return;
	}
	if (strcmp(opera1, "go east") == 0 || strcmp(opera1, "g e") == 0){
		Go(east);
		return;
	}
	if (strcmp(opera1, "go west") == 0 || strcmp(opera1, "g w") == 0){
		Go(west);
		return;
	}
	if (strcmp(opera1, "look") == 0 || strcmp(opera1, "l") == 0){
		lookroom();
		return;
	}
	if (strcmp(opera1, "look north") == 0 || strcmp(opera1, "l n") == 0){
		Look(north);
		return;
	}
	if (strcmp(opera1, "look south") == 0 || strcmp(opera1, "l s") == 0){
		Look(south);
		return;
	}
	if (strcmp(opera1, "look east") == 0 || strcmp(opera1, "l e") == 0){
		Look(east);
		return;
	}
	if (strcmp(opera1, "look west") == 0 || strcmp(opera1, "l w") == 0){
		Look(west);
		return;
	}
	if (strcmp(opera1, "close north") == 0 || strcmp(opera1, "c n") == 0){
		Close(north);
		return;
	}
	if (strcmp(opera1, "close south") == 0 || strcmp(opera1, "c s") == 0){
		Close(south);
		return;
	}
	if (strcmp(opera1, "close east") == 0 || strcmp(opera1, "c e") == 0){
		Close(east);
		return;
	}
	if (strcmp(opera1, "close west") == 0 || strcmp(opera1, "c w") == 0){
		Close(west);
		return;
	}
	if (strcmp(opera1, "open north") == 0 || strcmp(opera1, "o n") == 0){
		Open(north);
		return;
	}
	if (strcmp(opera1, "open south") == 0 || strcmp(opera1, "o s") == 0){
		Open(south);
		return;
	}
	if (strcmp(opera1, "open west") == 0 || strcmp(opera1, "o w") == 0){
		Open(west);
		return;
	}
	if (strcmp(opera1, "open east") == 0 || strcmp(opera1, "o e") == 0){
		Open(east);
		return;
	}
	if (strcmp(opera1, "help") == 0 || strcmp(opera1, "h") == 0){
		Help();
		return;
	}

}
	




	


void World::Help(){
	printf(" To move around the world you can use (n) to north,\n (s) to South, (e) to East and (w) to West,\n also you can type the word \nor type go first; type 'look' following of a direction to look \naround the room or the exits.You can also open and close doors with the coomand \n'open' or 'close' following by the direction, to quit the game \npress 'quit' or 'q' to see this message again type 'help'\n\n");
	printf("“The day is approaching, soon we will purified our \nlands and get honor to my father, I can’t\n accept one more day the fact of my nephew is a \nPevensies.Live long to the marfil crown.”  You are a prince, and one of yor uncles wants \nto kill your parents, you need to find who is the bad one");
}




