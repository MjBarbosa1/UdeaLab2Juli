#include <iostream>

using namespace std;

int main() {
    int hora, duracion, nueva_hora, minutos_nuevos;

    cout << "Ingrese la hora (en formato HHMM): ";
    cin >> hora;
    cout << "Ingrese la duracion (en formato HHMM): ";
    cin >> duracion;


    int horas_hora = hora / 100;
    int minutos_hora = hora % 100;
    int horas_duracion = duracion / 100;
    int minutos_duracion = duracion % 100;


    if (horas_hora < 0 || horas_hora > 23 || minutos_hora < 0 || minutos_hora > 59) {
        cout << hora << " es un tiempo invalido." << endl;
        return 0;
    }


    if (horas_duracion < 0 || horas_duracion > 23 || minutos_duracion < 0 || minutos_duracion > 59) {
        cout << duracion << " es un tiempo invalido." << endl;
        return 0;
    }


    nueva_hora = horas_hora + horas_duracion;
    minutos_nuevos = minutos_hora + minutos_duracion;


    if (minutos_nuevos >= 60) {
        nueva_hora += 1;
        minutos_nuevos %= 60;
    }

    nueva_hora %= 24;

    cout << "La hora es " << nueva_hora * 100 + minutos_nuevos << "." << endl;

    return 0;
}
