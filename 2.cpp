#include <iostream>

using namespace std;


int main() {
    int cantidadDeseada;


    cout << "Ingrese la cantidad de dinero deseada: ";
    cin >> cantidadDeseada;


    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidadDenominaciones = sizeof(denominaciones) / sizeof(denominaciones[0]);


    cout << "Billetes y monedas necesarios:" << endl;
    for (int i = 0; i < cantidadDenominaciones; ++i) {
        int cantidad = cantidadDeseada / denominaciones[i];
        cantidadDeseada %= denominaciones[i];
        cout << denominaciones[i] << ": " << cantidad << endl;
    }
    cout << "Faltante: " << cantidadDeseada << endl;

    return 0;
}

