#include <iostream>
#include <conio.h>

using namespace std;
void ordenoInsercion(int tabla[], int num);
int main() {
	int i=0;
	int num =20;
	int tabla[20] = {5,24,89,34,56,87,21,45,98,66,54,67,82,13,45,22,32,31,45,78};
	for (i=0; i<=19; i++){
		cout <<tabla[i]<< ", ";
	}
		cout << "\n";
	ordenoInsercion(tabla, num);
	for (i=0; i<=19; i++){
		cout <<tabla[i]<< ", ";
	}
	
	
	
	
	getch();
	return 0;
}

void ordenoInsercion(int tabla[], int num){
	int i=0;
	int j=0;
	int tmp = 0;
	for (i = 0; i<num; i++) {
		j=i;
		tmp=tabla[i];
		while(j>0&&tmp<tabla[j-1]){
			tabla[j] =tabla[j-1];
			j--;
		}
		tabla[j]=tmp;
	}
	
	
	
}
