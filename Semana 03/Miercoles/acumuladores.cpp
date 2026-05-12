#include <iostream>
using namespace std;

/***
   hacer un programa que se ingrese 3 numeros enteros y 
   muestre el promedio de ellos

   promedio es la suma de todos dividido la cantidad

      /// contadores
      1- se inicializan (generalmente en cero)
         C = 0
      2- operacion
         C = C + 1 => C += 1 => C++
      3- Sulee estar ligado a una condicion
         if(){
            C++
         }

   /// acumuladores
      1- se inicializan (generalmente en cero)
         A = 0
      2- operacion
         A = A + N => A += N
      3- Suele estar ligado a una condicion
         if(){
            A++
         }

*/

int main() {
   int num1;
   int suma = 0;
   
   cout << "Ingrese un numero: ";
   cin >> num1;
   suma += num1;
   
   cout << "Ingrese un numero: ";
   cin >> num1; 
   suma += num1;
   
   cout << "Ingrese un numero: ";
   cin >> num1;
   suma += num1;
   
   cout << "El promedio es: " << (float)(suma)/3 << endl;
   
	
	return 0;
}

