#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i;
	int numeros[5];
	for (i=0; i<=4; i++) {
		cout << " Ingrese un numero: ";
		cin >> numeros[i]; 
	}	
	for (i=4; i>=0; i--){
		cout << numeros[i]<<", ";
		
	}
	
	getch();
	return 0;
}
