#include <iostream>
using namespace std;

/***
   Nos peden calcular un descuento a los productos que supern los $10000
   El descuento a aplicar es del 10%

   Hacer un programa que solicte el monto del producto y muestre el monto a pagar.

   DE:
      montoProducto

   DS:
      montoAPagar
   
   op:
      montoAPagar = montoProducto => montoProducto <= 10000
      montoAPagar = montoProducto * 0.9f => montoProducto > 10000
      
   Estrategia:
      pedir el monto
      calcular monto final
      mostrar monto final
   
*/

int main() {
   /// declaro vaiables
   float montoProducto, montoFinal;
   
   /// pido los datos
   cout << "Ingres monto de procuto: ";
   cin >> montoProducto;
   
   /// calculo monto final
   if(montoProducto > 10000){
      /// verdadero 
      montoFinal = montoProducto * 0.9f;
   }
   else{
      /// falso 
      montoFinal = montoProducto;
   }
   
   /// muestro monto final
   cout << "Monto Final: " << montoFinal;
	
	return 0;
}

