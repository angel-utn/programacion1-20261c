#include <iostream>
using namespace std;
#include "funcionesVectores.h"

int main()
{
    // Algoritmo de selección
    const int TAM = 5;
    int vec[TAM] = {5, -10, 7, -2, 1};
    int valorBuscado;

    mostrarVector(vec, TAM, true);

    cout << "Ingresar un valor a buscar: ";
    cin >> valorBuscado;

    bool existe = existeElementoEnVector(vec, TAM, valorBuscado);
    if (existe){
       cout << "El elemento existe" << endl;
    }
    else{
        cout << "El elemento no existe" << endl;
    }

    int posicion = buscarElementoEnVector(vec, TAM, valorBuscado);

    if (posicion >= 0){
        cout << "Se encuentra en la posicion: " << posicion << endl;
    }

     ordenarVector(vec, TAM, 'A');
     mostrarVector(vec, TAM, true);
     ordenarVector(vec, TAM, 'D');
     mostrarVector(vec, TAM, true);

    return 0;
}
