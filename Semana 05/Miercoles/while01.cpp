#include <iostream>
using namespace std;

/**
   Hacer un programa que dado una lista de numeros que finaliza con cero
   mostrar cuantos de ellos son positivos.

2
5
3
9
0 <--- Valor centinela

*/

int main() {
   int cant;
   float numero;
   
   cout << "Ingrese el numero: ";
   cin >> numero;
   
   cant = 0;
   while(numero != 0){
      
      if(numero > 0){
         cant++;
      }
      
      cout << "Ingrese el numero: ";
      cin >> numero;   
   }
   
   cout << "La cantidad de positivos ingresos son: " << cant << endl;
   
   
	
	return 0;
}

