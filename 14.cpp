#include <iostream>

using namespace std;

int ejercicio14() {
    int inicio = 1;
    int fin = 50;

    cout << "Columna 1" << "\t" << "Columna 2" << endl;
    for (int i = inicio; i <= fin; ++i) {
        cout << i << "\t" << fin - i + inicio << endl;
    }

    return 0;
}
