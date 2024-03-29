#include "stack.h"
#include <cassert>

Stack::Stack(int size)
{
	//this-> pArr = (int*) malloc(sizeof(int)*size);
	this-> pArr = new int[size];
	assert( this->pArr );

	this-> size = size;
	this-> tos = 0;
}

Stack::~Stack()
{
	//free( this->pArr );
	delete [] this->pArr;
}

void Stack::push(int data)
{
	assert( this->tos != this->size);	
	this->pArr[(this->tos)++] = data;
}

int Stack::pop()
{
	assert( this->tos != 0 );
	return this->pArr[--(this->tos)];
}
