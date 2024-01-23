#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumnos{
	
	int NRO_LEG;
	char Especialidad;
	int CMC;
	
}alum;

struct Alumnos_s{
	
	int NRO_LEG;
	int CMC;
	
}alum_s;

int main (){
	FILE * ALU_S = fopen ("ALU_S.DAT", "wb");
	Alumnos_s raux_s;
	
	
	FILE * ALU_G = fopen ("ALU_G.DAT", "rb");
	Alumnos raux;
	
	fread(&raux, sizeof (struct Alumnos), 1 , ALU_G);
	while (!feof(ALU_G)){
		if ( raux.Especialidad = 'S'){
			raux_s.NRO_LEG = raux.NRO_LEG;
			raux_s.CMC = raux.CMC;
		}
		fwrite (&raux_s, sizeof (struct Alumnos_s), 1, ALU_S);
		
		fread(&raux, sizeof (struct Alumnos), 1 , ALU_G);
	}
		fclose (ALU_S);
		fclose (ALU_G);


	return 0;
}
