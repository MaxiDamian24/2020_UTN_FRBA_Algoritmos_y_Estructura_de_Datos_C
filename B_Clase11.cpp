#include <iostream>
#include <conio.h>

using namespace std;

int arrayCarga;
bool busquedaBinaria(int tabla[], int cantidad, int numero);

int main() {

	int cantidad = 19;
	int tabla[19] {0};
	int i=0;
	int numero =0;
	char salgo = 'n';
	
	bool encontrado=false;
	
	

	
	do {
		cout << "Ingrese C para cargar o S para Salir: ";
		cin >> salgo;
		if (salgo == 'C' || salgo =='c') {
			cout << "Ingrese numero a cargar: ";
			cin >> numero;
			encontrado = busquedaBinaria(tabla, cantidad, numero);
			cout << encontrado << "\n";
			if (!encontrado) {
				for (i=0; i<=18; i++){
					if (tabla[i]= 0){
						arrayCarga = i;
						cout << i << " " << arrayCarga << " "<<tabla[arrayCarga] << " \n";
//						i=19;
					}
					}
				tabla[arrayCarga] = numero;
				
				cout << i << " " <<arrayCarga << " "<< tabla[arrayCarga] << "  \n";
			}
		}
		} while (salgo == 'C' || salgo =='c');
		
	for (i=0; i<=18; i++) {
		cout << tabla[i] << ", ";
	}	
	
	getch();
	return 0;
	
	
	}
	
	bool busquedaBinaria(int tabla[], int cantidad, int numero){
	int primero = 0;
	int ultimo = 0;
	int medio = 0;
	int i = 0;
	bool encontrado = false;
	cout << cantidad << " " << numero<< " \n";
	ultimo = cantidad;
	while (primero <= ultimo && !encontrado) {
		medio = (primero + ultimo) /2 ;
		if (numero == tabla[medio]) {
			encontrado = true;
		}
		else if (numero > tabla[medio]) {
			primero = medio + 1;
		}
		else {
			ultimo = medio - 1;
		}
		}		 
	
	if (!encontrado) {
		return false;
	}
		else {
			return true;
	}
}
	
	
	


