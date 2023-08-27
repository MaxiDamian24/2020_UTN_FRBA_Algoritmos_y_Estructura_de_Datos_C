#include <iostream>
#include <conio.h>
using namespace std;

	struct Aeronave{
		int identificador;
		char matricula[6];
		char nombre[10];
		int horasDeVuelo;
		int fechaBaja;
	};
	Aeronave aeronaves[10];
	void cargarAeronaves();
	void mostrarAeronaves();
	template <typename T>
	void ordenar(T arr[], int len, int (*criterio)(T,T));
	
	int criterioIdentif(Aeronave ent1, Aeronave ent2);
	int criterioNom(Aeronave ent1, Aeronave ent2);
	
int main () {
	
 cargarAeronaves();
 mostrarAeronaves();
 ordenar<Aeronave>(aeronaves,10,criterioIdentif );
 mostrarAeronaves();
 ordenar<Aeronave>(aeronaves,10,criterioNom );
 mostrarAeronaves();
 	getch();
	return 0;
	
}

	void cargarAeronaves(){
		int i=0;
		for (i=0; i<=9;i++) {
		cout << "Ingrese identificador:";
		cin >> aeronaves[i].identificador;
		cout << "\n";
		cout << " \n Ingrese nombre";
		cin >> aeronaves[i].nombre; 
		
		}
	}
	
	void mostrarAeronaves(){
	int i=0;
	for (i=0; i<=9;i++) {
		cout << aeronaves[i].identificador << " "<< aeronaves[i].nombre<< "\n";
			
		}

	}
	
	template <typename T>
	void ordenar(T arr[], int len, int (*criterio)(T,T)){
		bool ordenado=false;
		while(!ordenado){ ordenado=true;
		for(int i=0; i<len-1; i++){
			if( criterio(arr[i],arr[i+1])>0 ){
				T aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
				ordenado = false;
			}
		}
		}		
	}
	int criterioIdentif(Aeronave ent1, Aeronave ent2){
		return ent1.identificador-ent2.identificador;
	}
	int criterioNom(Aeronave ent1, Aeronave ent2){
		return ent1.nombre>ent2.nombre?1:ent1.nombre<ent2.nombre?-1:0;
	}
	
