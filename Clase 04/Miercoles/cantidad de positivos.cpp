#include <iostream>
using namespace std;

/***
   Hacer un programa que dado una lista de 20 numeros
   muestre la cantidad de numeros positivos.
*/

int main() {
   int cantidad;
   float num;
   
   cantidad = 0; /// contadora de positivos
   
   /// pedir los numero
   for(int i=1; i<=10; i++){
      cout << "Ingresa numero: ";
      cin >> num;
      
      if(num > 0){ /// averiguar si es positivo
         cantidad ++; /// contador
      }
   }

   cout << "Cantidad de positivos son: " << cantidad;
	return 0;
}

