#include <iostream>
#include <vector>

// Función para eliminar duplicados y ordenar el vector
std::vector<int> procesar_vector(const std::vector<int>& input) {
    std::vector<int> resultado;

    // Eliminar duplicados
    for (int num : input) {
        bool encontrado = false;
        for (int r : resultado) {
            if (r == num) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(num);
        }
    }

    // Ordenar el vector (algoritmo de burbuja)
    for (size_t i = 0; i < resultado.size(); ++i) {
        for (size_t j = 0; j < resultado.size() - 1 - i; ++j) {
            if (resultado[j] > resultado[j + 1]) {
                std::swap(resultado[j], resultado[j + 1]);
            }
        }
    }

    return resultado;
}

// Función para imprimir el vector
void imprimir_vector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    // Leer el tamaño del vector
    std::cout << "Ingrese el número de valores: ";
    std::cin >> n;

    // Leer los valores del vector
    std::vector<int> valores(n);
    std::cout << "Ingrese los valores: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> valores[i];
    }

    // Procesar el vector
    std::vector<int> resultado = procesar_vector(valores);

    // Imprimir el vector procesado
    std::cout << "Valores únicos y ordenados: ";
    imprimir_vector(resultado);

    return 0;
}
