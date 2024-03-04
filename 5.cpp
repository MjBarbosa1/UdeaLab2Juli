#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Ingrese el tama del patron (numero impar): ";
    cin >> size;


    if (size % 2 == 0) {
        cout << "El numero ingresado no es impar." << endl;
        return 0;
    }


    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = size - 2; i >= 0; --i) {
        for (int j = 0; j < size - i - 1; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
