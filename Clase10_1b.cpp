#include<iostream>
#include<conio.h>
using namespace std;

int cargoArray(int array[], int largo);

int main() {
	const int LARGO = 11;
	int i = 0;
	int array[LARGO];
	for (i=0; i<=(LARGO-1); i++) {
			cout<< "Ingrese Numero: ";
			cin >>array[i];
		}
	for (i=0; i < LARGO; i++) {
		cout << array[i]<<", "; 
	}
	cout << endl;
	cargoArray(array,LARGO);
	
	for (i=0; i < LARGO; i++) {
		cout << array[i]<<", "; 
	}
	
	
	getch();
	return 0;
	
}
	
 int cargoArray(int array[], int largo) {
	bool ordenado = false;
	int a = 0;
	int j= 0;
	int b = 1;
	int ultimo = largo -1;
	int aux1, aux2 = 0;
	
		while (!ordenado) {
			ordenado = true;
			a=0;
			b=1;
	//		cout<<"despues de ordenado"<<endl;
			while (b <= ultimo) {
	//			cout<<"despues del while b<=ultimo"<<endl;
				
				if (array[a] > array[b]){
	//			cout << array[a];
	//			cout << array[b];
				
				aux1 = array[a];
				array[a] = array[b];
				
				//array[a] = {aux2};
				array[b] = aux1;
				ordenado = false;
				}
			a++;
			b++;
			}
		}

	//	for (j=0; j <= ultimo; j++) {
	//	cout << array[j]<<", "; 
	//}

}

