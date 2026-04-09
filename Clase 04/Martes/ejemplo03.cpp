/**
  3 Un estacionamiento cobra según el tipo de vehículo: moto (tipo 'M') $500, auto
(tipo 'A') $1200, camioneta (tipo 'C') $1800 y camión (tipo 'T') $3000 por hora.
Ingresar el tipo de vehículo y la cantidad de horas (int).
Además, dependiendo del tipo de cliente aplica una serie de descuentos.
Cliente Estándar - 'S' - 0% de descuento
Cliente Regular  - 'R' - 5% de descuento
Cliente VIP      - 'V' - 10% de descuento
Calcular e informar el total a pagar con el siguiente formato:
*/

#include <iostream>
using namespace std;

int main(){

  int cantidadHoras;
  char tipoVehiculo, tipoCliente;
  string nombreTipoVehiculo, nombreTipoCliente;
  float subtotal, descuento, total;

  const float VH_MOTO = 500, VH_AUTO = 1200, VH_CAMIONETA = 1800, VH_CAMION = 3000;
  const float FACTOR_DTO_ESTANDAR = 0, FACTOR_DTO_REGULAR = 0.05, FACTOR_DTO_VIP = 0.1;

  cout << "Cantidad horas de estadía: ";
  cin >> cantidadHoras;

  cout << "Tipo de vehículo: ";
  cin >> tipoVehiculo;

  cout << "Tipo de cliente: ";
  cin >> tipoCliente;

  // Resolvemos subtotal, tipo vehiculo
  switch (tipoVehiculo){
    case 'M': // Moto
    case 'm':
      nombreTipoVehiculo = "Moto";
      subtotal = cantidadHoras * VH_MOTO;

    break;

    case 'A': // Auto
    case 'a':
      nombreTipoVehiculo = "Auto";
      subtotal = cantidadHoras * VH_AUTO;

    break;

    case 'C': // Camioneta
    case 'c':
      nombreTipoVehiculo = "Camioneta";
      subtotal = cantidadHoras * VH_CAMIONETA;

    break;

    case 'T': // Camión
    case 't':
      nombreTipoVehiculo = "Camión";
      subtotal = cantidadHoras * VH_CAMION;

    break;
  }

  // Resolvemos tipo de cliente y descuento en pesos
  switch (tipoCliente){
    case 'S':
    case 's':
      nombreTipoCliente = "Estándar";
      descuento = subtotal * FACTOR_DTO_ESTANDAR;

    break;

    case 'R':
    case 'r':
      nombreTipoCliente = "Regular";
      descuento = subtotal * FACTOR_DTO_REGULAR;

    break;

    case 'V':
    case 'v':
      nombreTipoCliente = "VIP";
      descuento = subtotal * FACTOR_DTO_VIP;

    break;
  }

  total = subtotal - descuento;

  cout << endl << endl;
  cout << "ESTACIONAMIENTO C++" << endl;
  cout << "-------------------" << endl;
  cout << "ESTADÍA : " << cantidadHoras <<" horas  " << endl;
  cout << "VEHÍCULO: " << nombreTipoVehiculo << endl;
  cout << "CLIENTE : " << nombreTipoCliente << endl;
  cout << "SUBTOTAL: $ " << subtotal << endl;
  cout << "------------------ " << endl;
  cout << "DESCUENTO: $ " << descuento << endl;
  cout << "------------------ " << endl;
  cout << "TOTAL: $ " << total << endl;


  return 0;
}
