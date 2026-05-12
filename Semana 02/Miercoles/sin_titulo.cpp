#include <iostream>
using namespace std;






int main() {
   
   int valor, resultado;
   
   
   valor = 5;
   
   resultado = valor;
   
   valor = 10;
   
   resultado += valor;
   
   for(int i; i<10; i++){
      valor = 5;
   
      resultado += valor;
   }
   
   resultado = -10;
   
   cout << resultado << endl;
      
	
	return 0;
}

