#include <iostream>
#include <conio.h>

using namespace std;

void mostrarMatriz(int tablero[4][3]);
void sumarFilas(int tablero[4][3]);
void mayorPorFila(int tablero[4][3]);
void menorPorFila(int tablero[4][3]);

int main() {
	int numeroOpcion =0;
//	int sumaFila = 0;
	int tablero[4][3] = {{2, 3, 1},{15, 25, 13},{20, 4, 7},{11, 18, 14}};
	int j=0, i=0;
	do {
		
		cout << "=================== \n" <<"(1) Mostrar Matriz \n" << "(2) Sumar Filas \n" << "(3) Mayor por Fila \n" << "(4) Menor por fila \n" << "(0) Salir \n" <<"Ingrese Opcion: " ;
		cin >> numeroOpcion ;
		cout << "=================== \n";
		switch(numeroOpcion){
			case 1:
				mostrarMatriz(tablero);
				break;
			case 2:
				sumarFilas(tablero);
				break;
			case 3:
				mayorPorFila(tablero);
				break;
			case 4:
				menorPorFila(tablero);
				break;
			default:
				break;
		}
	} while (numeroOpcion != 0 );
	
//	mostrarMatriz(tablero);
//	sumarFilas(tablero);
//	mayorPorFila(tablero);
//	menorPorFila(tablero);	
	getch();
	return 0;
}



void mostrarMatriz(int tablero[4][3]){
	int i=0, j=0;
	for(i=0; i <= 3; i++) {
		cout <<"Fila " << i <<": " << "\n";
		cout << "\t";
		for (j=0; j <=2; j++) {
			cout << tablero[i][j] <<", ";
		}
		cout << "\n";
	}
}

void sumarFilas(int tablero[4][3]){
		int i=0, j=0;
		int sumaFila=0;
	for(i=0; i <= 3; i++) {
		for (j=0; j <=2; j++) {
			sumaFila += tablero[i][j];
		}
		cout << "El total de la fila " << i << " es: "<< sumaFila <<"\n";
		sumaFila = 0;
		}
}

void mayorPorFila(int tablero[4][3]){
		int i=0, j=0;
		int mayor=0;
	for(i=0; i <= 3; i++) {
		for (j=0; j <=2; j++) {
			if (mayor <= tablero[i][j]) {
				mayor = tablero[i][j];
			}
			}
		cout << "El mayor de la fila "<<i<<" es: " << mayor <<"\n";
		mayor = 0;
		}
}

void menorPorFila(int tablero[4][3]){
		int i=0, j=0;
		int menor;
	for(i=0; i <= 3; i++) {
		menor = tablero[i][j];
		for (j=0; j <=2; j++) {
			if (menor > tablero[i][j]) {
				menor = tablero[i][j];
			}
			}
		cout << "El menor de la fila "<< i<<" es: " << menor <<"\n";
		menor = 0;
		}
}
