#include <iostream>

using namespace std;

// Función que encuentra los factores comunes de dos números enteros y los imprime
int encontrarFactoresComunes(int n1, int n2) {
    int cantidadFactoresComunes = 0; // Contador de factores comunes

    cout << "Los factores comunes de " << n1 << " y " << n2 << " son: ";

    // Iterar sobre los números desde 1 hasta el menor de los dos números
    for (int i = 1; i <= min(n1, n2); i++) {
        // Si el número es un factor común de ambos números, imprimirlo
        if (n1 % i == 0 && n2 % i == 0) {
            cantidadFactoresComunes++;
            cout << i << " ";
        }
    }
    cout << endl;

    // Retornar la cantidad de factores comunes
    return cantidadFactoresComunes;
}

int main() {
    int n1, n2, cant;

    // Solicitar al usuario que ingrese dos números enteros entre 1 y 100
    cout << "Ingrese dos numeros (entre 1 y 100): ";
    cin >> n1 >> n2;

    // Validar que los números estén en el rango de 1 a 100
    if (n1 < 1 || n1 > 100 || n2 < 1 || n2 > 100) {
        cout << "Los numeros deben estar entre 1 y 100." << endl;
        return 1;
    }

    // Llamar a la función encontrarFactoresComunes y guardar el resultado en la variable cant
    cant = encontrarFactoresComunes(n1, n2);

    // Imprimir la cantidad de factores comunes
    cout << "La cantidad de factores comunes es: " << cant << endl;

    return 0;
}
