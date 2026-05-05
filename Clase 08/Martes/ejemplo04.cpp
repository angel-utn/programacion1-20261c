#include <iostream>
using namespace std;

void duplicar(float &numero);

void duplicar(float &numero){
  numero = numero * 2;
}

int main(){

    float n;
    cout << "Ingresar un número para duplicarlo: ";
    cin >> n;

    duplicar(n);

    cout << "El valor de n es: " << n;

    return 0;
}
