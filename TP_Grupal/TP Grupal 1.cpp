//============================================================================
// Name        : TP.cpp
// Author      : 
// Version     : 1.0
// Enunciado   :
/*
Empresa Repuestos Automotor:
Una empresa dedicada a la venta de repuestos de autos necesita realizar un relevamiento de dos
códigos(A001 – Parabrisas y A002-Luneta Trasera)  de productos en uno de sus depósitos.
La empresa cuenta con un archivo maestro del deposito con los movimientos de los últimos 2 años
(2019 y 2020):

Clase de Movimientos:
100 = Ingreso de Mercadería.
200 = Transferencia de Ingreso.
201 = Transferencia de salida.
600 = Salida de mercaderías Ventas.

Necesita hacer el relevamiento de la siguiente información para los artículos mencionados:
Datos que necesita conocer:
1) Cual es el stock actual de cada uno de los productos.
2) Cuantas unidades fueron vendidas los últimos 12 meses.
3) Obtener el margen total y promedio del margen mensual cada producto(Precio – Costo) de
los últimos dos años.

Estrategia de Resolución:


1) Stock actual:

a) Abrir y recorrer el archivo.
b) Realizar un insertar ordenado por código de productos en un nuevo vector.
c) Recorrer el vector generado y guardar los datos en un archivo.
d) Abrir el archivo y recorrerlo haciendo un corte de control por producto sumando la cantidad
de unidades que correspondan a ingresos(mov. 100 y 200) y restando las que correspondan a
egresos(mov. 201 y 600).
e) Mostrar por código de productos el stock actual para cada código.
f) Cerrar el archivo.


2) Unidades vendidas de los últimos 12 meses:

a) Abrir y recorrer el archivo.
b) Realizar un insertar ordenado por código de productos en un nuevo vector.
c) Recorrer el vector generado y guardar los datos en un archivo.
d) Abrir el archivo y recorrerlo haciendo un corte de control por producto, controlando que los
movimientos correspondan al rango de fecha de los últimos 12 meses (2019/01/01 a 2019/12/31) y
el código de movimientos 600.
e) Mostrar por código de productos las unidades vendidas.
f) Cerrar el archivo.


3) Obtener el margen de ventas:

a) Abrir y recorrer el archivo.
b) Realizar un insertar ordenado por código de productos en un nuevo vector.
c) Recorrer el vector generado y guardar los datos en un archivo.
d) Abrir el archivo y recorrerlo haciendo un corte de control por producto.
Tomar solo los movimientos de ventas(600).
El margen se obtiene de restar el Precio – Costo.
Acumular en una variable el total del margen por producto.
e) Mostrar por código de productos las unidades vendidas.
f) Calcular el promedio del margen mensual dividiendo el total del margen sobre la cantidad de
meses.
g) Mostrar por código de productos el promedio del margen mensual.
h) Cerrar el archivo.

 */
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

struct Deposito{
   int codproduct;
   int fecha;
   int tipomov;
   int cantunid;
   int costo;
   int precio;
};

int main() {
   FILE *Dep;
   Dep = fopen ("Deposito.dat","wb");
   Deposito carga;

   cout<<"Codigo: "<<endl;
   cin>>carga.codproduct;
   while (carga.codproduct>0){
      cout<<"Fecha: "<<endl;
      cin>>carga.fecha;
      cout<<"Tipo de mov: "<<endl;
      cin>>carga.tipomov;
      cout<<"Cantidad de unidades: "<<endl;
      cin>>carga.cantunid;
      cout<<"Costo: "<<endl;
      cin>>carga.costo;
      cout<<"Precio: "<<endl;
      cin>>carga.precio;

      fwrite(&carga,sizeof(struct Deposito),1,Dep);
      cout<<"Codigo: "<<endl;
      cin>>carga.codproduct;
   }
   fclose (Dep);

	return 0;
}
