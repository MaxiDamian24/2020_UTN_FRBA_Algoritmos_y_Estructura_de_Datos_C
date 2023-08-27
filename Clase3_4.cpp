#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int NroCliente, CanalesHd, BocasAdic, BocasAdicFacturadas;
	char Tipo;
	float Importe;
	
	cout <<"Programa de facturacion" << endl;
	cout << "Ingrese Numero de Cliente: ";
	cin >> NroCliente;
	Tipo = 'Z';

	/* Verifico entrada R o C*/
/*	while (Tipo != 'r' || Tipo != 'R' || Tipo != 'C' || Tipo != 'c') { */
		cout << "Ingrese Tipo de Cliente, R = Residencial o C = Comercial: " ;
		cin >> Tipo;
	/*} */
	
	std::cout << "Ingrese Cantidad de Calnales HD: ";
	std::cin >> CanalesHd;
	
	if (Tipo == 'R' || Tipo == 'r') {
		Importe = 4.5 + 20.5 + (CanalesHd * 5);
	}
	else {
	 	std::cout << "Ingrese Bocas Adicionales: ";
		std::cin >> BocasAdic;
		if
			(BocasAdic > 10) {
			BocasAdicFacturadas = BocasAdic - 10;
		}
			else {
			BocasAdicFacturadas = 0;
			}
		
		Importe = 15 + 75 + (5*BocasAdicFacturadas) + (CanalesHd * 5);
		}
	
	std::cout << "El importe facturado es: " << Importe;
	
		
return 0;
		
}
