#include <iostream>
#include <stdio.h>

using namespace std;

bool esDivisible (int num);
void esDiv (int numero);

int main(){
	
	int num;
	int numero; 
	cout << "Ingrese un numero: ";
	cin >> num;
	
	if (esDivisible (num)){
		cout << "Es un numero divicible ";
	}
	else {
		cout << "No es un numero divicible ";
	}
	 cout << " ingrese un numero" ;
	 cin >> numero;
	 esDiv (int numero);

	
	return 0;
}

bool esDivisible (int NN){
	return NN % 4 == 0;
	}
void esDiv (int numero){
	if (numero % 3 == 0){
		cout <<"El numero" << numero << "es divisible por 3"
	}
}	

