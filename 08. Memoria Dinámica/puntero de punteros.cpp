#include <iostream>

using namespace std;

int main() {
    int rows = 3;
    int cols = 4;

    // Declaración de un arreglo de punteros a punteros
    int** matrix = new int*[rows];

    // Inicialización del arreglo de punteros
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Asignación de valores a la matriz
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = value++;
        }
    }

    // Impresión de los valores de la matriz
    cout << "Matriz 2D dinámica:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Liberación de memoria dinámica
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];  // Liberación de cada fila
    }
    delete[] matrix;  // Liberación del arreglo de punteros

    return 0;
}
