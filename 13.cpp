#include <iostream>

using namespace std;

int ejercicio13() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    cout << "Los divisores de " << N << " son:" << endl;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
