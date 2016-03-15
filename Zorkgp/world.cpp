#include <iostream>
#include "rooms.h"
#include "Exits.h"
#include "world.h"
#include <string.h>
#include "Character.h"
#define NUM_ROOMS 13
#define NUM_EXITS 23
using namespace std;
World::World(){
	room = new Room[NUM_ROOMS];
	exit = new Exit[NUM_EXITS];  
	character = new Character;
	character->pos = room + 0;
}
void World::Createworld(){
	
	//Rooms
	
	const char *names[] = { "West Garden", "Entrance of the castle", "East Garden", "Mail room", "Throne room", "Kitchen", "Royal Army", "Army", "Dungeon", "Kings room", "Hall", "Johns room", "Carls room" };
	for (int i = 0; i < NUM_ROOMS; i++){
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
	for (int i = 0; i < NUM_ROOMS; i++){
		strcpy_s(room[i].description,desc[i]);
	}



	//exits;
	
	//exit 0 from West Garden to Entrance of the caste;
	strcpy((exit + 0)->description, "You see a bridge with soldiers");
	exit[0].origin = room + 0;
	exit[0].destiny = room + 1;
	exit[0].mydirection = east;
	//exit 1 from Entrance of the castle to West Garden;
	strcpy((exit + 1)->description, "You see a a garden full of flowers");
	exit[1].origin = room + 1;
	exit[1].destiny = room + 0;
	exit[1].mydirection = west;
	//exit 2 from Entrance of the Castle to East Garden;
	strcpy((exit + 2)->description, "You see some trees,amimals and roses");
	exit[2].origin = room + 1;
	exit[2].destiny = room + 2;
	exit[2].mydirection = east;
	//exit 3 from East Garden to Entrance of the Castle;
	strcpy((exit + 3)->description, "You see a bridge with soldiers");
	exit[3].origin = room + 2;
	exit[3].destiny = room + 1;
	exit[3].mydirection = west;
	///exit 4 from East Garden to Mail room;
	strcpy((exit + 4)->description, "a little cabin dools");
	exit[4].origin = room + 2;
	exit[4].destiny = room + 3;
	exit[4].mydirection = east;
	///exit 5 from Mail room to East Garden;
	strcpy((exit + 5)->description, "You see some trees,amimals and roses");
	exit[5].origin = room + 3;
	exit[5].destiny = room + 2;
	exit[5].mydirection = west;
	//exit 6 from Entrance of the Castle to Throne room;
	strcpy((exit + 6)->description, "You see one big Throne with Diamonds and wings");
	exit[6].origin = room + 1;
	exit[6].destiny = room + 4;
	exit[6].mydirection = north;
	//exit 7 from Throne room to Entrance of the Castle;
	strcpy((exit + 7)->description, "You see a bridge with soldiers");
	exit[7].origin = room + 4;
	exit[7].destiny = room + 1;
	exit[7].mydirection = south;
	//exit 8 from Throne room to kitchen;
	strcpy((exit + 8)->description, "you see a kitchen full of food");
	exit[8].origin = room + 4;
	exit[8].destiny = room + 5;
	exit[8].mydirection = east;
	//exit 9 from kitchen to Throne room;
	strcpy((exit + 9)->description, "You see one big Throne with Diamonds and wings");
	exit[9].origin = room + 5;
	exit[9].destiny = room + 4;
	exit[9].mydirection = west;
	//exit 10 from throne room to Royal army;
	strcpy((exit + 10)->description, "You see golden swords, very tall people and shields");
	exit[10].origin = room + 4;
	exit[10].destiny = room + 6;
	exit[10].mydirection = west;
	//exit 11 from Royal army to throne room;
	strcpy((exit + 11)->description, "You see one big Throne with Diamonds and wings");
	exit[11].origin = room + 6;
	exit[11].destiny = room + 4;
	exit[11].mydirection = east;
	//exit 12 from Royal army to army;
	strcpy((exit + 12)->description, "You see some soldiers and wood swords ");
	exit[12].origin = room + 6;
	exit[12].destiny = room + 7;
	exit[12].mydirection = south;
	//exit 13 from army to Royal army;
	strcpy((exit + 13)->description, "You see golden swords, very tall people and shields");
	exit[13].origin = room + 7;
	exit[13].destiny = room + 6;
	exit[13].mydirection = north;
	//exit 14 from army to Dungeon;
	strcpy((exit + 14)->description, "you see a thin man prisoner, rats and webs");
	exit[14].origin = room + 7;
	exit[14].destiny = room + 8;
	exit[14].mydirection = west;
	//exit 15 from Dungeon to army;
	strcpy((exit + 15)->description, "You see some soldiers and wood swords ");
	exit[15].origin = room + 8;
	exit[15].destiny = room + 7;
	exit[15].mydirection = east;
	//exit 16 from Throne room from Kings room;
	strcpy((exit + 16)->description, "you see a very big bed, two mirrors and one table");
	exit[16].origin = room + 4;
	exit[16].destiny = room + 9;
	exit[16].mydirection = north;
	//exit 17 from Kings room from Throne room;
	strcpy((exit + 17)->description, "You see one big Throne with Diamonds and wings");
	exit[17].origin = room + 9;
	exit[17].destiny = room + 4;
	exit[17].mydirection = south;
	//exit 18 from Kings room to Hall;
	strcpy((exit + 18)->description, "a dark passage with a light in the end");
	exit[18].origin = room + 9;
	exit[18].destiny = room + 10;
	exit[18].mydirection = north;
	exit[18].open = false;
	//exit 19 from Hall to Kings room;
	strcpy((exit + 19)->description, "you see a very big bed, two mirrors and one table");
	exit[19].origin = room + 10;
	exit[19].destiny = room + 9;
	exit[19].mydirection = south; 
	exit[19].open = false;
	//exit 20 from Hall to Johns room;
	strcpy((exit + 20)->description, "you see the room of your uncle John");
	exit[20].origin = room + 10;
	exit[20].destiny = room + 11;
	exit[20].mydirection = west;
	exit[20].open = false;
	//exit 21 from Johns room to Hall;
	strcpy((exit + 21)->description, "a dark passage with a light in the end");
	exit[21].origin = room + 11;
	exit[21].destiny = room + 10;
	exit[21].mydirection = east;
	exit[21].open = false;
	//exit22 from Hall to Carls room;
	strcpy((exit + 22)->description, "you see the room of your uncle Carl");
	exit[22].origin = room + 10;
	exit[22].origin = room + 12;
	exit[22].mydirection = west;
	exit[22].open = false;
	//exit 23 from Carls room to Hall;
	strcpy((exit + 21)->description, "a dark passage with a light in the end");
	exit[23].origin = room + 12;
	exit[23].destiny = room + 10;
	exit[23].mydirection = east;
	exit[23].open = false;

}

void World::MoveCharacter(char sentence[]){
	int i = 0;
	int Nwords=0;
	char opera1[10];
	char opera2[10];
	char *Counter;

	while (sentence[i] != '\0'){
		if (sentence[i] == ' ') Nwords++;
		i++;
	}

	if (Nwords == 0){
		strcpy_s(opera1, sentence);
		strcpy_s(opera2, "\0");
	}
	else{
		strcpy_s(opera1, strtok_s(sentence, " ", &Counter));
		strcpy_s(opera1, strtok_s(NULL, " ", &Counter));
	}

	readSentence(opera1, opera2);
}
void World::readSentence(char* opera1, char* opera2){
	if (strcmp(opera1, "north") == 0 || strcmp(opera1, "n") == 0){

	}
	}
	


int World::readDirection(char* sentence){
	if (strcmp(sentence, "north") == 0 || strcmp(sentence, "n")==0 ){
		return 0;
	}
	else if (strcmp(sentence, "south") == 0 || strcmp(sentence, "s") == 0){
		return 1;
}
	else if (strcmp(sentence, "east") == 0 || strcmp(sentence, "e") == 0){
		return 2;
	}
	else if (strcmp(sentence, "west") == 0 || strcmp(sentence, "w") == 0){
		return 3;
	}
		return -1;
	}

	
void World::Go(char opera1[]){
	int direction;
	direction = readDirection(opera1);

	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){
			if (exit[i].mydirection == direction){
				character->pos = exit[i].destiny;
			}
		}
	}
}

void World::Look(char opera1[]){
	int direction;
	direction = readDirection(opera1);

	for (int i = 0; i < NUM_EXITS; i++){
		if (exit[i].origin == character->pos){
			if (exit[i].mydirection == direction){
				character->pos = exit[i].destiny;
			}
		}
	}
}


void World::Help(){
	cout << " To move around the world you can use (n) to north, (s) to South, (e) to East and (w) to West,/n also you can type the word; type 'look' to look around the room or the exits/n to see this message again type 'help'" << endl;
	cout << "“The day is approaching, soon we will purified our lands and get honor to my/n father, I can’t accept one more day the fact of my nephew is a Pevensies.Live long to the marfil crown.”" << endl;
}

