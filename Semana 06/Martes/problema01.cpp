#include <iostream>
using namespace std;

int main(){
    string titulo;
    char genero;
    int duracion;

    // A
    const int CANT_PELIS = 8;
    int cantLargometrajes = 0;
    int cantCortometrajes = 0;
    float porcCortometrajes, porcLargometrajes;

    // B
    string tituloPeliculaTerrorMasCorta;
    int duracionPeliculaTerrorMasCorta = 0;
    bool huboPeliculaTerror = false;

    // C
    int totalDuracionPeliculaComedia = 0;
    int cantPeliculaComedia = 0;
    float promedioDuracionPeliculaComedia;

    for(int i=1; i <= CANT_PELIS; i++){
        cout << "Título: ";
        cin >> titulo;

        cout << "Duración (en minutos):";
        cin >> duracion;

        cout << "Género: ";
        cin >> genero;

        // A - Determino si es largo o cortometraje
        if (duracion < 40){
            cantCortometrajes++;
        }
        else{
            cantLargometrajes++;
        }

        // B y C
        switch (genero){
            // C
            case 'C':
            case 'c':
                totalDuracionPeliculaComedia += duracion;
                cantPeliculaComedia++;
            break;

            // B
            case 'T':
            case 't':
                if (!huboPeliculaTerror){
                    duracionPeliculaTerrorMasCorta = duracion;
                    tituloPeliculaTerrorMasCorta = titulo;
                }
                else{
                    if (duracion < duracionPeliculaTerrorMasCorta){
                        duracionPeliculaTerrorMasCorta = duracion;
                        tituloPeliculaTerrorMasCorta = titulo;
                    }
                }

                huboPeliculaTerror = true;
            break;
        }

    }

    porcCortometrajes = ((float) cantCortometrajes / CANT_PELIS) * 100;
    porcLargometrajes = ((float) cantLargometrajes / CANT_PELIS) * 100;

    cout << endl << "PUNTO A" << endl;
    cout << "Cortometrajes: " << porcCortometrajes << " %" << endl;
    cout << "Largometrajes: " << porcLargometrajes << " %" << endl;

    cout << endl << "PUNTO B" << endl;
    if (huboPeliculaTerror){
        cout << "La película de terror más corta fue: " << tituloPeliculaTerrorMasCorta << endl;
    }
    else{
        cout << "No hubo película de terror" << endl;
    }

    cout << endl << "PUNTO C" << endl;

    if (cantPeliculaComedia > 0){
        promedioDuracionPeliculaComedia = (float) totalDuracionPeliculaComedia / cantPeliculaComedia;
        cout << "El promedio de duración de películas de comedia es: " << promedioDuracionPeliculaComedia << endl;
    }
    else{
        cout << "No hubo película de comedia." << endl;
    }

    return 0;
}
