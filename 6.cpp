#include <iostream>

using namespace std;

int ejercicio6() {
    int A, B;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;

    int resultado = 1;

    for (int i = 0; i < B; ++i) {
        resultado *= A;
    }

    cout << A << "^" << B << "=" << resultado << endl;

    return 0;
}
