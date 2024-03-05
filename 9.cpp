#include <iostream>

using namespace std;

int ejercicio9() {
    double N;
    cout << "Ingrese el radio del circulo (N): ";
    cin >> N;

    const double pi = 3.1416;
    double perimetro = 2 * pi * N;
    double area = pi * N * N;

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

    return 0;
}

