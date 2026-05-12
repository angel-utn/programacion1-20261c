#include <iostream>
using namespace std;

/***
   i = variable de control

   valor inicial => asignacion
   valor final   => condicion 
   incremento    => operacion de incremento

   for(valor inicial; conddicion; incremento){
      operaciones a repetir
   }

*/

int main() {

   int i ;
   
   for(i=1; i<=10; i++){
      cout << "Hola #" << i << endl;
      cout << "Hola linea" << endl;
   }
   
   for(i=10; i<=15; i++){
      cout << "Otro #" << i << endl;
   }
	
	return 0;
}

