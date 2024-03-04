#include <iostream>

using namespace std;

int calcularSerieCollatz(int n) {
    int terminos = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        terminos++;
    }
    return terminos;
}

int main() {
    int k;
    cout << "Ingrese un numero k: ";
    cin >> k;

    int semilla_maxima = 0;
    int max_terminos = 0;

    for (int j = 1; j < k; ++j) {
        int terminos = calcularSerieCollatz(j);
        if (terminos > max_terminos) {
            max_terminos = terminos;
            semilla_maxima = j;
        }
    }

    cout << "La serie mas larga es con la semilla: " << semilla_maxima << ", teniendo " << max_terminos << " terminos." << endl;

    return 0;
}
