#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int primero=0;
	int  segundo=0;
	
	cout << "Ingrese el primer y segundo valor: " ;
	cin >> primero >> segundo; 
//	cout << primero << segundo;
	if (primero > segundo) {
		cout << primero << " es mayor que: " << segundo << endl;
	}
		else if (primero < segundo) {
			cout << segundo << " mayor que " << primero << endl;
			}else { 
			cout << primero << "es igual a " << segundo<< endl;
		}
				
		
	
	
	
	
}
