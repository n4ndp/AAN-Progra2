#include <iostream>
#include <vector>
#include <cmath>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Función para obtener los índices de acuerdo a la opción dada
std::vector<int> obtener_indices(int* arreglo, int n, char opcion) {
    std::vector<int> indices;

    for (int i = 0; i < n; ++i) {
        switch (opcion) {
            case 'p': // Pares
                if (arreglo[i] % 2 == 0) {
                    indices.push_back(i);
                }
                break;
            case 'i': // Impares
                if (arreglo[i] % 2 != 0) {
                    indices.push_back(i);
                }
                break;
            case 'r': // Primos
                if (esPrimo(arreglo[i])) {
                    indices.push_back(i);
                }
                break;
            default:
                std::cerr << "Opción no válida." << std::endl;
                return std::vector<int>();
        }
    }

    return indices;
}

// Función para imprimir un vector de enteros
void imprimirVector(const std::vector<int>& vec) {
    for (int valor : vec) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    char opcion;

    // Leer tamaño del arreglo
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> n;

    // Crear el arreglo dinámico
    int* arreglo = new int[n];

    // Leer los valores del arreglo
    std::cout << "Ingrese los valores del arreglo: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arreglo[i];
    }

    // Leer la opción
    std::cout << "Ingrese la opción (p para pares, i para impares, r para primos): ";
    std::cin >> opcion;

    // Obtener los índices según la opción
    std::vector<int> indices = obtener_indices(arreglo, n, opcion);

    // Imprimir los índices
    std::cout << "Índices: ";
    imprimirVector(indices);

    // Liberar la memoria del arreglo dinámico
    delete[] arreglo;

    return 0;
}
