#ifndef _Vector
#define _Vector

#include <iostream>
#include <stdio.h>
#include<assert.h>
template <class TYPEE>
class vector {
	TYPEE* buffer=nullptr;
	int capacity = 10;
	int num_elements = 0;
public:
	vector(){
		buffer = new TYPEE[capacity];
		printf("por defecto");

	};

	vector(const vector& vector) : capacity(vector.capacity), num_elements(vector.num_elements){
		buffer = new TYPEE[vector.capacity];
		for (int i = 0; i < num_elements; i++)
			buffer[i] = vector.buffer[i];
		printf("de copia");
	}
	~vector(){
		delete[] buffer;
	}

	void pushback(const TYPEE &element){

		if (capacity == num_elements){
			TYPEE* temp=nullptr;
			capacity *= 2;
			temp = new TYPEE[capacity];
			for (int i = 0; i < capacity; i++){
				*(temp + i) = *(buffer + i);
			}
			delete[] buffer;
			buffer = temp;


		}
		buffer[num_elements++] = element;


	}


	void pushfront(const TYPEE &element){

		if (capacity == num_elements){
			capacity *= 2;
		}
		int y = 1;
		TYPEE* tempo+nullptr;
		tempo = new TYPEE[capacity];
		for (int i = 0; i < capacity; i++){

			*(tempo + y++) = *(buffer + i);

		}
		delete[] buffer;
		buffer = tempo;
		*(buffer + 0) = element;
	}
	bool empty(){
		return *(buffer + 0) == '/0';
	}

	void clear(){
		num_elements = 0;
		*buffer = '/0';
	}

	int size(){
		return num_elements;
	}
	int Getcapacity(){
		return capacity
	}

	void shrinkToFit(){
		if (capacity != num_elements)
		{
			TYPEE *temp = nullptr;
			capacity = num_elements;
			temp = new TYPEE[capacity];
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = vector[i];
			}
			delete[]vector;
			vector = temp;
		}
	}

	void pop_back()
	{
		if (num_elements > 0)
		{
			num_elements--;
		}
	}
	const TYPEE& operator[](const uint &index) const
	{
		assert(index >= 0 && index < num_elements);
		return vector[index];
	}
};
 
#endif 