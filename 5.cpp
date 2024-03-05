#include <iostream>

using namespace std;

int ejercicio5() {
    int A, B;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;

    int division = A / B;
    int residuo = A % B;


    if (residuo >= B / 2) {
        division++;
    }

    cout << A << "/" << B << "=" << division << endl;

    return 0;
}
