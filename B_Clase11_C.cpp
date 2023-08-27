#include <iostream>
#include <conio.h>

using namespace std;
void ordenoSeleccion(int tabla[], int num);
int main() {
	int i=0;
	int num =19;
	int tabla[20] = {912,24,89,34,56,87,21,45,98,66,54,67,82,13,45,22,32,31,45,78};
	for (i=0; i<=19; i++){
		cout <<tabla[i]<< ", ";
	}
		cout << "\n";
	ordenoSeleccion(tabla, num);
	for (i=0; i<=19; i++){
		cout <<tabla[i]<< ", ";
	}
	
	
	
	
	getch();
	return 0;
}

void ordenoSeleccion(int tabla[], int num){
	int i=0;
	int j=0;
	int tmp = 0;
	int indiceMenor = 0;
	int nroCambiar=0;
	bool cambio = false;
	for (i = 0; i<=num; i++) {
		indiceMenor=i;
		for (j=i+1; j<=num; j++){
		if (tabla[indiceMenor] > tabla[j]){
			indiceMenor = j;
			cambio = true;
		} else{
			cambio=false;
		}
//		cout << "j: " << j<<" ";
		}
		if (cambio = true) {
//			cout <<" \n"<<"indice Menor: " << indiceMenor<< " i: "<<i<<"\n";
			tmp = tabla[i];
			tabla[i]=tabla[indiceMenor];
			tabla[indiceMenor]= tmp;
		} 
//		for (i=0; i<=19; i++){
//		cout <<tabla[i]<< ", ";
//		getch();
//		}
	}
	
}
