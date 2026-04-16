#include <iostream>
using namespace std;

int main(){
    int i, n, positivos;
    positivos = 0;

    for(i=1; i<=5; i++){
        cout << "Número: ";
        cin >> n;

        if (n > 0){
            positivos++; // positivos = positivos + 1;
                        // positivos += 1;
        }
    }
    cout << endl << "Cantidad de positivos ingresados: ";
    cout << positivos << endl;

    return 0;
}
