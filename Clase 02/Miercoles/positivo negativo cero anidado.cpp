#include <iostream>
using namespace std;
/**
hacer un programa que dana un numero muestre si este es
positivo, negativo o cero
*/

int main() {
   float numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero > 0){
      cout << "Es positivo" << endl;
   }
   else{
      if(numero < 0){
         cout << "Es negativo" << endl;
      }
      else{
         cout << "Es cero" << endl;
      }   
   }

   return 0;
}

