#include <iostream>
#include <stdio.h>

using namespace std;

struct habitaciones{
	int numHabit;
	char tipo;
	int diasDisp;
	int precioDia;
};

struct Nodo{
	habitaciones info;
	Nodo *sgte;
};

void insertarOrdenado (Nodo*&L, habitaciones valor);
void ordenar (Nodo*&L);
void liberar (Nodo*&L);

int main (){
	
	FILE*Archivo;
	
	Archivo =fopen ("Verano2021.dat", "rb");
	
	habitaciones Raux;
	
	Nodo *ListaOrd=NULL; //a
	Nodo *ListaCantHabit; //b
	
	fread(&Raux,sizeof(struct habitaciones), 1, Archivo);
	
	while (!feof(habitaciones)){
		insertarOrdenado(ListaOrd, Raux); //Ordenado por codigo
		fread(&Raux, sizeof(struct habitaciones),1, Archivo);	
	}
fclose (Archivo);

Archivo = fopen ("Verano2021.dat", "wb");
Nodo *aux =ListaOrd;

while(aux !=NULL){
	fwrite (&aux->info, sizeof(struct habitaciones), 1,Archivo);
	aux =aux->sgte;
}
fclose (Archivo);

liberar (ListaOrd);

aux =ListaCantHabit;

int cont =0;

while (aux !=NULL&& cont >85){
	cout << "Habitacion numero: " << aux->info.numHabit << endl;
	cout << "Tipo: " << aux->info.tipo << endl;
	cout << "Disponible los dias: " << aux->info.diasDisp << endl;
	cout << "Precio: " << aux->info.precioDia << endl;
	cont++;
	aux =aux->sgte;
}
liberar (ListaCantHabit);

return 0;

}

void insertarOrdenado (Nodo*&L, habitaciones valor){
   Nodo * nuevo = new Nodo();
   nuevo->info.numHabit =valor.numHabit;
   nuevo->info.tipo =valor.tipo;
   nuevo->info.diasDisp =valor.diasDisp;
   nuevo->info.precioDia =valor.precioDia;
   nuevo->sgte = NULL;

   Nodo*aux=L;
   Nodo*ant=NULL;

   while (aux!=NULL && aux->info.numHabit < valor.numHabit){
      ant=aux;
      aux=aux->sgte;
   }
   if(ant==NULL){
      L=nuevo;
   } else {
      ant->sgte=nuevo;
   }
   nuevo->sgte=aux;
}

void liberar (Nodo*&L){
   Nodo*aux;
   while (L!=NULL){
      aux=L;
      L=L->sgte;
      delete (aux);
   }
}

void ordenar (Nodo*&L){
   Nodo* L2= NULL;
   int temp;

   while (L!=NULL){
      temp = eliminarPrimerNodo (L);
      insertarOrdenado (L2,temp);
   }
   L=L2;
}
