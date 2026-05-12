#include <iostream>
using namespace std;
#include <cctype>

int main(){

    char letra, letraMayuscula;
    cout << "Ingresar letra en minúscula: ";
    cin >> letra;

    letraMayuscula = toupper(letra);

    cout << "La mayúscula de " << letra << " es : " << letraMayuscula << endl;

    return 0;
}
