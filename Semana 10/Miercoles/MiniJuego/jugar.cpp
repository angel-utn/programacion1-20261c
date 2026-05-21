#include <iostream>
#include "jugar.h"
using namespace std;


int tirarDado()
{
    int valorDado;
    valorDado = (rand() % 6) + 1;
    return valorDado;
}

void tirarDados(int dados[5]) {
    for (int i = 0; i < 5; i++) {
        dados[i] = tirarDado();
    }
}

int calcularMayor(int vec[], const int CANT_ELEMENTOS)
{
    int numMayor;
    numMayor = vec[0];

    for(int i = 0; i< CANT_ELEMENTOS; i++)
    {
        if(vec[i] > numMayor)
        {
            numMayor = vec[i];
        }
    }
    return numMayor;
}

int calcularMenor(int vec[], const int CANT_ELEMENTOS)
{
    int numMenor;
    numMenor = vec[0];
    for(int i = 0; i<CANT_ELEMENTOS; i++)
    {
        if(vec[i] < numMenor)
        {
            numMenor = vec[i];
        }
    }
    return numMenor;
}

int determinarPuntosRonda(int dados[5]){

    int mayor = calcularMayor(dados, 5);
    int menor = calcularMenor(dados, 5);

    return mayor-menor;

}

string pedirNombreJugador(){
    string nombreJugador;
    char confirmar;

    do{
        cout << "::::: Nombre del jugador :::::" << endl;
        cin >> nombreJugador;
        cout << "Confirmar (S/N): ";
        cin >> confirmar;
        cout << endl;

    }while(confirmar != 'S');

    return nombreJugador;
}

void mostrarDadosRonda(int dados[5], string nombreJugador){

    cout << "Jugador: " << nombreJugador << endl;
    cout << "Dados: ";
    int i;
    for (i=0; i<5; i++){
        cout << "[" << dados[i] << "] ";
    }
    cout << endl << endl;
}

void mostrarPantallaGanador(string nombreJugador1, int puntosTotalesJ1, string nombreJugador2, int puntosTotalesJ2, int rondas){

    string nombreGanador;
    int puntajeGanador;

    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl;

    if (puntosTotalesJ1 == puntosTotalesJ2){
        cout << nombreJugador1 << " empató con " << nombreJugador2 << " con " << puntosTotalesJ1 << " puntos en " << rondas << " rondas" << endl;
    }
    else if (puntosTotalesJ1 > puntosTotalesJ2){
        nombreGanador = nombreJugador1;
        puntajeGanador = puntosTotalesJ1;
    }
    else{
        nombreGanador = nombreJugador2;
        puntajeGanador = puntosTotalesJ2;
    }

    cout << "El ganador fue " << nombreGanador << " con " << puntajeGanador << " puntos en " << rondas << " rondas." << endl;

    cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
}

void jugar(std::string& nombreGanador, int& puntosGanador){
    system("cls");
    string nombreJugador;
    int puntosTotalesJ1=0, puntosTotalesJ2=0, ronda=0;
    int puntosRondaJ1=0, puntosRondaJ2=0;
    int tiradaDados[5];

    nombreJugador = pedirNombreJugador();

    cout << ":::: Bienvenido " << nombreJugador << endl;

    while (puntosTotalesJ1 < 25 && puntosTotalesJ2 < 25){
        ronda++;
        cout << ":::: Ronda " << ronda << " ::::" << endl;

        tirarDados(tiradaDados);
        mostrarDadosRonda(tiradaDados, nombreJugador);
        puntosRondaJ1 = determinarPuntosRonda(tiradaDados);

        tirarDados(tiradaDados);
        mostrarDadosRonda(tiradaDados, "CPU");
        puntosRondaJ2 = determinarPuntosRonda(tiradaDados);

        puntosTotalesJ1 += puntosRondaJ1;
        puntosTotalesJ2 += puntosRondaJ2;

        cout << nombreJugador << " " << puntosRondaJ1 << " puntos. Acumulados: " << puntosTotalesJ1 << endl;
        cout << "CPU " << puntosRondaJ2 << " puntos. Acumulados: " << puntosTotalesJ2  << endl;

        cout << endl;
        system("pause >nul");
    }
    
    if(puntosTotalesJ1 > puntosTotalesJ2){
      nombreGanador = nombreJugador;
      puntosGanador = puntosTotalesJ1;
    }
    
    system("cls");
    mostrarPantallaGanador(nombreJugador, puntosTotalesJ1, "CPU", puntosTotalesJ2, ronda);

}
