#include <iostream>
#include <conio.h>
using namespace std;

	struct Aeronave{
		int identificador;
		char matricula[6];
		char nombre[10];
		int horasDeVuelo;
		int fechaBaja;
	};
	Aeronave aeronaves[10];
	void cargarAeronaves();
	void mostrarAeronaves();

int main () {
	
 cargarAeronaves();
 mostrarAeronaves();
	
	getch();
	return 0;
	
}

	void cargarAeronaves(){
		int i=0;
		for (i=0; i<=9;i++) {
		cout << "Ingrese identificador:";
		cin >> aeronaves[i].identificador;
		cout << " \n Ingrese nombre";
		cin >> aeronaves[i].nombre;
			
		}
		
		
	}
	
	void mostrarAeronaves(){
	
	int i=0;
	for (i=0; i<=9;i++) {
		cout << aeronaves[i].identificador << " "<< aeronaves[i].nombre<< "\n";
			
		}

	}
