/*
    2 Hacer un programa para ingresar cinco números enteros distintos entre sí y
    listar el máximo de ellos. Los números pueden ser negativos, cero o positivos.
    NOTA: Resolverlo de manera tal que los números puedan ser todos negativos,
    ceros, todos positivos o combinaciones de todos los casos.
*/
#include <iostream>
using namespace std;

int main(){
    int i, n, maximo;

    cout << "Número: ";
    cin >> maximo;

    for(i=1; i<=4; i++){
        cout << "Número: ";
        cin >> n;

        if (n > maximo){
            maximo = n;
        }
    }

    cout << endl << "El máximo de la lista es: " << maximo << endl;

    return 0;
}
