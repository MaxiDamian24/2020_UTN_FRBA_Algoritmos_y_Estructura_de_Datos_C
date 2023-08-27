#include <iostream>
#include <conio.h>
using namespace std;
float Convierto(float Faren);
int main(){
	float Far, Cel;
	
	cout << "Ingrese grados Farenheit: ";
	cin>>Far;
	Cel = Convierto(Far);
	cout << "Son " << Cel << " grados Cen";
		
	getch();
	return 0;
}
	
float Convierto(float Faren) {
	float Centi;
	Centi = (Faren - 32) * 0.5556; 
	return Centi;
}	


