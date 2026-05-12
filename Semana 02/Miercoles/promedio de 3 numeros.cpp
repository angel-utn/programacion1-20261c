#include <iostream>
using namespace std;

/***
   Hacer un programa que dado 3 numeros enteros, calcule y muestre el promedio de ellos.

   DE: 
      num1, num2, num3
   
   DS: 
      promedio

   op:
      promedio = (num1 + num2 + num3) / 3


   Estrategia 
   
   pedir los 3 numeros
   calcular promedio de los tres
   mostrar el resultado del promedio

   

*/

int main() {
   int num1, num2, num3;
   float resultado;
   
   cout << "Ingrese numero: ";
   cin >> num1;
   cout << "Ingrese numero: ";
   cin >> num2;
   cout << "Ingrese numero: ";
   cin >> num3;
   ///           10     20     10  => 40
   ///                      40/3
   resultado = (num1 + num2 + num3) / 3.0f;
   
   cout << "Resultado: " << resultado << endl;
  
	return 0;
}

