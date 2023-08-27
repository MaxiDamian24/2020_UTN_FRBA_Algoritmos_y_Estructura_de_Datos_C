#include <iostream>
#include <conio.h>

using namespace std;
bool buscoValor(int tabla[10], int valorBuscar);
int main() {
	int valorBuscar = 0;
	int medio=0;
	bool encontrado = false;
	int tabla[10] {1,3,5,7,9,11,13,15,17,19};
	int i=0;
	for (i=0; i<=9; i++) {
		cout << tabla[i] << ", ";
	}
	cout << "Ingrese valor a Buscar: ";
	cin >>valorBuscar;
	encontrado = buscoValor(tabla, valorBuscar); 	
	if (!encontrado) {
		cout << "No existe el numero en la tabla";
	}
	else {
		cout << "El valor existe en la tabla";
	}
	
	
	getch();
	return 0;
}

bool buscoValor(int tabla[10], int valorBuscar) {
	int primero = 0;
	int ultimo = 9;
	int medio = 0;
	bool encontrado= false;
	
	
	while ( primero <= ultimo && !encontrado) {
		medio = (primero + ultimo) / 2;
		if (tabla[medio] == valorBuscar) {
		encontrado = true;
		}
		else if ( valorBuscar > tabla[medio] ) {
		primero = medio + 1;			
		}
		else {
		ultimo = medio -1;
		}
	}
	
	if ( !encontrado) {
	return false;
	}
	else {
	return true;
	}
}
