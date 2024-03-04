#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Por favor, ingrese una letra: ";
    cin >> letra;

    if (isalpha(letra)) {
        letra = tolower(letra);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout << letra << " es una vocal." << endl;
        } else {
            cout << letra << " es una consonante." << endl;
        }
    } else {
        cout << "No es una letra." << endl;
    }

    return 0;
}
