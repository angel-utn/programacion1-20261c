/*
4 Se desea procesar la información de 10 ventas realizadas en una librería. De cada venta se conoce:
- Título del libro (cadena)
- Precio de venta (real)
Se pide:
- A) Informar el total recaudado.
- B) Informar cuántos libros costaron más de $10.000.
- C) Mostrar el título del libro más caro
*/
#include <iostream>
using namespace std;

int main(){
    // Para el for
    int i;
    const int VENTAS = 3;

    // Ingreso de datos
    string titulo;
    float precio;

    // Para los ejercicios
    // Punto A
    float recaudacion = 0;

    // Punto B
    int cantLibrosMas10000 = 0;

    // Punto C
    string tituloMasCaro;
    float precioMasCaro = 0;

    cout << "Librería UTN" << endl;
    cout << "---------------------" << endl;

    for (i=1; i<=VENTAS; i++){

        cout << "Título: ";
        cin >> titulo;

        cout << "Precio: $";
        cin >> precio;

        cout << endl;

        /// A
        recaudacion += precio;

        /// B
        if (precio > 10000){
            cantLibrosMas10000++;
        }

        /// C
        if (precio > precioMasCaro){
            precioMasCaro = precio;
            tituloMasCaro = titulo;
        }
    }

    cout << endl << "Resultados: " << endl;
    cout << endl << "Punto A: " << endl;
    cout << "La recaudación es: $ " << recaudacion << endl;

    cout << endl << "Punto B: " << endl;
    cout << "Cantidad de libros con costo mayor a $10000: " << cantLibrosMas10000 << endl;

    cout << endl << "Punto C: " << endl;
    cout << "Título del libro más caro: " << tituloMasCaro << " ($" << precioMasCaro << ")" << endl;





    return 0;
}
