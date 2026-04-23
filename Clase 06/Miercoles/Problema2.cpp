#include <iostream>
using namespace std;

int main()
{
    int cantU;
    float peso;
    char tipo;

    int cantLiv = 0, cantMed = 0, cantPes = 0;

    int cantAl = 0, cantBe = 0, cantLi = 0, cantRo = 0;

    int cantPaqA = 0, cantPaqB = 0, cantPaqL = 0, cantPaqR = 0;

    bool paq40A = false, paq40B = false, paq40L = false, paq40R = false;

    const float PESO40 = 40.f;

    cout << "Ingrese cantidad: " << endl;
    cin >> cantU;

    while(cantU != 0)
    {
        cout << "Ingrese peso: " << endl;
        cin >> peso;
        cout << "Ingrese tipo: (1-Alimentos, 2-Bebidas, 3-Limpieza, 4-Ropa)" << endl;
        cin >> tipo;

        //CALCULO PUNTO A
        if (peso < 10)
        {
            cantLiv++;
        }
        else if(peso >= 10 && peso <=20)
        {
            cantMed++;
        }
        else if(peso > 20)
        {
            cantPes++;
        }

        //CALCULOS PUNTO B, C
        switch (tipo)
        {
        case '1':
            cantAl += cantU;
            //cantAl = cantAl + cantU;
            cantPaqA++;
            if(peso > PESO40)
            {
               paq40A = true;
            }
            break;
        case '2':
            cantBe += cantU;
            cantPaqB++;
            if(peso > PESO40)
            {
               paq40B = true;
            }
            break;
        case '3':
            cantLi += cantU;
            cantPaqL++;
            if(peso > PESO40)
            {
               paq40L = true;
            }
            break;
        case '4':
            cantRo += cantU;
            cantPaqR++;
            if(peso > PESO40)
            {
               paq40R = true;
            }
            break;
        default:
            break;
        }

        cout << "PEDIDO CARGADO EXITOSAMENTE" << endl;

        cout << "Ingrese cantidad: " << endl;
        cin >> cantU;

    }

    //INFORMES
    //PUNTO A
    cout << "Cantidad de entregas LIVIANAS: " << cantLiv << " unidades" << endl;
    cout << "Cantidad de entregas MEDIANAS: " << cantMed << " unidades" << endl;
    cout << "Cantidad de entregas PESADAS: " << cantPes << " unidades" << endl;

    //PUNTO B
    cout << "Cantidad de unidades ALIMENTOS: " << cantAl << endl;
    cout << "Cantidad de unidades BEBIDAS: " << cantBe << endl;
    cout << "Cantidad de unidades LIMPIEZA: " << cantLi << endl;
    cout << "Cantidad de unidades ROPA: " << cantRo << endl;

    cout << "Cantidad de paquetes ALIMENTOS: " << cantPaqA << endl;
    cout << "Cantidad de paquetes BEBIDAS: " << cantPaqB << endl;
    cout << "Cantidad de paquetes LIMPIEZA: " << cantPaqL << endl;
    cout << "Cantidad de paquetes ROPA: " << cantPaqR << endl;

    //PUNTO C
    if(paq40A == true) // if(paq40A)
    {
       cout << "El tipo ALIMENTOS registró al menos un paquete que pesa más de 40 kg" << endl;
    }
    if(paq40B == true) // if(paq40B)
    {
       cout << "El tipo BEBIDAS registró al menos un paquete que pesa más de 40 kg" << endl;
    }
    if(paq40L == true) // if(paq40L)
    {
       cout << "El tipo LIMPIEZA registró al menos un paquete que pesa más de 40 kg" << endl;
    }
    if(paq40R == true) // if(paq40R)
    {
       cout << "El tipo ROPA registró al menos un paquete que pesa más de 40 kg" << endl;
    }

    /*
    !a>b = a<b
    escribir !a>b es lo mismo que (!a)>b
    lo correcto sería !(a>b) = a<=b
    */

    return 0;
}
