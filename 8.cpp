#include <iostream>

using namespace std;

int sumaMultiplosMenores(int a, int b, int c) {
    int suma = 0;

    for (int i = 1; i < c; ++i) {
        if (i % a == 0 || i % b == 0) {
            suma += i;
        }
    }

    return suma;
}

int main() {
    int a, b, c;

    cout << "Ingrese tres numeros a, b y c: ";
    cin >> a >> b >> c;

    int suma = sumaMultiplosMenores(a, b, c);

    cout << "La suma de los multiplos de " << a << " y " << b << " menores que " << c << " es: " << suma << endl;

    return 0;
}
