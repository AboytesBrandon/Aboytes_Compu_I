/*
Autor: Brandon Aboytes
brandon_aboytes@comunidad.unam.mx
09 sep 2022
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

#define MATR 10

using namespace std;


int main() {
    //inicializas los arreglos con la palabra reservada array de la libreria array
    array<array<int, MATR>,MATR>A;
    int tra=0;

    //Semilla para cada vez que ejecutemos nos den valores distinto *es opcional*
    srand((int)time(0));

    // Inicializamos las matrices con valores random
    for(int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); ++j) {
            A[i][j] = (rand() % 100) + 1;
            //Validacion
            if (i==j)
        }
    }

    return 0;
}