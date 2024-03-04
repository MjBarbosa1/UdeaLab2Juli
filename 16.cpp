#include <iostream>
#include <vector>

using namespace std;

int longitud_serie_collatz(long long semilla) {
    int longitud = 1; // Comenzamos con la semilla misma

    while (semilla != 1) {
        if (semilla % 2 == 0) {
            semilla /= 2;
        } else {
            semilla = 3 * semilla + 1;
        }
        longitud++;
    }

    return longitud;
}

int main() {
    long long k;
    cout << "Ingrese un numero k: ";
    cin >> k;

    long long semilla_mas_larga = 0;
    int longitud_mas_larga = 0;

    for (long long i = 1; i < k; ++i) {
        int longitud = longitud_serie_collatz(i);
        if (longitud > longitud_mas_larga) {
            semilla_mas_larga = i;
            longitud_mas_larga = longitud;
        }
    }

    cout << "La serie mas larga es con la semilla: " << semilla_mas_larga << ", teniendo " << longitud_mas_larga << " terminos." << endl;

    return 0;
}
