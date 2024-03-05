#include <iostream>

using namespace std;

int contar_divisores(int n) {
    int contador = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            contador++;
            if (i * i != n) {
                contador++;
            }
        }
    }
    return contador;
}

int numero_triangular(int n) {
    return n * (n + 1) / 2;
}

int ejercicio17() {
    int k;
    cout << "Ingrese un numero k: ";
    cin >> k;

    int n = 1;
    while (true) {
        int numero = numero_triangular(n);
        int divisores = contar_divisores(numero);
        if (divisores > k) {
            cout << "El numero es: " << numero << " que tiene " << divisores << " divisores." << endl;
            break;
        }
        n++;
    }

    return 0;
}
