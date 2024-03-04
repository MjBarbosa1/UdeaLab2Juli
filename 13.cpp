#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sumaPrimosMenores(int n) {
    int suma = 0;
    for (int i = 2; i < n; ++i) {
        if (esPrimo(i)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int suma = sumaPrimosMenores(numero);

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
