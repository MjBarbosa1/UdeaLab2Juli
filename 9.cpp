#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese un numero entero N: ";
    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10;
        suma += digito;
        suma += digito * digito;
        numero /= 10;
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
