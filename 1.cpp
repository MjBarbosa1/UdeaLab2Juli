#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;

    int residuo = A % B;

    cout << "El residuo de la division " << A << "/" << B << " es: " << residuo << endl;

    return 0;
}
