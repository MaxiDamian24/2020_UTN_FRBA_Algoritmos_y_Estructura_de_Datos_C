#include<iostream>
#include<conio.h>
using namespace std;



int main() {
	int i, j, totCol;
	
	int tablero[4][3] = {{2,3,1}, {15,25,13}, {20,4,7}, {11,18,14}};
	totCol = 0;
	for (i=0; i<=3; i++) {
		totCol=0;
		for (j=0;j<=2; j++){
			totCol= totCol + tablero[i][j];
		}
		cout<< "Total Columna "<< (i+1)<<": "<<totCol<< endl;
	}
	
	
	
	getch();
	return 0;
}
