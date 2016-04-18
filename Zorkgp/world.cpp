#include <iostream>
#include <stdio.h>
#include "rooms.h"
#include "Exits.h"
#include "worlds.h"
#include "Character.h"
#define NUM_ROOMS 13 //number of rooms created
#define NUM_EXITS 23 //number of exit created

World::World(){
	
	character= new Character("prince","you, the prince");
	
}

World::~World(){


}

void World::Createworld(){

/*//Rooms


*/
//room #1
Room* WstGarden = new Room("West Garden", "A delicate garden full of roses for the queen, castle can be contemplated in all its glory");
rooms.pushback(WstGarden);

//room #2
Room* Entrance = new Room("Entrance of the castle", "A Giant Portal with many soldiers armed, in the distance you can see the Throne");
rooms.pushback(Entrance);

//room #3
Room* EastGarden = new Room("East Garden", " A garden with Tall trees, the Queen has her pets around here");
rooms.pushback(EastGarden);

//room #4
Room* MailR = new Room("Mail room", "The place where the castle sends messages to his kingdom ");
rooms.pushback(MailR);

//room #5
Room* ThroneR = new Room("Throne room", "An extravagant room where the king leads his people , full of soldiers of the Royal army");
rooms.pushback(ThroneR);

//room #6
Room* Kitchen = new Room("Kitchen", "where the champions are fed");
rooms.pushback(Kitchen);

//room #7
Room* RArmy = new Room("Royal Army", " they protect the Royal Family");
rooms.pushback(RArmy);

//room #8
Room* Army = new Room("Army", " they just die for you jaja");
rooms.pushback(Army);

//room #9
Room* Dungeon = new Room("Dungeon", "the prison of the badest people of the kingdom");
rooms.pushback(Dungeon);

//room #10
Room*  KingsR = new Room("Kings room", "the room of your parents");
rooms.pushback(KingsR);

//room #11
Room* Hall = new Room("Hall", " a conection to your uncles room");
rooms.pushback(Hall);

//room #12
Room* JohnsR = new Room("Johns room", " the room of your uncle cool");
rooms.pushback(JohnsR);

//room #13
Room * CarlsR = new Room("Carls room", " the room of your uncle carls, the bored");
rooms.pushback(CarlsR);

//exits;

//exit 0 from West Garden to Entrance of the caste;
Exit* WGtoEC = new Exit("From west garden to entrance", "You see a bridge with soldiers", rooms[1], rooms[0], true, false, east);
exits.pushback(WGtoEC);

//exit 1 from Entrance of the castle to West Garden
Exit* ECtoWG = new Exit("from entrance of the castle to garden", "You see a a garden full of flowers", rooms[0], rooms[1], true, false, west);
exits.pushback(ECtoWG);

//exit 2 from Entrance of the Castle to East Garden;
Exit* ECtoEG = new Exit("from entrance of the castle to garden", "You see a a garden full of flowers", rooms[0], rooms[1], true, false, east);
exits.pushback(ECtoEG);

//exit 3 from East Garden to Entrance of the Castle;
Exit* EGtoEC = new Exit("from East Garden to Entrance of the Castle", "You see a bridge with soldiers", rooms[1], rooms[2], true, false, west);
exits.pushback(EGtoEC);

//exit 4 from East Garden to Mail room;
Exit* EGtoMR = new Exit("from East Garden to Mail room", "a little cabin dools", rooms[3], rooms[2], true, false, east);
exits.pushback(EGtoMR);

//exit 5 from Mail room to East Garden;
Exit* MRtoEG = new Exit("from Mail room to East Garden", "You see some trees,amimals and roses", rooms[2], rooms[3], true, false, west);
exits.pushback(MRtoEG);

//exit 6 from Entrance of the Castle to Throne room;
Exit* ECtoTR = new Exit("from Entrance of the Castle to Throne room", "You see some trees,amimals and roses", rooms[4], rooms[1], true, false, north);
exits.pushback(ECtoTR);

//exit 7 from Throne room to Entrance of the Castle;
Exit* TRtoEC = new Exit("from Throne room to Entrance of the Castle", "You see a bridge with soldiers", rooms[1], rooms[4], true, false, south);
exits.pushback(TRtoEC);

//exit 8 from Throne room to kitchen;
Exit* TRtoKT = new Exit("from Throne room to kitchen", "you see a kitchen full of food", rooms[5], rooms[4], true, false, east);
exits.pushback(TRtoKT);

//exit 9 from kitchen to Throne room;
Exit* KTtoTR = new Exit("from kitchen to Throne room", "You see one big Throne with Diamonds and wings", rooms[4], rooms[5], true, false, west);
exits.pushback(TRtoKT);

//exit 10 from throne room to Royal army;
Exit* TRtoRA = new Exit("from throne room to Royal army", "You see golden swords, very tall people and shields", rooms[6], rooms[4], true, false, west);
exits.pushback(TRtoRA);

//exit 11 from Royal army to throne room;
Exit* RAtoTR = new Exit("from Royal army to throne room", "You see one big Throne with Diamonds and wings", rooms[4], rooms[6], true, false, east);
exits.pushback(RAtoTR);

//exit 12 from Royal army to army;
Exit* RAtoAR = new Exit("from Royal army to army", "You see some soldiers and wood swords ", rooms[7], rooms[6], true, false, south);
exits.pushback(RAtoAR);

//exit 13 from army to Royal army;
Exit* ARtoRA = new Exit("from army to Royal army", "You see golden swords, very tall people and shields", rooms[6], rooms[7], true, false, north);
exits.pushback(ARtoRA);

//exit 14 from army to Dungeon;
Exit* ARtoDG = new Exit("from army to Dungeon", "you see a thin man prisoner, rats and webs", rooms[8], rooms[7], true, false, west);
exits.pushback(ARtoDG);

//exit 15 from Dungeon to army;
Exit* DGtoAR = new Exit("from Dungeon to army", "You see some soldiers and wood swords ", rooms[7], rooms[8], true, false, east);
exits.pushback(DGtoAR);

//exit 16 from Throne room from Kings room;
Exit* TRtoKR = new Exit("from Throne room from Kings room", "you see a very big bed, two mirrors and one table", rooms[9], rooms[4], true, false, north);
exits.pushback(TRtoKR);

//exit 17 from Kings room from Throne room;
Exit* KRtoTR = new Exit("from Kings room from Throne room", "You see one big Throne with Diamonds and wings", rooms[4], rooms[9], true, false, south);
exits.pushback(KRtoTR);

//exit 18 from Kings room to Hall;
Exit* KRtoHL = new Exit("from Kings room to Hall", "a dark passage with a light in the end", rooms[10], rooms[9], false, true, north);
exits.pushback(KRtoHL);

//exit 19 from Hall to Kings room;
Exit* HLtoKR = new Exit("from Hall to Kings room", "you see a very big bed, two mirrors and one table", rooms[9], rooms[10], false, true, south);
exits.pushback(HLtoKR);

//exit 20 from Hall to Johns room;
Exit* HLtoJR = new Exit("from Hall to Johns room", "you see the room of your uncle John", rooms[11], rooms[10], false, true, west);
exits.pushback(HLtoJR);

//exit 21 from Johns room to Hall;
Exit* JRtoHL = new Exit(" from Johns room to Hall", "a dark passage with a light in the end", rooms[10], rooms[11], false, true, east);
exits.pushback(JRtoHL);

//exit22 from Hall to Carls room;
Exit* HLtoCR = new Exit(" from Hall to Carls room", "you see the room of your uncle Carl", rooms[12], rooms[10], false, true, east);
exits.pushback(HLtoCR);

//exit 23 from Carls room to Hall;
Exit* CRtoHL = new Exit("from Carls room to Hall", "a dark passage with a light in the end", rooms[10], rooms[12], false, true, west);
exits.pushback(CRtoHL);
}

void World::Go(dir opera1){// to move the character.
	int direction;
	direction = opera1;
	bool flags1 = true;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exits[i]->origin == character->pos){

			if (exits[i]->mydirection == direction){

				if (exits[i]->open == false){
					printf(" this door is closed, try to open it");
					break;
				}
				else {
					character->pos = exits[i]->destiny;
					printf("\n You are in  \n  ");
					printf("%c",character->pos->name);
					printf("%c",character->pos->description);
					flags1 = false;
					break;
				}
			}

		}
	}

	if (flags1 == true) {
		printf("You cant go there");
	}
}

void World::lookroom(){
	printf("%s", character->pos->description);
}

void World::Look(dir opera1){// to look through the exits selected;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exits[i]->origin == character->pos){
			if (exits[i]->mydirection == opera1){
				printf("%c",exits[i]->description);
				if (exits[i]->open == false){
					printf("but this door is closed");
				}

			}
		}
	}
}

void World::Open(dir opera1){// to open doors;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exits[i]->origin == character->pos){
			if (exits[i]->mydirection == opera1){
				if (exits[i]->door == true){
					if (exits[i]->open == false){
						exits[i]->open = true;
						printf("You have open de door ,yei");
					}
				}
			}
		}
	}
}

void World::Close(dir opera1){ //to close doors;
	for (int i = 0; i < NUM_EXITS; i++){
		if (exits[i]->origin == character->pos){
			if (exits[i]->mydirection == opera1){

				if (exits[i]->door == false){
					printf("there is not doors in this place");
					break;
				}
				else if (exits[i]->door == true){
					if (exits[i]->open == true){
						exits[i]->open = false;
						printf("You have close de door, woho");
					}
				}


			}
		}
	}
}



void World::readSentence(char* opera1){//to read the sentence TYPEEd by the user (already fragmented)
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
	printf(" To move around the world you can use (n) to north,\n (s) to South, (e) to East and (w) to West,\n also you can TYPEE the word \nor TYPEE go first; TYPEE 'look' following of a direction to look \naround the room or the exits.You can also open and close doors with the coomand \n'open' or 'close' following by the direction, to quit the game \npress 'quit' or 'q' to see this message again TYPEE 'help'\n\n");
	printf("“The day is approaching, soon we will purified our \nlands and get honor to my father, I can’t\n accept one more day the fact of my nephew is a \nPevensies.Live long to the marfil crown.”  You are a prince, and one of yor uncles wants \nto kill your parents, you need to find who is the bad one");
}




