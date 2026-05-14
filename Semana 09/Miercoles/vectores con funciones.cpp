#include <iostream>
using namespace std;

/***
   Un programa que se carge 10 numeros y muestre la cantidad de pares
*/

bool esPar(int num);
void cargarVector(int vec[], int cant);
int contarPares(int vec[], int cant);
void mostrarPrimerPares(int vec[], int cant);

int main() {
   const int CANT_NUM = 10;
	int numeros[CANT_NUM];
   int cantidad=0;
   
   cargarVector(numeros, CANT_NUM);
   
   cantidad = contarPares(numeros, CANT_NUM);
   
   cout << "La cantidad de pares son: " << cantidad << endl;
   
   mostrarPrimerPares(numeros, CANT_NUM);
   
	return 0;
}


bool esPar(int num){
   if(num % 2 == 0){
      return true;
   }
   else{
      return false;
   }
}

void cargarVector ( int vec [], int tamanio ){   for (int i=0; i < tamanio ; i ++)   {
      cout << "Ingrese numero: ";      cin >> vec [i];
      /// return; /// vuelve a donde fue llamado   }
   }

int contarPares(int vec[], int cant){
   int cantidad = 0;
   
   for(int i=0; i<cant; i++){
      if(esPar(vec[i])){
         cantidad++;
      }
   }
   
   return cantidad;
}
   
   
void mostrarPrimerPares(int vec[], int cant){
  
   for(int i=0; i<cant; i++){
      if(esPar(vec[i])){
         cout << vec[i] << endl;
         return;
      }
   }
}
   
