#include <iostream>

using namespace std;

int ejercicio3() {
    int A, B;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;

    if (A > B) {
        cout << "El mayor es " << A << endl;
    } else if (B > A) {
        cout << "El mayor es " << B << endl;
    } else {
        cout << "Los numeros son iguales" << endl;
    }

    return 0;
}
