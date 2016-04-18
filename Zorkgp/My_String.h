#ifndef STRING
#define STRING
#include "worlds.h"
#include "vector.h"
#include <string.h>

class Mstr
{
public:
	char* buffer=nullptr;
	int Capacity = 0;
public:
	Mstr();
	Mstr(const char* str);
	~Mstr();
	void Token(Mstr &str, vector<Mstr> &strings);
	void operator =(const Mstr &other);
	void operator =(const char* str2);
	bool operator ==(const char* str2)const;
	bool operator ==(const Mstr &other)const;

	unsigned int Mstrlen()const;
private:

};



#endif