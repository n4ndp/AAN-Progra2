#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para crear y llenar una matriz con valores aleatorios (0 o 1)
int** crearMatriz(int filas, int columnas) {
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 2;
        }
    }
    return matriz;
}

// Función para imprimir una matriz
void imprimirMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para crear una tercera matriz que indica si los valores en m1 y m2 son diferentes
int** crearMatrizComparacion(int** m1, int** m2, int filas, int columnas) {
    int** resultado = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        resultado[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = (m1[i][j] != m2[i][j]) ? 1 : 0;
        }
    }
    return resultado;
}

// Función para liberar la memoria de una matriz
void liberarMatriz(int** matriz, int filas) {
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Semilla para la generación de números aleatorios

    int filas, columnas;

    // Leer el número de filas y columnas
    std::cout << "Numero de filas: ";
    std::cin >> filas;
    std::cout << "Numero de columnas: ";
    std::cin >> columnas;

    // Crear y llenar las matrices m1 y m2
    int** m1 = crearMatriz(filas, columnas);
    int** m2 = crearMatriz(filas, columnas);

    // Imprimir las matrices m1 y m2
    std::cout << "Matriz 1:\n";
    imprimirMatriz(m1, filas, columnas);

    std::cout << "Matriz 2:\n";
    imprimirMatriz(m2, filas, columnas);

    // Crear la matriz de comparación
    int** m3 = crearMatrizComparacion(m1, m2, filas, columnas);

    // Imprimir la matriz de comparación
    std::cout << "Matriz de Comparacion (Matriz 3):\n";
    imprimirMatriz(m3, filas, columnas);

    // Liberar la memoria de las matrices
    liberarMatriz(m1, filas);
    liberarMatriz(m2, filas);
    liberarMatriz(m3, filas);

    return 0;
}
