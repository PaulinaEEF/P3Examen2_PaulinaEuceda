#ifndef OPERATOR_H
#define OPERATOR_H

#include "Object.h"

class Operator : public Object
{
	public:
		Operator(char);
		~Operator();
	protected:
		char operador;
};

#endif
