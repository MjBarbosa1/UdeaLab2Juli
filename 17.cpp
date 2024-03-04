#include <iostream>

using namespace std;

int contarDivisores(int numero) {
    int cantidad_divisores = 0;
    for (int i = 1; i * i <= numero; ++i) {
        if (numero % i == 0) {
            // Si i es un divisor de numero, también lo es numero / i
            if (numero / i == i) {
                cantidad_divisores += 1;
            } else {
                cantidad_divisores += 2;
            }
        }
    }
    return cantidad_divisores;
}

int primerNumeroTriangularConDivisores(int k) {
    int n = 1;
    int numero_triangular = 1;
    while (contarDivisores(numero_triangular) <= k) {
        n++;
        numero_triangular += n;
    }
    return numero_triangular;
}

int main() {
    int k;
    cout << "Ingrese el numero de divisores k: ";
    cin >> k;

    int primer_numero_triangular = primerNumeroTriangularConDivisores(k);

    cout << "El numero es: " << primer_numero_triangular << " que tiene " << contarDivisores(primer_numero_triangular) << " divisores." << endl;

    return 0;
}
