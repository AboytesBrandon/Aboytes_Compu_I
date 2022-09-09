//Autor: Brandon Aboytes
//brandon_aboytes@comunidad.unam.mx
//09 sep 2022

#include <iostream>
using namespace std;

#define N 10

int main() {

    //Definicion de un arreglo
    int arr[N]{0};

    //iterar el arreglo
    for(int i=0; i < N; i++) {
        arr[i] = i + i;
        cout << arr[i] << "\t";
    }

    return 0;
}
