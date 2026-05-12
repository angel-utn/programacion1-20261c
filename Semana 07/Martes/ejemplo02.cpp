#include <iostream>
using namespace std;

int main(){
    const int MATERIAS = 5;
    int i, j;
    int materia, legajo, nota;

    // A
    int sumaNotas, cantExamenes;
    float promedioNotas;
    // B
    int cantExamenesAprob = 0;

    for(i = 1; i <= MATERIAS; i++){

        // Ponemos en cero sumaNotas porque comienza un nuevo grupo (Materias)
        sumaNotas = 0;
        cantExamenes = 0;

        cout << "Materia: ";
        cin >> materia;

        while(materia != 0){

            cout << "Legajo: ";
            cin >> legajo;
            cout << "Nota: ";
            cin >> nota;

            // A
            sumaNotas += nota;
            cantExamenes++;

            // B
            if (nota >= 6){
                cantExamenesAprob++;
            }

            cout << "Materia: ";
            cin >> materia;
        }

        if (cantExamenes > 0){
            promedioNotas = (float) sumaNotas / cantExamenes;
            cout << endl << "A) Promedio: " << promedioNotas << endl << endl;
        }
        else{
            cout << "A) No hay notas para esta materia." << endl << endl;
        }
    }

    cout << endl << "B) Cantidad de exámenes aprobados: " << cantExamenesAprob << endl;

    return 0;
}
