#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;

    if (A < B) {
        cout << "El menor es " << A << endl;
    } else if (B < A) {
        cout << "El menor es " << B << endl;
    } else {
        cout << "Los numeros son iguales" << endl;
    }

    return 0;
}
