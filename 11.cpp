#include <iostream>

using namespace std;


int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int mcmDeRango(int n) {
    int mcm_resultado = 1;
    for (int i = 2; i <= n; ++i) {
        mcm_resultado = (mcm_resultado * i) / mcd(mcm_resultado, i);
    }
    return mcm_resultado;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int resultado = mcmDeRango(numero);

    cout << "El minimo comun multiplo es: " << resultado << endl;

    return 0;
}
