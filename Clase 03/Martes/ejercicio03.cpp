/*
  3 Se ingresa el importe de una venta y la forma de pago. Se deben aplicar
recargos o descuentos dependiendo de la forma de pago. Listar el total a pagar
por el cliente y el nombre de la forma de pago elegida ("Efectivo", "Tarjeta", "QR", "Cheque").

'E' - 10% de descuento
'T' - 20% de recargo
'Q' - 10% de descuento en importes mayores a $50000
'C' - 5% de recargo y $ 4500 fijo de recargo


Datos de entrada:
----------------
importe --> float
formaPago --> char


Info de salida:
---------------
nombreFormaPago --> string
totalAPagar --> float
*/

#include <iostream>
#include <string>
using namespace std;


int main(){
  float importe, totalAPagar;
  char formaPago;
  string nombreFormaPago;
  bool formaPagoCorrecta = true;

  cout << "Ingresa el importe de la venta: $ ";
  cin >> importe;

  cout << "Ingresa la forma de pago (E, T, Q, C): ";
  cin >> formaPago;

  // Determinar el total a pagar y el nombre de la forma de pago
  switch (formaPago){
    case 'E':
    case 'e':
    case '1':
      nombreFormaPago = "Efectivo";
      totalAPagar = importe * 0.9;
    break;
    case 'T':
    case 't':
    case '2':
      nombreFormaPago = "Tarjeta";
      totalAPagar = importe * 1.2;

    break;
    case 'Q':
    case 'q':
    case '3':
      nombreFormaPago = "QR";

      if (importe > 50000){
        totalAPagar = importe * 0.9;
      }
      else{
        totalAPagar = importe;
      }

    break;

    case 'C':
    case 'c':
    case '4':
      nombreFormaPago = "Cheque";
      totalAPagar = (importe * 1.05) + 4500;

    break;

    default:
      cout << endl << "Forma de pago incorrecta" << endl;
      formaPagoCorrecta = false;
    break;
  }

  if (formaPagoCorrecta == true){
    cout << endl << endl;
    cout << "Forma de pago elegida " << nombreFormaPago << endl;
    cout << "Total a pagar $ " << totalAPagar << endl;
  }

  return 0;
}







