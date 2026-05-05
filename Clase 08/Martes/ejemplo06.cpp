/*
6. Escribir una función llamada realizarDivisionEntera
que reciba dos enteros por valor y el cociente y el resto de la división por referencia
entera. La función debe indicar si la operación fue posible o no.
Cuando no sea posible dividir, la función devolverá false.
Cuando sí sea posible dividir, la función devolverá true.

La función no debe mostrar nada.
*/

// Declaración de la función
bool realizarDivisionEntera(int dividendo, int divisor, int &cociente, int &resto);

bool realizarDivisionEntera(int dividendo, int divisor, int &cociente, int &resto){
    if (divisor == 0){
        return false;
    }
    else{
        cociente = dividendo / divisor;
        resto = dividendo % divisor;
        return true;
    }
}

#include <iostream>
using namespace std;

int main(){

    int n1, n2, cociente, resto;
    bool pudoDividir;

    cout << "Ingresar el valor de n1: ";
    cin >> n1;

    cout << "Ingresar el valor de n2: ";
    cin >> n2;

    pudoDividir = realizarDivisionEntera(n1, n2, cociente, resto);

    if (pudoDividir){
        cout << "Cociente: " << cociente << endl;
        cout << "Resto   : " << resto << endl;
    }
    else{
        cout << "No se puede dividir por cero" << endl;
    }


    return 0;
}
