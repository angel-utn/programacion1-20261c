#include <iostream>
#include "estadisticas.h"
using namespace std;


void estadistica(std::string nombreGanador, int puntosGanador){
  
  if(puntosGanador > 0){
    cout << "Nombre del ganador: " << nombreGanador << endl;
    cout << "Puntos del ganador: " << puntosGanador << endl;
  }
  else{
    cout << "No hay partidas ganadas por un jugador." << endl;  
  }
  

}
