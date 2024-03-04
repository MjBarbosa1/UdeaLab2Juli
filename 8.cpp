#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    int factorial = 1;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << N << "!=" << factorial << endl;

    return 0;
}
