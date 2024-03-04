#include <iostream>

using namespace std;

bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool esFechaValida(int mes, int dia) {
    if (mes < 1 || mes > 12) {
        return false;
    }
    if (dia < 1 || dia > 31) {
        return false;
    }
    if (mes == 2) {
        return dia <= 29; // Febrero tiene máximo 29 días
    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return false; // Meses con 30 días
    }
    return true;
}

int main() {
    int mes, dia;


    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;


    if (!esFechaValida(mes, dia)) {
        cout << mes << "/" << dia << " es una fecha invalida." << endl;
        return 0;
    }


    if (mes == 2 && dia == 29) {
        cout << "29/2 es valida en bisiesto." << endl;
        return 0;
    }


    if (mes == 2 && dia == 28) {
        int year;
        cout << "Ingrese el año: ";
        cin >> year;
        if (esBisiesto(year)) {
            cout << "29/2 es valida en bisiesto." << endl;
            return 0;
        } else {
            cout << "28/2 es una fecha valida." << endl;
            return 0;
        }
    }

    cout << mes << "/" << dia << " es una fecha valida." << endl;

    return 0;
}
