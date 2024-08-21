#include <iostream>
#include <iomanip> // Para std::setw

// Función para generar la matriz organizada
int** generar_matriz_organizada(int* arreglo, int n) {
    // Crear la matriz dinámica
    int** matriz = new int*[n];
    for (int i = 0; i < n; ++i) {
        matriz[i] = new int[n];
        // Inicializar la matriz con ceros
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = 0;
        }
    }

    // Llenar la matriz con los valores del arreglo
    for (int k = 0; k < n * n; ++k) {
        int valor = arreglo[k];
        int i = valor / n;
        int j = valor % n;

        // Verificar si la posición está dentro del rango de la matriz
        if (i < n && j < n) {
            matriz[i][j] = valor;
        }
    }

    return matriz;
}

// Función para imprimir la matriz
void imprimir_matriz(int** matriz, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(3) << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para liberar la memoria de la matriz
void liberar_matriz(int** matriz, int n) {
    for (int i = 0; i < n; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    int n;

    // Leer tamaño de la matriz
    std::cout << "Ingrese el tamaño de la matriz: ";
    std::cin >> n;

    // Crear arreglo dinámico
    int* arreglo = new int[n * n];

    // Leer valores del arreglo
    std::cout << "Ingrese los valores del arreglo: ";
    for (int i = 0; i < n * n; ++i) {
        std::cin >> arreglo[i];
    }

    // Generar y mostrar la matriz
    int** matriz = generar_matriz_organizada(arreglo, n);
    std::cout << "Matriz organizada:" << std::endl;
    imprimir_matriz(matriz, n);

    // Liberar la memoria
    liberar_matriz(matriz, n);
    delete[] arreglo;

    return 0;
}
