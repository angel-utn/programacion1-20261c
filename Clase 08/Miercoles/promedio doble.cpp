#include <iostream>
using namespace std;

/***
   un curso carga las notas de sus 10 estudiantes.
   Mostrar la cantidad de notas que superan el promedio.
*/

int main() {
   int n;
   int sumaNotas = 0;
   float promedio;
   int cantidad;
   /// int n1, n2, n3...
   
   for(int i=1; i<=10; i++){
      cout << "Ingrese nota: ";
      cin >> n;
      
      sumaNotas += n;
   }
   
   promedio = (float)sumaNotas / 10;
   
   cout << "Promedio: " << promedio << endl;
   
   cantidad = 0;
   for(int i=1; i<=10; i++){
      cout << "Ingrese nota: ";
      cin >> n;
      
      if(n > promedio){
         cantidad ++;
      }
   }
   
   cout << "Cantidad mayor al promedio es: " << cantidad << endl;
	
	return 0;
}

