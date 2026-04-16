#include <iostream>
using namespace std;

/**
   Documentar +

   Comentar   -
*/
/**
   Funcion que pide numeros desde el teclaro y muestra cantidad de impares
   
*/
int main() {
   int cantidad, num, c;

   /// Pido la cantidad de datos que luego vamos a ingrear
   cout << "Ingrese cantidad de datos: ";
   cin >> cantidad;
   
   /// aca recorro para pedir cada un o de los datos
   for(int i=1; i<=cantidad; i++){
      
      /// pido cada uno de los dato
      cout << "Ingrese numero: ";
      cin >> num;
      
      /// averiguo si es impar
      if(num%2 != 0){
         c++;
      }
   }
   
   cout << "La cantidad es: " << c;
	
	return 0;
}

