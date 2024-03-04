#include <iostream>

using namespace std;

double calcularEuler(int n) {
    double euler = 1.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        euler += 1.0 / factorial;
    }

    return euler;
}

int main() {
    int n;

    cout << "Ingrese el numero de terminos para la aproximacion de e: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: El numero de terminos debe ser no negativo." << endl;
        return 1;
    }

    double euler = calcularEuler(n);

    cout << "e es aproximadamente: " << euler << endl;

    return 0;
}
