#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero impar n para la espiral: ";
    cin >> n;

    int suma_diagonal = 1;
    int incremento = 2;
    int actual = 1;

    for (int i = 3; i <= n; i += 2) {
        for (int j = 0; j < 4; ++j) {
            actual += incremento;
            suma_diagonal += actual;
        }
        incremento += 2;
    }

    cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma_diagonal << "." << endl;

    return 0;
}
