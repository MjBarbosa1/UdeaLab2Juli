#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    cout << "Tabla de multiplicar del " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << i << "x" << N << "=" << i * N << endl;
    }

    return 0;
}
