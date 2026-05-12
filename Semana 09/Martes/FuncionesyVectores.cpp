#include <iostream>
using namespace std;

void AsignarNombreADias(string nombresDias[7]);
void MostrarNombresDias(int numeroDia);
string DevolverNombreDia(int numeroDia);

void AsignarNombreADias(string nombresDias[7]){
    nombresDias[0] = "Lunes";
    nombresDias[1] = "Martes";
    nombresDias[2] = "Miercoles";
    nombresDias[3] = "Jueves";
    nombresDias[4] = "Viernes";
    nombresDias[5] = "Sabado";
    nombresDias[6] = "Domingo";
}

void MostrarNombresDias(int numeroDia){
    string dias[7];
    AsignarNombreADias(dias);

    int posicionInicial = numeroDia - 1;
    int i;

    for(i = posicionInicial; i < 7; i++){
        cout << dias[i] << endl;
    }
}

string DevolverNombreDia(int numeroDia){
    string dias[7];
    AsignarNombreADias(dias);

    if (numeroDia >= 1 && numeroDia <= 7){
        return dias[numeroDia-1];
    }
    else{
        return "";
    }
}

int main(){

    MostrarNombresDias(5);
    cout << endl;
    string nombre = DevolverNombreDia(3);
    cout << nombre << endl;

    return 0;
}
