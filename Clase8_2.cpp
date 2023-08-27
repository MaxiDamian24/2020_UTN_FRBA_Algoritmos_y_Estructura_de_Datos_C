#include<iostream>
#include<conio.h>
using namespace std;
void ventas(int ventas[], int cantidad);

main() {
	const int CANT_VENT = 10;
	int vent[CANT_VENT] = {301, 600, 345, 230, 45, 66, 789, 44, 234, 5};

	ventas(vent, CANT_VENT);
	
	
	getch();
	return 0;
}

void ventas(int ventas[], int cantidad){
	int i;
	int totVentas = 0;
	int mayor = 0;
	
	for(i=0; i<=10; i++) {
		totVentas  = totVentas + ventas[i];
		if (ventas[i] > mayor) {
			mayor = ventas[i];
		}
	}
	std::cout << "La suma de todas las ventas es: " << totVentas << "\n";
	std::cout << "El promedio de ventas es: " << (totVentas/10)<< " \n";
	std::cout << "El mayor importe ingresado es: " << mayor<< " \n";	
}
