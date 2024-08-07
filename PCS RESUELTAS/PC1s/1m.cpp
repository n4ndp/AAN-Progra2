#include <iostream>
#include <iomanip>

using namespace std;

// Función que determina la estación del año en base al día y mes ingresados
// 1: VERANO, 2: OTONO, 3: INVIERNO, 4: PRIMAVERA
int determinarEstacion(int dia, int mes) {
    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia <= 20)) {
        return 1; // VERANO
    } else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia <= 21)) {
        return 2; // OTONO
    } else if ((mes == 6 && dia >= 22) || (mes == 7) || (mes == 8) || (mes == 9 && dia <= 22)) {
        return 3; // INVIERNO
    } else if ((mes == 9 && dia >= 23) || (mes == 10) || (mes == 11) || (mes == 12 && dia <= 20)) {
        return 4; // PRIMAVERA
    }

    return 0;
}

int main() {
    int numAlumnos;

    // Solicitar al usuario que ingrese el número de alumnos entre 6 y 40
    do {
        cout << "Numero de alumnos [6 - 40]: ";
        cin >> numAlumnos;
    } while (numAlumnos < 6 || numAlumnos > 40);

    // Contadores de alumnos nacidos en cada estación del año
    int cuentaVerano = 0, cuentaOtono = 0, cuentaInvierno = 0, cuentaPrimavera = 0;

    // Solicitar la fecha de nacimiento de cada alumno y determinar la estación del año
    for (int i = 0; i < numAlumnos; ++i) {
        int dia, mes;
        cout << "Fecha de nacimiento\n";
        cout << "Dia: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;

        // Llamar a la función determinarEstacion y guardar el resultado en la variable est
        int est = determinarEstacion(dia, mes);

        // Incrementar el contador de la estación correspondiente
        switch (est) {
            case 1: cuentaVerano++; break;
            case 2: cuentaOtono++; break;
            case 3: cuentaInvierno++; break;
            case 4: cuentaPrimavera++; break;
            default: break;
        }
    }

    // Calcular el porcentaje de alumnos nacidos en cada estación del año
    double porcentajeVerano = (static_cast<double>(cuentaVerano) / numAlumnos) * 100;
    double porcentajeOtono = (static_cast<double>(cuentaOtono) / numAlumnos) * 100;
    double porcentajeInvierno = (static_cast<double>(cuentaInvierno) / numAlumnos) * 100;
    double porcentajePrimavera = (static_cast<double>(cuentaPrimavera) / numAlumnos) * 100;

    // Imprimir los porcentajes de alumnos nacidos en cada estación del año
    cout << fixed << setprecision(3);
    cout << setw(30) << left << "Nacidos en verano:" << setw(10) << porcentajeVerano << endl;
    cout << setw(30) << left << "Nacidos en otono:" << setw(10) << porcentajeOtono << endl;
    cout << setw(30) << left << "Nacidos en invierno:" << setw(10) << porcentajeInvierno << endl;
    cout << setw(30) << left << "Nacidos en primavera:" << setw(10) << porcentajePrimavera << endl;

    return 0;
}
