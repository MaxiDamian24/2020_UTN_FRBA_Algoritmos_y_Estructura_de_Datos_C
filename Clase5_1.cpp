#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int i, Negativo;
	float Importe;
	
	Negativo = 0;
	for (i=1; i<=12; i++) {
		cout<< "Ingrese saldo mensual: ";
		cin >> Importe;
		if (Importe < 0) {
			++Negativo;
		}
		if (Negativo > 2) {
			i = 13;
		}
	}
	switch (Negativo) {
		case 0:
			cout << "Alta Confianza";
			break;
		case 1:
			cout << "Confianza media";
			break;
		case 2:
			cout << "Confianza media";
			break;
		default:
			cout << "Baja confianza";
			break;
		
	}
return 0;
}
