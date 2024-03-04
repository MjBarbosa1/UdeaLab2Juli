#include <iostream>

using namespace std;

int maximoFactorPrimo(int n) {
    int max_factor = -1;


    while (n % 2 == 0) {
        max_factor = 2;
        n /= 2;
    }


    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_factor = i;
            n /= i;
        }
    }


    if (n > 2) {
        max_factor = n;
    }

    return max_factor;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int max_factor = maximoFactorPrimo(numero);

    cout << "El mayor factor primo de " << numero << " es: " << max_factor << endl;

    return 0;
}
