#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Nodo.h"
#include "Object.h"
#include "Operator.h"
#include "Matrix.h"

using namespace std;
int main(int argc, char** argv) {
	int tamanio;
	string operacion;
	
	cin >> operacion;
	
	cout<<"Ingrese el tamano de las matrices: ";
	cin >> tamanio;
	
	int raiz, aux;
	
	raiz = sqrt(tamanio);
	while(tamanio%raiz!=0){
		cout<<"No es matriz cuadrada"<<endl;
		cout<<"Ingrese el tamano de las matrices: ";
		cin >> tamanio;
		raiz = sqrt(tamanio);
	}
	
	char operador;
	cout<<"Ingrese el operador: "<<endl;
	cin >> operador;
	Object* op1 = new Operator(operador);
	
	cout<<"Ingrese el otro operador: "<<endl;
	cin >> operador;
	Object* op2 = new Operator(operador);
		
	
	
	
	return 0;
}
