#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	
	int Nota;
	string Nombre;
	
	cout <<"Programa para saber la nota conceptual" << endl;
	std::cout << "Ingrese Nombre y Nota ";
	std::cin >> Nombre >> Nota;
	cout<< Nombre << " su nota es ";
	switch (Nota) {
	case 10:
		cout << "Sobresaliente";
	break;
	case 9:
		cout << "Distinguido";
	break;
	case 8:
		cout << "Muy Bueno";
	break;
	case 7:
		cout << "Bueno";
	break;
	case 6:
		cout << "Aprobado";
	break;
	default:
		cout << "Insuficiente";
	}
		
return 0;
		
}
