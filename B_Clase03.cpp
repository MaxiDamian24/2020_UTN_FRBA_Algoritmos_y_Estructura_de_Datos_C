#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	const float CENTIMETROS_POR_PULGADA = 2.54;
	float total_Centimetros;
	float pulgadas;
	cout << "Ingrese valor positivo en Pulgadas: " ;
	cin >> pulgadas ;
	total_Centimetros = CENTIMETROS_POR_PULGADA * pulgadas;
	cout << pulgadas << " pulgadas son " <<  total_Centimetros << " centimetros";
	return 0;
}
