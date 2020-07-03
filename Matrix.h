#ifndef MATRIX_H
#define MATRIX_H

#include "Object.h"

#include<iostream>
using namespace std;
class Matrix : public Object
{
	public:
		Matrix(int);
		
		int** crearMatriz();
		
		~Matrix();
	protected:
		int size;
};

#endif
