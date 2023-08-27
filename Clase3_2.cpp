#include <iostream>
using namespace std;
int main() {
	
	int TotHoras, ValorHora, Sueldo;
	
	cout <<"Programa para saber el Salario Semanal" << endl;
	std::cout << "Ingrese Total de horas trabajadas y el valor de la hora ";
	std::cin >> TotHoras >> ValorHora;
	if (TotHoras <= 40) {
		cout << "Su sueldo es "<< (Sueldo = (TotHoras * ValorHora )) << endl; 
		}
		else {
		cout << "Su sueldo es "<< (Sueldo = (40 * ValorHora ) + ((TotHoras - 40) * (ValorHora * 1.5))) << endl; 
		}
		
return 0;
		
}
