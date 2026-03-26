#include <iostream>
using namespace std;
/**
   Hacer un programa que solicite un numero entero
   e indique si dicho numero es par o impar

   un numero par es un numero entero que es divisible por dos

   %

   
*/

int main() {
	/// 2 4 6 8 10 
   /// 1 3 5 7 9
   
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero % 2 == 0){
      cout << "El numero es par"<<endl;
   }
   else{
      cout << "El numero es impar"<<endl;
   }
   
	return 0;
}

