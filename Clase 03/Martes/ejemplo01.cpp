/*
  1 Una persona debe realizar refacciones en la cocina y para ello debe afrontar los
  siguientes gastos:
  - Costo de compra de pintura
  - Renovación de grifería
  - Compra de muebles de cocina
  - Costo de compra de azulejos
  - Mano de obra de pintura y colocación de azulejos

  Se sabe que el costo de mano de obra de pintura y colocación de azulejos es el
  doble del costo de los materiales.

  Quiere un programa que le solicite los gastos y el presupuesto que tiene y
  muestre por pantalla. "Presupuesto insuficiente" o "Presupuesto suficiente". Si
  el presupuesto no es suficiente debe mostrar cuánto dinero falta para cubrir
  todos los gastos.

  Datos de entrada:
  presupuesto -> float
  pintura -> float
  griferia -> float
  muebles -> float
  azulejos -> float

  Proceso:
  - Ingresar datos entrada
  - Calcular mano de obra
  - Sumar todos los gastos
  - Comparar la suma de los gastos con el presupuesto
  - Determinar si es suficiente o insuficiente
  - Calcular el faltante si es insuficiente
  - Mostrar info salida

  Información de salida:
  - Texto que indica "Presupuesto suficiente" o "Presupuesto insuficiente"
  - Si es insuficiente mostramos el faltante -> float

*/
#include <iostream>
using namespace std;

int main(){
  float pintura, muebles, griferia, azulejos, manoDeObra, gastoTotal, presupuesto, faltante = 0;

  cout << "Ingresa el presupuesto: $ ";
  cin >> presupuesto;

  cout << endl << "Ingresa los gastos " << endl;
  cout << "-----------------------" << endl;
  cout << "Pintura:      $ ";
  cin >> pintura;
  cout << "Muebles:      $ ";
  cin >> muebles;
  cout << "Grifería:     $ ";
  cin >> griferia;
  cout << "Azulejos:     $ ";
  cin >> azulejos;

  manoDeObra = (pintura + azulejos) * 2;
  cout << "Mano de obra: $ " << manoDeObra << endl;

  gastoTotal = pintura + muebles + griferia + azulejos + manoDeObra;

  cout << endl << endl;
  if (presupuesto >= gastoTotal){
    cout << "Presupuesto suficiente." << endl;
  }
  else{
    faltante = gastoTotal - presupuesto;
    cout << "Presupuesto insuficiente. Faltante de $ " << faltante << endl;
  }

  return 0;
}



