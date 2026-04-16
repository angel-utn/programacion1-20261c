#include <iostream>
using namespace std;

/**
   Hacer un programa donde se ingrese una lista de numeros 
   que finaliza cuando se ingresa el 3 par
   mostrar la cantidad total de numeros positivos.
*/

int main() {
   int num;
   int cant_pares = 0;
   int cant_pos = 0;
   
   do{
      cout << "Ingrese numero: ";
      cin >> num;
      
      if(num > 0){
         cant_pos++;
      }
      
      if(num % 2 == 0){
         cant_pares++;
      }
      
   }while(cant_pares < 3);
   
	cout << "Cantidad de numeros positivos son: " << cant_pos << endl;
   
	return 0;
}

