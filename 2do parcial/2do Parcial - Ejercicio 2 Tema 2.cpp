#include <iostream>
#include <stdio.h>
unsing namespace std;

struct rvec1{
	int numHabit;
	char Habit;
	int cantDiasDisp;
};

struct rlista{
	int NumHabit;
	int cantDias;	
};
	
struct Nodo{
   rlista info;
   Nodo *sgte;
};

int buscar (rvec1 vec[], int len , int valor);

int main (){
	
	rvec1 Reservas [700];
	
	int len1;
	
	Nodo *Lista;
	
	Nodo *aux= Lista;
	
	int auxPos;
	
	while (aux !=NULL){
		auxPos= buscar (Reservas, len, auxPos->info.NumHabit);
		Reservas[auxPos].cantDiasDisp = Reservas[auxPos].cantDiasDisp + auxPos->info.cantDias;
		auxPos = auxPos->sgte;
	}
	
	return 0;
}
