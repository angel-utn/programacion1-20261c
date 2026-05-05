#include <iostream>
using namespace std;

// Declaración
int sumar(int n1, int n2);
int restar(int n1, int n2);

// Definición
int sumar(int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return resultado;
}
int restar(int n1, int n2){
    int resultado;
    resultado = n1 - n2;
    return resultado;
}

int main()
{
    int num1, num2, suma, resta;
    cout << "Ingresar dos números enteros: " << endl;
    cin >> num1;
    cin >> num2;
    // Llamado
    suma = sumar(num1, num2);
    cout << endl << "La suma es: " << suma << endl;

    suma = sumar(num2, num1);
    cout << endl << "La suma es: " << suma << endl;

    resta = restar(num1, num2);
    cout << endl << "La resta es: " << resta << endl;

    resta = restar(num2, num1);
    cout << endl << "La resta es: " << resta << endl;

    return 0;
}
