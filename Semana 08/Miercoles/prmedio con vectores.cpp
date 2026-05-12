#include <iostream>
using namespace std;

/***
un curso carga las notas de sus 10 estudiantes.
Mostrar la cantidad de notas que superan el promedio.

2
5
6
3
4
5
10
10
10
10



*/

int main() {
   int vNum[10];
   
   int sumaNotas = 0;
   float promedio;
   int cantidad;
   
   /// carga el vector de numeros
   for(int i=0; i<10; i++){
      cout << "Ingrese nota: ";
      cin >> vNum[i];
   }
   
   /// sumar el vector
   sumaNotas=0;
   for(int i=0; i<10; i++){
      sumaNotas += vNum[i];
   }
   promedio = (float)sumaNotas / 10;
      
   cout << "Promedio: " << promedio << endl;
      
   cantidad = 0;
   for(int i=0; i<10; i++){
      if(vNum[i] > promedio){
         cantidad ++;
      }
   }
      
   cout << "Cantidad mayor al promedio es: " << cantidad << endl;
      
   return 0;
}

