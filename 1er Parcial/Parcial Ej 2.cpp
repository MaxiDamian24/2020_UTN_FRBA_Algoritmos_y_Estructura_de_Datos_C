#include <iostream>
#include <stdio.h>

using namespace std;


struct curso {
	int legajo;
	int notaFinal;
	int cantAprob;
	
}alumnos[200];

int main(){
	int prom = 0;
	int i = 0;
	
	for (i = 0; i<=199; i++){
		cout <<"Ingrese numero de legajo: "<< endl; 
		cin >> alumnos[i].legajo;
		cout <<"Ingrese nota final : "<< endl; 
		cin >>alumnos[i].notaFinal;
		cout <<"Ingrese cantidad de aprobados: "<< endl; 
		cin >>alumnos[i].cantAprob;
	}
	
	for (i = 0; i<=199; i++){
		prom = prom + alumnos[i].notaFinal;
		if (alumnos[i].notaFinal>6){
		cout <<"Examen aprobado por alumno con legajo numero: " << alumnos[i].legajo << endl;
	}
    if (alumnos[i].cantAprob <10){
    	cout <<"El alumno con el legajo: " <<alumnos[i].legajo << " Aprobo "<< alumnos[i].cantAprob << endl;
	}
	 }
	 cout <<"El promedio es:" <<prom/200<< endl;
	
	return 0;
}
