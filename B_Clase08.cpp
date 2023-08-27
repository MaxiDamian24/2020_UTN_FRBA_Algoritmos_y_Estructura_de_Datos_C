#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	int i = 0, suma = 0;
	int numeros[5] = {0};
	
	for (i=0; i < 5; i++) {
		
	cout << "Ingrese Numero: " ;
	cin >> numeros[i];
	suma +=numeros[i];
		
	}
	
	cout << "La suma es: " << suma << "\n";
	for (i=4; i>=0; i--) {
		cout << numeros[i] << ", ";
		
	}
	getch();
	return 0;
}
