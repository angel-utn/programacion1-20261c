#include <iostream>
using namespace std;

// Declaraciones
int CalcularMaximo(int n1, int n2);
int CalcularMinimo(int n1, int n2);
int CalcularNumeroDelMedio(int n1, int n2, int n3);
void ordenar3(int &n1, int &n2, int &n3);
void intercambiar (int &a, int &b);

// Definiciones
int CalcularMaximo(int n1, int n2){
    if (n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int CalcularMinimo(int n1, int n2){
    if (n1 < n2){
        return n1;
    }
    else{
        return n2;
    }
}

int CalcularNumeroDelMedio(int n1, int n2, int n3){

    int maximo, minimo;
    maximo = CalcularMaximo(n1, n2);
    maximo = CalcularMaximo(maximo, n3);

    //maximo = CalcularMaximo(CalcularMaximo(n1, n2), n3);

    minimo = CalcularMinimo(n1, n2);
    minimo = CalcularMinimo(minimo, n3);

    //minimo = CalcularMinimo(CalcularMinimo(n1, n2), n3);

    if (n1 != maximo && n1 != minimo){
        return n1;
    }
    else if(n2 != maximo && n2 != minimo){
        return n2;
    }
    else{
        return n3;
    }
}

void intercambiar(int& a, int& b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void ordenar3(int &n1, int &n2, int &n3){
    if (n1 > n2){
        intercambiar(n1, n2);
    }
    if (n2 > n3){
        intercambiar(n2, n3);
    }
    if (n1 > n2){
        intercambiar(n1, n2);
    }
}


int main(){

    int a, b, c;
    // int maximo, minimo;

   // int medio;

    cout << "Ingrese tres números: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

   /*
    maximo = CalcularMaximo(a, b);
    minimo = CalcularMinimo(a, b);

    cout << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
   */

   /*
   medio = CalcularNumeroDelMedio(a, b, c);
   cout << "El número del medio es: " << medio << endl;
   */

   ordenar3(a, b, c);
   cout << endl << "Los nros ordenados son: " << a << " " << b << " " << c << endl;

   return 0;
}
