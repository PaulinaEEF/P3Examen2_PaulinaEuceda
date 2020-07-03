#include "Matrix.h"

Matrix::Matrix(int tam)
{
	size = tam;
}

int** Matrix::crearMatriz(){
	
	int** matriz = NULL;//instancia
	
	matriz = new int*[size];
	
	for(int i = 0; i < size; i++){
		matriz[i] = new int[size];
	}
	int num;
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			cout<<"Ingrese el numero en la posicion: ["<<i<<"]["<<j<<"] "<<endl;
			cin >>num;
			matriz[i][j] = num;
		}
	
	return matriz;
}


Matrix::~Matrix()
{
}
