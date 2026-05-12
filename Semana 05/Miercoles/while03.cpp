#include <iostream>
using namespace std;

/**
   Hacer un programa que pida como maximo 10 numeros
   calcular la cantidad de numeros pares ingresados.
   En caso de ingrear un numero cero el programa de finalizar
   el cero se considera como parte de la lista.
*/

int main() {
   int num;
   int cant_pares = 0;
   int cant_num = 0;
   
   do{
      cout << "Ingrese numero: ";
      cin >> num;
      cant_num++;
      
      if(num % 2 == 0){
         cant_pares ++;
      }
      
   }while(num != 0 && cant_num != 10);
   
   cout << "La cantidad de pares son: " << cant_pares << endl;
	
	return 0;
}

