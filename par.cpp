#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            cout << "El numero es par, siga intentando" << endl;
        } else {
            cout << "El numero es impar. Programa finalizado." << endl;
        }

    } while (numero % 2 == 0); // se repite mientras el número sea par

    return 0;
}
