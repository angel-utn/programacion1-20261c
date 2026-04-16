#include <iostream>
using namespace std;

/***
   Un camion de carga puede transportar hasta 200k 
   nos piden hacer un programa que les solicite al usuario
   el peso de cada paquete y muestre la cantidad de paquetes 
   que se van a transportar.
   el programa debe finalicar cunado el camion llegue a su limite.
*/

int main() {
      
   int peso, pesoTotal = 0, cant_paq =0;
   
   cout << "Ingrese peso: ";
   cin >> peso;
   
   while((pesoTotal + peso) <= 200){
   
      pesoTotal += peso;
      cant_paq++;
      
      cout << "Hasta ahora vamos cargando " << pesoTotal << " kg" << endl;
      
      cout << "Ingrese peso: ";
      cin >> peso;
   }
   
   cout << "El peso enviado es: " << pesoTotal << endl;
   cout << "La cantidad de paquetes son: " << cant_paq << endl;
   
   
   
	
	return 0;
}

