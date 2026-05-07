#include <iostream>
using namespace std;



int main() {
   int numeros[6]; /// declarar un array (vector)
   int n;
   
   
   numeros[2] = 5; /// guardamos un 5 en el elemento 3
   
   cout << numeros[2] << endl;
   
   cin >> numeros[3]; /// elemento 4
   
   cout << "Posicion 3: " << numeros[3] << endl;   
   
   numeros[0] = 10; /// no sabe en que indece lo queres... X
   
      
   n = 2;
   numeros[n] = 150;
   cout << numeros[n] << endl;
      
      
      
   
      
   return 0;
}

