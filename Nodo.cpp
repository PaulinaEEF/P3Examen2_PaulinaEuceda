#include "Nodo.h"

Nodo::Nodo(Object* ob)
{
	data = ob;
}

Nodo* Nodo::getNext(){
	return nextNode;
}
void Nodo::setNext(Nodo* siguiente){
	nextNode = siguiente;
}

Nodo::~Nodo()
{
}
