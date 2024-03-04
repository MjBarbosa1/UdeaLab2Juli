#include <iostream>

using namespace std;

bool esPalindromo(int numero) {
    int reverso = 0;
    int original = numero;

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return reverso == original;
}

int main() {
    int palindromoMaximo = 0;
    int factor1, factor2;

    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > palindromoMaximo) {
                palindromoMaximo = producto;
                factor1 = i;
                factor2 = j;
            }
        }
    }

    cout << factor1 << "*" << factor2 << "=" << palindromoMaximo << endl;

    return 0;
}
