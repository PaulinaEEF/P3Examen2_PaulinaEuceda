#include "Nodo.h"

Nodo::Nodo()
{
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
