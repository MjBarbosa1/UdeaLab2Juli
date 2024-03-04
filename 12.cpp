#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    int potencia = 1;
    for (int i = 1; i <= 5; ++i) {
        cout << N << "^" << i << "=" << potencia << endl;
        potencia *= N;
    }

    return 0;
}
