#include <iostream>

using namespace std;

int ejercicio15() {
    int n;
    cout << "Ingrese un numero impar n para la espiral nxn: ";
    cin >> n;

    // Verificamos que n sea impar
    if (n % 2 == 0) {
        cout << "El numero ingresado no es impar." << endl;
        return 1;
    }

    int suma = 1; // Comenzamos con 1 en el centro de la espiral

    for (int capa = 3; capa <= n; capa += 2) {
        int esquina_superior_derecha = capa * capa;
        int esquina_superior_izquierda = esquina_superior_derecha - (capa - 1);
        int esquina_inferior_izquierda = esquina_superior_izquierda - (capa - 1);
        int esquina_inferior_derecha = esquina_inferior_izquierda - (capa - 1);

        suma += esquina_superior_derecha + esquina_superior_izquierda + esquina_inferior_izquierda + esquina_inferior_derecha;
    }

    cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << endl;

    return 0;
}
