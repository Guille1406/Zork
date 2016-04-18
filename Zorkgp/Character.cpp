#include <iostream>
#include <stdio.h>
#include "rooms.h"
#include "Character.h"
#include "worlds.h"
#define NUM_EXITS 23



Character::Character(const char* _name, const char* _description) :Entity(_name, _description){

}
Character::~Character(){

}

