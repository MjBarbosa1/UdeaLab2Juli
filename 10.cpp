#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int enesimoPrimo(int n) {
    int contador = 0;
    int numero = 2;

    while (contador < n) {
        if (esPrimo(numero)) {
            contador++;
        }
        numero++;
    }

    return numero - 1;
}

int main() {
    int n;

    cout << "Ingrese un numero n: ";
    cin >> n;

    int primo = enesimoPrimo(n);

    cout << "El primo numero " << n << " es: " << primo << endl;

    return 0;
}
