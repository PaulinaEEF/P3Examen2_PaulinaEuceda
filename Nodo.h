#ifndef NODO_H
#define NODO_H

#include "Object.h"

class Nodo
{
	public:
		Nodo(Object*);
		
		Nodo* getNext();
		void setNext(Nodo*);
		
		~Nodo();
	private:
		Nodo* nextNode;
		Object* data;
};

#endif
