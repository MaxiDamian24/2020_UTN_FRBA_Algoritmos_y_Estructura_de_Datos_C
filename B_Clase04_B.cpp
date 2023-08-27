#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	
	
	int nota;
	nota =0;
	
	cout << "Ingrese nota: ";
	cin >> nota ;
	switch (nota) {
		
		case 1: ;
		case 2: ;
		case 3: ;
		case 4: ;
		case 5:
			cout <<"Insuficiente, segui participando" << endl;
			break;
		case 6: 
			cout << "Aprobado, con lo justo" << endl;
			break;
		case 7: 
			cout << "Bueno" << endl;
			break;
		case 8:
			cout << "Muy Bueno" << endl;
			break;
		case 9:
			cout << "Distinguido" <<endl;
			break;
		case 10:
			cout << "Sobresaliente, como no promosionaste????" << endl;
			break;
		default:
			cout <<"Ingresa bien la nota pescado" << endl;
			break;
	}
	
}
