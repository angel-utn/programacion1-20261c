/*
1 Hacer un programa para ingresar cinco números enteros positivos distintos
entre sí y listar el máximo de ellos.

*/
#include <iostream>
using namespace std;

int main(){
    int i, n, maximo;

    maximo = 0;

    for(i=1; i<=5; i++){
        cout << "Número: ";
        cin >> n;

        if (n > maximo){
            maximo = n;
        }
    }

    cout << endl << "El máximo de la lista es: " << maximo << endl;

    return 0;
}
