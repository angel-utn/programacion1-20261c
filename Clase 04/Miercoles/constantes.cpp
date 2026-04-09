#include <iostream>
using namespace std;

/**
   hacer un programa que dado un importe aumente un 10% y lo muestre
*/

/// UPPER_CASE
int main() {
   const float FACTOR_DESCUENTO = 0.9; 
	float importe, resultado;
   
   cout << "Ingrese el importe: ";
   cin >> importe;
   
   resultado = importe * FACTOR_DESCUENTO; /// Numero Magico!
   
   cout << "El resultado es: " << resultado;

	return 0;
}

