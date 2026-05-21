#pragma once
#include <string>

void jugar(std::string& nombreGanador, int& puntosGanador);

std::string pedirNombreJugador();
int tirarDado();
void tirarDados(int dados[5]);
void mostrarDadosRonda(int dados[5], std::string nombreJugador);
int determinarPuntosRonda(int dados[5]);
int calcularMayor(int vec[], const int CANT_ELEMENTOS);
int calcularMenor(int vec[], const int CANT_ELEMENTOS);
void mostrarPantallaGanador(std::string nombreJugador1, int puntosTotalesJ1, std::string nombreJugador2, int puntosTotalesJ2, int ronda);


