#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero N: ";
    cin >> N;

    int sumatoria = 0;

    for (int i = 1; i <= N; ++i) {
        sumatoria += i;
    }

    cout << "La sumatoria desde 0 hasta " << N << " es: " << sumatoria << endl;

    return 0;
}
