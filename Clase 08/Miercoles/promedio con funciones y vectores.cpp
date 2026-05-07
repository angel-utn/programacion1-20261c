#include <iostream>
using namespace std;

/***
un curso carga las notas de sus 10 estudiantes.
Mostrar la cantidad de notas que superan el promedio.
*/

/// declaracion de funciones (firma o prototipo)
void cargarVector(int vec[], int cant);

int main() {
   int vNum[10];
   /// int vNum2p[7];
   
   int sumaNotas = 0;
   float promedio;
   int cantidad;
   
   /// carga el vector de numeros
   cargarVector(vNum, 10); /// llamador de funcion
   /// cargarVector(vNum2p, 7); /// llamador de funcion
   
   /// sumar el vector
   sumaNotas=0;
   for(int i=0; i<10; i++){
      sumaNotas += vNum[i];
   }
   promedio = (float)sumaNotas / 10;
   
   cout << "Promedio: " << promedio << endl;
   
   /// calcar mayor al promedio
   cantidad = 0;
   for(int i=0; i<10; i++){
      if(vNum[i] > promedio){
         cantidad ++;
      }
   }
   
   cout << "Cantidad mayor al promedio es: " << cantidad << endl;
   
   return 0;
}

void cargarVector(int vec[], int cant){
   
   for(int i=0; i<cant; i++){
      cout << "Ingrese nota: ";
      cin >> vec[i];
   }
}






