/*
* Autor: Brandon Aboytes
* aboytesbra@hotmail.com
* Sept 15, 2021
* */

#include <iostream>


using namespace std;

int main () {

    float num1 = 0;
    float num2 = 0;
    char sig = 0;
    char sum = '+';
    char res = '-';
    char div = '/';
    char mul = '*';
    char mod = '%';

    cout << "Primer numero: " << endl;
    cin >> num1; // Se lee el primer numero

    cout << "Operacion, solo se puede poner signos + , -, /, *, % respectivamente " << endl;
    cin >> sig; // Se indica la operación a realizar

    if(sig == sum ) {  // si el signo que pusimos es igual al de suma, se efectua

        cout << "Segundo numero: " << endl;
        cin >> num2; // Se lee el segundo numero

        cout << "Resultado:" << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (sig == res ){ // si el signo que pusimos es igual al de resta, se efectua

        cout << "Segundo numero: " << endl;
        cin >> num2;

        cout << "Resultado:" << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (sig == div ){ // si el signo que pusimos es igual al de division, se efectua

        cout << "Segundo numero: " << endl;
        cin >> num2;

        cout << "Resultado:" << endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else if (sig == mul ){ // si el signo que pusimos es igual al de multiplicacion, se efectua

        cout << "Segundo numero: " << endl;
        cin >> num2;

        cout << "Resultado:" << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (sig == mod ){ // si el signo que pusimos es igual al de modulo, se efectua

        cout << "Segundo numero: " << endl;
        cin >> num2;

        cout << "Resultado:" << endl;
        cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
    }
    return 0;
}

