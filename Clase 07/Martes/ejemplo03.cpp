#include <iostream>
using namespace std;

int main(){
    const int EXAMENES = 6;
    int i, j;
    int materia, legajo, nota;

    // A
    int sumaNotas;
    float promedioNotas;
    // B
    int cantExamenesAprob = 0;

    cout << "Materia: ";
    cin >> materia;

    while(materia != 0){

        // Ponemos en cero sumaNotas porque comienza un nuevo grupo (Materias)
        sumaNotas = 0;

        for(j = 1; j <= EXAMENES; j++){

            cout << "Legajo: ";
            cin >> legajo;
            cout << "Nota: ";
            cin >> nota;

            // A
            sumaNotas += nota;

            // B
            if (nota >= 6){
                cantExamenesAprob++;
            }

            cout << "Materia: ";
            cin >> materia;
        }

        promedioNotas = (float) sumaNotas / EXAMENES;
        cout << endl << "A) Promedio: " << promedioNotas << endl << endl;
    }

    cout << endl << "B) Cantidad de exámenes aprobados: " << cantExamenesAprob << endl;

    return 0;
}
