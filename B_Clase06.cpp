#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

double faCel (double fahe);
double fa = 0;
int main () {
	cout <<"Ingresa Grados Fahrenheit: ";
	cin >>fa;
	cout << fa << " Fahrenheit son " << faCel(fa) << " Celsius";
	
	
	getch ();
	return 0;
}

double faCel (double fahe) {
	double temp;
	temp=(fahe-32)*0.5556;
	return temp;
}
