#include <iostream>
using namespace std;

void intercambiar(int& num1, int& num2);

void intercambiar(int& num1, int& num2){
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

int main(){
    int a = 10, b = 100;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    intercambiar(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
