#include <iostream>
using namespace std;

/**
Hacer un programa para que, al ingresar 3 números enteros, muestre el siguiente cartel: 
- todos son positivos (cuando son todos), 
- hay algún número positivo (cuando hay al menos), 
- no hay ningún número positivo (cuando no los hay).


   contar

   /// contadores
   1- se inicializan (generalmente en cero)
      C = 0
   2- operacion
      C = C + 1 => C += 1 => C++
   3- Esta ligado a una condicion
      if(){
         C++
      }

*/


/// 3 5 6

int main() {
   int num1, num2, num3;
   int cant_pos = 0;
   
   cout << "Ingrese un numero: ";
   cin >> num1; /// pide un numero y lo almacena en la variable
  
   cout << "Ingrese un numero: ";
   cin >> num2; /// pide un numero y lo almacena en la variable
   
   cout << "Ingrese un numero: ";
   cin >> num3; /// pide un numero y lo almacena en la variable
   
   if(num1 > 0){
      cant_pos++;
   }
   
   if(num2 > 0){
      cant_pos++;
   }
   
   if(num3 > 0){
      cant_pos++;
   }
   
   if(cant_pos == 3){
      cout << "Todos son numeros positivos" << endl;
   }
   else if(cant_pos > 0){
      cout << "Alguno es numeros positivos" << endl;
   }
   else{
      cout << "No hay numeros positivos" << endl;   
   }   
   
   return 0;
}

