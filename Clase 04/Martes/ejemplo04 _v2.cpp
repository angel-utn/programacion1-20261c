/**
4 Hacer un programa para ingresar cinco números enteros distintos entre sí y
listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, maximo;

    cout << "Ingresar número: ";
    cin >> maximo;

    cout << "Ingresar número: ";
    cin >> num;

    if (num > maximo){
        maximo = num;
    }

    cout << "Ingresar número: ";
    cin >> num;

    if (num > maximo){
        maximo = num;
    }

    cout << "Ingresar número: ";
    cin >> num;

    if (num > maximo){
        maximo = num;
    }

    cout << "Ingresar número: ";
    cin >> num;

    if (num > maximo){
        maximo = num;
    }

    cout << endl << endl;
    cout << "El mayor es: " << maximo << endl;

    return 0;
}
