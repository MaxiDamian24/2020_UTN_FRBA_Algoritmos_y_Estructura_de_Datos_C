//============================================================================
// Name        : CorteDeControl.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>

using namespace std;

struct multa{
   int dominio;
   int tipoMulta;
   int monto;
};

int main() {
	FILE *Multas;

	Multas = fopen ("multas.dat","rb");

	multa rAux;
	int anterior;
	int sumaMulta; //Variable para sumar el monto de las multas

	fread (&rAux,sizeof(struct multa),1,Multas);

	while (!feof (Multas)){
	   anterior = rAux.dominio;
	   sumaMulta = 0;

	   while (!feof (Multas)&&(anterior == rAux.dominio)){
	      sumaMulta = sumaMulta + rAux.monto;
	      fread (&rAux,sizeof(struct multa),1,Multas); //eof
	   }

	   cout <<"Dominio: " << anterior << "tiene un total de multas de: "<< sumaMulta <<endl;

	}
	fclose (Multas);

	return 0;
}
