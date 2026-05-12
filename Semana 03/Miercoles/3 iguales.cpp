#include <iostream>
using namespace std;

/**
Hacer un programa para que, al ingresar 3 números enteros, muestre el siguiente cartel: 
- todos son positivos (cuando son todos), 
- hay algún número positivo (cuando hay al menos), 
- no hay ningún número positivo (cuando no los hay).

aritmeticos:
   operadores => + - * / %
   operandos => numeros
   resultado => numero

relacionales:
   operadores => > >= < <= != ==
   oprandos => cualquier cosa
   resultado => booleanos (true o false)

Operadores logicos! => 
   operadores => && || !
   operandos => booleanos (true o false)
   resultado => booleanos (true o false)

   && Y => ambos operandos son verdadero 
      true && true => true
      false && true => false
   
   || O => si alguno es verdadero
      true || true => true
      true || false => true
      false || false => false

   
   true || false && true => true + false * true => 1 + 1 * 0 => 1 + 0 => 1

   || => +
   && => *

   true => 1
   false => 0


   true && (true || true) => true * (true + true) => 1 * (1 + 1) => 1 * 1 => 1

*/


int main() {
   int num1, num2, num3;
   
   cout << "Ingrese un numero: ";
   cin >> num1; /// pide un numero y lo almacena en la variable
   
   cout << "Ingrese un numero: ";
   cin >> num2; /// pide un numero y lo almacena en la variable
   
   cout << "Ingrese un numero: ";
   cin >> num3; /// pide un numero y lo almacena en la variable
   
   if(num1 > 0 && num2 > 0 && num3 > 0){
      cout << "Todos son numeros positivos" << endl;
   }
   else if(num1 > 0 || num2 > 0 || num3 > 0){
         cout << "Alguno es numeros positivos" << endl;
   }
   else{
      cout << "No hay numeros positivos" << endl;   
   }   
	
	return 0;
}

