#include <iostream>
using namespace std;
int main() {
	
	int numero1, numero2;
	cout <<"Programa para saber cual es el mayor" << endl;
	std::cout << "Ingrese los dos valores ";
	std::cin >> numero1 >> numero2;
	if (numero1 > numero2) {
		cout << "el numero "<< numero1 << " es mayor que el numero " << numero2 << endl; 
		}
		else if (numero1 < numero2) {
			cout << "el numero "<< numero1 << " es menor que el numero " << numero2 << endl; 
		}
			else {
			cout << "el numero "<< numero1 << " es igual que el numero " << numero2 << endl; 
		
		}
	
	
return 0;
		
}
