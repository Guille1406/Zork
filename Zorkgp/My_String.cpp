#include "worlds.h"


Mstr::Mstr()
{
	Capacity = 1;
	buffer = new char[Capacity];
	*(buffer + 0) = '\0';
}
Mstr::Mstr(const char* str)
{
	int i;
	if (str != NULL){
		i = strlen(str) + 1;

		buffer = new char[i];
		strcpy_s(buffer, i, str);
	}
	else{
		i = 0;
		buffer = nullptr;
	}
	Capacity = Mstrlen();
}
Mstr::~Mstr()
{
}


void Mstr::Token(Mstr &str, vector<Mstr> &Tstr){
	char* pile = nullptr;
	char* storage = nullptr;
	int i = 0;
	pile = strtok_s(str.buffer, " ,.-", &storage);
	while (pile != NULL)
	{
		str.buffer = pile;
		Tstr.pushback(str);
		pile = strtok_s(NULL, " ,.-_", &storage);
		i++;
	}
}
unsigned int Mstr::Mstrlen()const{
	if (buffer != NULL){
		return strlen(buffer);
	}
	else{
		return 0;

	}
}
void Mstr::operator=(const Mstr &str2){
	int len = str2.Mstrlen();
	if (Capacity >= len){
		strcpy_s(buffer,Capacity,str2.buffer);

	}
	else{
		delete[] buffer;
		buffer = new char[len];
		Capacity = Mstrlen() + 1;
		strcpy_s(buffer,Capacity, str2.buffer);
	}

}
void Mstr::operator=(const char* str2){
	int len = strlen(str2) + 1;
		if (Capacity >= len){
		strcpy_s(buffer, Capacity, str2);

	}
	else{
		delete[] buffer;
		buffer = new char[len];
		Capacity = Mstrlen() + 1;
		strcpy_s(buffer,Capacity, str2);
	}

}
bool Mstr::operator ==(const char* str2)const{
	return (0 == _stricmp(buffer, str2));
}
bool Mstr::operator ==(const Mstr &str2)const{
	return (0 == _stricmp(buffer, str2.buffer));
}

