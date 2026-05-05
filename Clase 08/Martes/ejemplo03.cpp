#include <iostream>
using namespace std;

void mostrarSaludo(string nombre, int hora);

void mostrarSaludo(string nombre, int hora){
    if (hora >= 7 && hora <= 12){
        cout << "Buenos días " << nombre << endl;
    }
    else if (hora >= 13 && hora <= 19){
        cout << "Buenas tardes " << nombre << endl;
    }
    else{
        cout << "Buenas noches " << nombre << endl;
    }
}

int main(){
    string nombre;
    int hora;

    cout << "Decime tu nombre: ";
    cin >> nombre;
    cout << "Decime qué hora es: ";
    cin >> hora;

    mostrarSaludo(nombre, hora);

    return 0;
}
