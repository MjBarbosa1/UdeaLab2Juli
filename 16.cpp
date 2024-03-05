#include <iostream>

using namespace std;

int ejercicio16() {
    int numero;
    int suma = 0;
    int cantidad_numeros = 0;

    do {
        cout << "Ingrese un numero (o 0 para terminar): ";
        cin >> numero;

        if (numero != 0) {
            suma += numero;
            cantidad_numeros++;
        }
    } while (numero != 0);

    double promedio = 0;
    if (cantidad_numeros != 0) {
        promedio = static_cast<double>(suma) / cantidad_numeros;
    }

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
