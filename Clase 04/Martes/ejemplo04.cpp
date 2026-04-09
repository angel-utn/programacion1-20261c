/**
4 Hacer un programa para ingresar cinco números enteros distintos entre sí y
listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Ingresar cinco números enteros distintos: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    cout << endl << endl;
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
    {
        cout << "El mayor es " << n1 << endl;
    }
    else
    {
        if (n2 > n3 && n2 > n4 && n2 > n5)
        {
            cout << "El mayor es " << n2 << endl;
        }
        else
        {
            if (n3 > n4 && n3 > n5)
            {
                cout << "El mayor es " << n3 << endl;
            }
            else
            {
                if (n4 > n5)
                {
                    cout << "El mayor es " << n4 << endl;
                }
                else
                {
                    cout << "El mayor es " << n5 << endl;
                }
            }
        }
    }

    return 0;
}
