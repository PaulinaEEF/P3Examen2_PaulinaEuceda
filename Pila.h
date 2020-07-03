#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila
{
	public:
		Pila();
		Pila(Nodo*);
		Nodo* pop();
        Nodo* top();
        void push(Nodo*);
        void delete_stack(Nodo*);
		~Pila();
	protected:
		Nodo* head;
};

#endif
