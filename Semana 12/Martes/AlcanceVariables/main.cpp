#include <iostream>
using namespace std;

void funcion();
void funcionElian();

/// Variables globales: No utilizar en el Trabajo Practico Integrador.
string nombre = "Elian";
int edad = 20;

int main()
{
    string nombre;
    int edad;

    nombre = "Angel";
    edad = 39;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad  : " << edad << endl;

    cout << endl;
    funcion();
    cout << endl;
    funcionElian();

    return 0;
}

void funcionElian(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad  : " << edad << endl;

}

void funcion(){

    string nombre;
    int edad;

    nombre = "Daniela";
    edad = 28;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad  : " << edad << endl;

}
