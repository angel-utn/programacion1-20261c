#include "funcionesVectores.h"
#include <iostream>
using namespace std;

void mostrarVector(int vec[], int tam, bool horizontal){
    for(int i=0; i<tam; i++){
        if (horizontal){
            cout << vec[i] << " ";
        }
        else{
            cout << vec[i] << endl;
        }
    }
    cout << endl;
}

/**
Ordena un vector de enteros de TAM elementos.
Permite elegir el criterio de ordenamiento siendo:
'A' - Ascendente
'D' - Descendente
*/
void ordenarVector(int vec[], int tam, char &criterioOrdenamiento){

    for (int i = 0; i < tam-1; i++){
        int pos = i;

        for(int j = i + 1; j < tam; j++){
            if (criterioOrdenamiento == 'A'){
                if (vec[j] < vec[pos]){
                    pos = j;
                }
            }
            else{
                if (vec[j] > vec[pos]){
                    pos = j;
                }
            }
        }

        int aux = vec[i];
        vec[i] = vec[pos];
        vec[pos] = aux;
    }
}

bool existeElementoEnVector(int vec[], int tam, int valorBuscado){
   int posicion = buscarElementoEnVector(vec, tam, valorBuscado);
   return (posicion >= 0);
}

int buscarElementoEnVector(int vec[], int tam, int valorBuscado){
    for (int i = 0; i < tam; i++){
        if (vec[i] == valorBuscado){
            return i;
        }
    }
    return -1;
}

