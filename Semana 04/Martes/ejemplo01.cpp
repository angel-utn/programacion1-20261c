/**
  1 Ingresar la temperatura corporal de una persona en grados Celsius.
Informar "Hipotermia" si es menor a 36°,
"Normal" si está entre 36° y 37.5° inclusive
"Fiebre" si supera los 37.5°.
El programa debe emitir un solo cartel.
*/
#include <iostream>
using namespace std;
#include <string>

int main(){
  float temperatura;
  string estadoTempPersona = "";

  cout << "Temperatura en Cº: ";
  cin >> temperatura;

  /// Proceso
  if (temperatura < 36){
    estadoTempPersona = "Hipotermia";
  }
  else{
    if (temperatura >= 36 && temperatura <= 37.5){
      estadoTempPersona = "Temperatura normal";
    }
    else{
      estadoTempPersona = "Fiebre";
    }
  }

  cout << endl << endl;
  cout << "La persona tiene: " << estadoTempPersona << endl;

  return 0;
}
