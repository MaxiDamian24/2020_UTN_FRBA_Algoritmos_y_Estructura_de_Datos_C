#include<iostream>
#include<conio.h>
using namespace std;
int busconumero(const int buscoNumero[], int& longitud,int busco);
int main() {
	int i;
	int lista =11;
	int buscar = 0;
	int encontrado = 0;
	int numeros[] = {1,23,36,44,57,61,66,75,88,89,92};
	for (i=0; i<=10; i++) {
		cout << numeros[i]<<", ";
	}
	cout <<endl;
	cout<< "Ingrese numero a buscar (de 0 a 99): ";
	cin >> buscar;
	// cout << "Numero a buscar: "<< buscar<<endl; 
	busconumero(numeros, lista,  buscar);
	// cout << lista<< endl;
	if (lista >= 0) {
		cout << "Se encontro el numero: " <<numeros[lista];
	}
	else {
	cout <<" No se encontro el numero: "<< buscar<<endl; 
	}
	getch();
	return 0;
}
int busconumero(const int buscoNumero[], int& longitud,int busco) {
	int i = 0;
	int primero = 0;
	int ultimo = longitud - 1;
	int medio;
	bool encontrado = false;
	
	for (i=0; i<=10; i++) {
		cout << buscoNumero[i]<<", ";
	}
	cout << endl;
	// cout << longitud << endl;
	
	
	while (primero <= ultimo && !encontrado) {
		medio = (primero + ultimo) / 2;
		if (buscoNumero[medio] == busco) {
			encontrado = true;
		}
			else if (busco > buscoNumero[medio]) {
				primero = medio + 1;
			}
			else { 
				ultimo = medio - 1;
			}
		}
		
		if (encontrado) {
			longitud =  medio;
		}
		else longitud = -1;
		
	}
	
	

