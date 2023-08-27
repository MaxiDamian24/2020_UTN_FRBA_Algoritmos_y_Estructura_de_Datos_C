#include <iostream>
using namespace std;
int main() {
	
	bool iguales;
	float base, altura;
	cout <<"Programa para calcular si dos valores son iguales" << endl;
	std::cout << "Ingrese la base y la altura ";
	std::cin >> base >> altura;
	iguales = (base == altura);
	cout << "Iguales= " <<iguales <<endl;
return 0;
		
}
