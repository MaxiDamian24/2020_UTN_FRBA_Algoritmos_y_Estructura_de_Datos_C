#include<iostream>
#include<conio.h>
using namespace std;

void cargoMatriz(int cargoMatriz[3][3][4],int, int, int );
void ventasTotales(int ventasTotales[3][3][4],int, int, int );


int main() {
	const int NRO_SUC = 3;
	const int NRO_ART = 3;
	const int NRO_MES = 4;
	int matrizSucursales[NRO_SUC][NRO_ART][NRO_MES];
	cargoMatriz(matrizSucursales, NRO_SUC, NRO_ART, NRO_MES);
	ventasTotales(matrizSucursales, NRO_SUC, NRO_ART, NRO_MES);
	
	getch();
	return 0;
}

	void cargoMatriz(int cargoMatriz[3][3][4],int, int, int ){
		int i, j, k;
		i= j= k = 0;
		
		for (i=0; i<=2; i++) {
			for (j=0; j<=2; j++){
				for (k=0; k<=3; k++) {
					
					cout << "Ingrese el total de ventas del mes " <<k<<"Sucursal "<<i<<" Producto "<< j<<": ";
					cin >> cargoMatriz[i][j][k];
					cout << endl;
				}
			}			
		}
		
	}
	
	void ventasTotales(int ventasTotales[3][3][4], int, int, int){
    int i, j, k, mes ;
    int total;
    	total = 0;
		i= j= k= mes = 0;
		cout << "Ingrese Mes (de 0 hasta 3): ";
		cin >> mes;
		
		for (i=0; i<=2; i++) {
			for (j=0; j<=2; j++){
				for (k=0; k<=3; k++) {
					cout << ventasTotales[i][j][k];
					if(k==mes){
						total = total + ventasTotales[i][j][k];
					}
				}	
				}
				cout << endl;
			}cout << endl;			
		cout<< "Total del mes "<< mes<< ": "<< total;
	}



/*		int ventaTotalk;
		int i, j, k, mes;
		i= j= k = mes= 0;
		ventaTotalk = 0;
		cout << "Ingrese mes 0, 1, 2 o 3: ";
		cin >>mes; 
		cout << mes;
		for (k=0; k<=3; k++) {
			cout << "primer for "<<k;
			getch();
			if  (k = mes){
				cout << "primer if "<<k<<mes;
				getch();
				for (i=0; i<=2; i++) {
					cout <<"segundo For "<<i;
					getch();
				for (j=0; j<=3; j++) {
					cout<<"tercer For " <<i;
					getch();
					ventaTotalk = ventaTotalk + ventasTotales[i][j][k];
				}
				}
			}
		}
		cout<< "venta total del mes "<< mes<<": " << ventaTotalk; 
	} */
	
