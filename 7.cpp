#include <iostream>

using namespace std;

int sumaParesFibonacciMenores(int n) {
    int fib1 = 1;
    int fib2 = 1;
    int suma = 0;
    int fib;

    while (fib1 + fib2 < n) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        if (fib % 2 == 0) {
            suma += fib;
        }
    }

    return suma;
}

int main() {
    int n;

    cout << "Ingrese un numero n: ";
    cin >> n;

    int suma = sumaParesFibonacciMenores(n);

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
