/**
2 Ingresar si la semana comienza en domingo (D) o en lunes (L). Luego ingresar
un número del 1 al 7 e informar el día de la semana correspondiente según la
opción elegida:
Si la semana comienza en domingo: 1 = domingo, 2 = lunes, 3 = martes, 4 =
miércoles, 5 = jueves, 6 = viernes, 7 = sábado.
Si la semana comienza en lunes: 1 = lunes, 2 = martes, 3 = miércoles, 4 = jueves,
5 = viernes, 6 = sábado, 7 = domingo.
*/

#include <iostream>
using namespace std;
#include <string>

int main(){
  int numeroDia;
  char diaInicialSemana;
  string nombreDia = "Desconocido";
  bool datosIncorrectos = false;

  cout << "¿En qué día querés que comience la semana: (D) para Domingo y (L) para Lunes? ";
  cin >> diaInicialSemana;

  cout << "¿Qué número de día querés visualizar (1-7)? ";
  cin >> numeroDia;

  if (diaInicialSemana == 'D'){
    switch(numeroDia){
      case 1:
        nombreDia = "Domingo";
      break;
      case 2:
        nombreDia = "Lunes";
      break;
      case 3:
        nombreDia = "Martes";
      break;
      case 4:
        nombreDia = "Miércoles";
      break;
      case 5:
        nombreDia = "Jueves";
      break;
      case 6:
        nombreDia = "Viernes";
      break;
      case 7:
        nombreDia = "Sábado";
      break;
      default:
        datosIncorrectos = true;
      break;
    }
  }
  else if (diaInicialSemana == 'L'){
    switch(numeroDia){
      case 1:
        nombreDia = "Lunes";
      break;
      case 2:
        nombreDia = "Martes";
      break;
      case 3:
        nombreDia = "Miércoles";
      break;
      case 4:
        nombreDia = "Jueves";
      break;
      case 5:
        nombreDia = "Viernes";
      break;
      case 6:
        nombreDia = "Sábado";
      break;
      case 7:
        nombreDia = "Domingo";
      break;
      default:
        datosIncorrectos = true;
      break;
    }
  }
  else{
    datosIncorrectos = true;
  }

  if (datosIncorrectos == false){
    cout << endl << "El número de día " << numeroDia << " corresponde a " << nombreDia << endl;
  }
  else{
    cout << endl << "Se ingresaron datos incorrectos." << endl;
  }

  return 0;
}
