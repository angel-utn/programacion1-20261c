#include <iostream>
using namespace std;

/**

crar un vector de 10 elementos

cargar cada elemento con un 5

sumar el elemento 3 con el 4 y guardarlo en el 5

mostrar el elemento 5
*/

void cargarVector(int vec[], int cant);


int main() {
   const int j = 10;
   int vecNumeros[j]; /// CONSTANTE - Array de tamaño estatico
   int n;
   
   cargarVector(vecNumeros, j);
   
   vecNumeros[4] = vecNumeros[2] + vecNumeros[3];
   
   cout << vecNumeros[4] << endl;
   
   cout << "-------------------" << endl;
   
   for(int i=0; i<10; i++){
      cout << vecNumeros[i] << endl;
   }
   
   cout << "Ingres el elemento que quier ver (1 - 10): ";
   cin >> n;
   
   cout << vecNumeros[n - 1];
	
	return 0;
}


void cargarVector(int vec[], int cant){
   
   for(int i=0; i<cant; i++){
      cout << "Ingrese nota: ";
      cin >> vec[i];
   }
}





