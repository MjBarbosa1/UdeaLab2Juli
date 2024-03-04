#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    cout << "Multiplos de " << N << " menores que 100:" << endl;
    for (int i = N; i < 100; i += N) {
        cout << i << endl;
    }

    return 0;
}
