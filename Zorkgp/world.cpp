#include <iostream>
#include "rooms.h"
#include "Exits.h"
#include "world.h"
#include <string.h>

using namespace std;
World::World(){
	room = new Room[13];
	exit = new Exit[23];
}
void World::Createworld(){
	
	//Rooms
	
	const char *names[] = { "West Garden", "Entrance of the castle", "East Garden", "Mail room", "Throne room", "Kitchen", "Royal Army", "Army", "Dungeon", "Kings room", "Hall", "Johns room", "Carls room" };
	for (int i = 0; i < 13; i++){
		strcpy_s(room[i].name, names[i]);
	}

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
	for (int i = 0; i < 13; i++){
		strcpy_s(room[i].description,desc[i]);
	}
	//exits;
	
	//exit 0 from West Garden to Entrance of the caste;
	exit[0].origin = room + 0;
	exit[0].destiny = room + 1;
	exit[0].mydirection = east;
	//exit 1 from Entrance of the castle to West Garden;
	exit[1].origin = room + 1;
	exit[1].destiny = room + 0;
	exit[1].mydirection = west;
	//exit 2 from Entrance of the Castle to East Garden;
	exit[2].origin = room + 1;
	exit[2].destiny = room + 2;
	exit[2].mydirection = east;
	//exit 3 from East Garden to Entrance of the Castle;
	exit[3].origin = room + 2;
	exit[3].destiny = room + 1;
	exit[3].mydirection = west;
	///exit 4 from East Garden to Mail room;
	exit[4].origin = room + 2;
	exit[4].destiny = room + 3;
	exit[4].mydirection = east;
	///exit 5 from Mail room to East Garden;
	exit[5].origin = room + 3;
	exit[5].destiny = room + 2;
	exit[6].mydirection = west;
	//exit 6 from Entrance of the Castle to Throne room;
	exit[6].origin = room + 1;
	exit[6].destiny = room + 4;
	exit[6].mydirection = north;
	//exit 7 from Throne room to Entrance of the Castle;
	exit[7].origin = room + 4;
	exit[7].destiny = room + 1;
	exit[7].mydirection = south;
	//exit 8 from Throne room to kitchen;
	exit[8].origin = room + 4;
	exit[8].destiny = room + 5;
	exit[8].mydirection = east;
	//exit 9 from kitchen to Throne room;
	exit[9].origin = room + 5;
	exit[9].destiny = room + 4;
	exit[9].mydirection = west;
	//exit 10 from throne room to Royal army;
	exit[10].origin = room + 4;
	exit[10].destiny = room + 6;
	exit[10].mydirection = west;
	//exit 11 from Royal army to throne room;
	exit[11].origin = room + 6;
	exit[11].destiny = room + 4;
	exit[11].mydirection = east;
	//exit 12 from Royal army to army;
	exit[12].origin = room + 6;
	exit[12].destiny = room + 7;
	exit[12].mydirection = south;
	//exit 13 from army to Royal army;
	exit[13].origin = room + 7;
	exit[13].destiny = room + 6;
	exit[13].mydirection = north;
	//exit 14 from army to Dungeon;
	exit[14].origin = room + 7;
	exit[14].destiny = room + 8;
	exit[14].mydirection = west;
	//exit 15 from Dungeon to army;
	exit[15].origin = room + 8;
	exit[15].destiny = room + 7;
	exit[15].mydirection = east;
	//exit 16 from Throne room from Kings room;
	exit[16].origin = room + 4;
	exit[16].destiny = room + 9;
	exit[16].mydirection = north;
	//exit 17 from Kings room from Throne room;
	exit[17].origin = room + 9;
	exit[17].destiny = room + 4;
	exit[17].mydirection = south;
	//exit 18 from Kings room to Hall;
	exit[18].origin = room + 9;
	exit[18].destiny = room + 10;
	exit[18].mydirection = north;
	exit[18].open = false;
	//exit 19 from Hall to Kings room;
	exit[19].origin = room + 10;
	exit[19].destiny = room + 9;
	exit[19].mydirection = south; 
	exit[19].open = false;
	//exit 20 from Hall to Johns room;
	exit[20].origin = room + 10;
	exit[20].destiny = room + 11;
	exit[20].mydirection = west;
	exit[20].open = false;
	//exit 21 from Johns room to Hall;
	exit[21].origin = room + 11;
	exit[21].destiny = room + 10;
	exit[21].mydirection = east;
	exit[21].open = false;
	//exit22 from Hall to Carls room;

	exit[22].origin = room + 10;
	exit[22].origin = room + 12;
	exit[22].mydirection = west;
	exit[22].open = false;
	//exit 23 from Carls room to Hall;
	exit[23].origin = room + 12;
	exit[23].destiny = room + 10;
	exit[23].mydirection = east;
	exit[23].open = false;

}

void World::MoveCharacter(){
	Help();
	char sentence[20];
	char opera1[10]; 
	char opera2[10];
	char* Counter;
	gets_s(sentence,20);
	opera1 = strtok_s(sentence, " ", &Counter);
}

void World::Help(){
	cout << " To move around the world you can use (n) to north, (s) to South, (e) to East and (w) to West,/n also you can type the word; type 'look' to look around the room or the exits/n to see this message again type 'help'" << endl;
}