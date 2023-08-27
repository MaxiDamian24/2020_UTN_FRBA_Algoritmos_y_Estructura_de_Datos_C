# include  <iostream>
# include <conio.h>
using namespace std;

int main (){
	char letra;
	cout << "Ingresa letra: " ;
	cin >> letra ;
	while (letra != '#') {
		switch (letra) {
			case 'a':
			case 'b':
			case 'c':
			cout << 1 << endl
			;
			break;
		}
		cout << "Ingresa letra: " ;
		cin >> letra ;
	}
	
	
	
	
	return 0;
}
