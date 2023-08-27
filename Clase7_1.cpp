#include <iostream>
#include <conio.h>
using namespace std;
void obtenerCalificacion(int& calificacion);
int mostrarSituacion(int calific);

int main() {
	int calif;
	calif = 0;
	obtenerCalificacion(calif);
	mostrarSituacion(calif);
	
	getch();
	return 0;
}

void obntenerCalificacion(int& calificacion) {
	cout << "Ingrese Calificacion: ";
	cin >> calificacion;
	cout << "La calificacion es: " << calificacion;
}

int mostrarSituacion(int calific) {
	if (calific >8) {
		cout << "Promociono con: " << calific;
	}
	else {
		cout << "Reprobo con: " << calific;
	}
	
}
