#include <iostream>
#include <conio.h>

using namespace std;


void ordenoBurbuja(int tabla[], int cantidad);

int main() {

	int cantidad = 0;
	int tabla[19] {1,30,54,77,19,111,153,105,7,10,55,96,87,14,5,65,23,87,29};
	int i=0;
	for (i=0; i<=18; i++) {
		cout << tabla[i] << ", ";
	}
	cout << "\n\n\n";
	
	ordenoBurbuja(tabla, cantidad);

	
	getch();
	return 0;
}

void ordenoBurbuja(int tabla[], int cantidad) {
	int temp =0;
	int w =0;
	bool ordenado = false;
	int i = 0;
	
	while (!ordenado) {
		ordenado=true;
		for (i=0; i<=17; i++) {
			if (tabla[i] > tabla [i+1]) {
				temp = tabla[i];
//				w = i+1;
//				cout <<"i: "<< i << " " <<"i+1: "<<w<< "\n";
//				cout << temp << " "<< tabla [i] << " "<< tabla[i+1] <<"\n";
//				getch();
				tabla[i] = tabla[i+1];
				tabla[i+1] = temp;
				ordenado = false;
				
//				w = i+1;
//				cout <<"i: "<< i << " "<<"i+1: "<<w<< "\n";
//				cout << temp << " "<< tabla [i] << " "<< tabla[i+1] <<"\n";
//				getch();
			}
//		cout << "\n"<<tabla[0]	;
			
		}
	}
		for (i=0; i<=18; i++) {
		cout << tabla[i] << ", ";
	}
	cout << "\n\n\n";
}



