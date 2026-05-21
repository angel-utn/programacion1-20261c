#include <iostream>
#include "jugar.h"
#include "estadisticas.h"

using namespace std;

void mostrarMenu(){
    cout << "=========== JUEGO DE DADOS VS CPU ===========" << endl;
    cout << "1. Jugar (vs CPU)" << endl;
    cout << "2. Estadisticas (Historial)" << endl;
    cout << "3. Salir" << endl; cout << "=============================" << endl;
}

void ejecutarMenu(){
  int opcionMenu;
  string nombreGanador;
  int puntosGanador=0;

    do{
        system("cls");
        mostrarMenu();

        cin >> opcionMenu;

        switch(opcionMenu){
            case 1:
                 jugar(nombreGanador, puntosGanador);
            break;
            case 2:
                estadistica(nombreGanador, puntosGanador);
            break;
            case 3:
                cout << "Gracias por usar el programa!" << endl;
                return;
            break;
            default:
                cout << "Opcion incorrecta." << endl;
            break;
        }
        system("pause");
    }while(true);
}
