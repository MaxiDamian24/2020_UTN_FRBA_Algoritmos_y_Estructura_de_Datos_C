#include <iostream>
#include <conio.h>
using namespace std;

void obtenerCalificacion(int& calificacion);
void mostrarSituacion(int situacionCalif);

int main() {
	
	int calificacion = 0;
	
	obtenerCalificacion(calificacion);
	mostrarSituacion(calificacion);
	
	


	getch();
	return 0;
}

void obtenerCalificacion(int& calificacion){
	cout << "Ingrese Calificacion: ";
	cin >> calificacion;
	cout << "Usted ingreso " << calificacion << "\n";
}	

void mostrarSituacion(int mostrarCalif){
	switch (mostrarCalif) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "no Aprobo";
			break;
		case 6:
		case 7: 
			cout << "Aprobo, rinde final";
			break;
		case 8:
		case 9:
		case 10:
			cout << "Promociono ";
			break;
		default :
			cout << "Nota mal Ingresada";
			break;
	}
}
