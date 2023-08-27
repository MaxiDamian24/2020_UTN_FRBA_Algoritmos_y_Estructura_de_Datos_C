#include <iostream>
#include <conio.h>
using namespace std;
void busquedaSec( int numeros[], int cantNumeros);

int main() {
	int i =0, j=0;
	int suma=0, promedio=0;
	int numeros[10] = {0};
//	int cantNumeros = 10;
	for (i=0; i<=9; i++) {
		cout <<" Ingrese Numero: ";
		cin >> numeros[i];
//		suma +=numeros[i];
	}
	
	busquedaSec(numeros, 10);
//	cout <<suma;
	
	
	
	
	getch() ;
	return 0;
}

void busquedaSec( int numeros[], int cantNumeros) {
	int mayor = 0;
	int masAlto = 0;
	int suma = 0;
	int k = 0;
//	int cantNumeros;	
	for (k=0; k < cantNumeros; k++) {
		suma += numeros[k];
		if (masAlto < numeros[k]) {
			masAlto = numeros[k];
		} 
		
	}
	cout << "La suma total es: " << suma ;
	cout << "El promedio del total es: "<< suma/10 ;
	cout << "El importe mas alto es: " << masAlto;
	
}
