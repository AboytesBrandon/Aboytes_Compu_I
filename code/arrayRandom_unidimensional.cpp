/*
Autor: Brandon Aboytes
brandon_aboytes@comunidad.unam.mx
09 sep 2022
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

#define MatAB 10

using namespace std;


int main() {
    //inicializas los arreglos con la palabra reservada array de la libreria array
    array<int, MatAB>A{}; //Matriz aleatoria
    array<int, MatAB>B{}; //Matriz aleatoria
    array<int, MatAB>C{}; //Matriz donde se guardara el valor de la operacion

    //Semilla para cada vez que ejecutemos nos den valores distinto *es opcional*
    srand((int)time(0));

    // Inicializamos las matrices con valores random
    for(int i = 0; i < MatAB; i++) {
        A[i] = (rand() % 100) + 1;
        B[i] = (rand() % 100) + 1;
        C[i] = A[i] + B[i];
        cout << "La suma de: "<< A[i]<< " + "<< B[i] << " es: " << C[i] <<endl;
    }

    /* Esto es otra forma de hacerlo:
    int i = 0;
    while (i++ < MatAB) {
        A[i] = (rand() % 100) + 1;
        B[i] = (rand() % 100) + 1;
        C[i] = A[i] + B[i];
        cout << "La suma de: "<< A[i]<< " + "<< B[i] << " es: " << C[i] <<endl;
    } */

    return 0;
}
