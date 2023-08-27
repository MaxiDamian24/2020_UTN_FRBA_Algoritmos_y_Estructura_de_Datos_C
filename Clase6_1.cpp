#include <iostream>
#include <conio.h>
using namespace std;
double larger(double x, double y);
int main() {
	int i;
	double NumX, NumY, NumMax,MaxFun;
	NumMax = 0;
	for (i=1; i<=5; ++i){
		cout << "Ingrese dos Numeros: ";
		cin >> NumX >> NumY;
		MaxFun = larger(NumX, NumY);
		if (NumMax < MaxFun) {
			NumMax = MaxFun;
		}
	}
	cout << "El Numero Maximo ingresado es: "<<NumMax;
	
	getch();
	return 0;
}

double larger(double x, double y){
	double max;
 	if (x >= y) {
	max = x;
	} else {
	max = y;
	}
return max;
}
	
	
	


