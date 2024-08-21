#include <iostream>
#include <vector>

// Función para encontrar los divisores de un número y almacenarlos en un vector
std::vector<int> encontrarDivisores(int numero) {
    std::vector<int> divisores;

    // Encontrar todos los divisores menores al número
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            divisores.push_back(i);
        }
    }

    return divisores;
}

// Función para imprimir los elementos de un vector
void imprimirVector(const std::vector<int>& vec) {
    std::cout << "Divisores:" << std::endl;
    for (int valor : vec) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numero;

    // Leer el número entero positivo del usuario
    std::cout << "Numero: ";
    std::cin >> numero;

    // Validar que el número sea positivo
    if (numero <= 0) {
        std::cerr << "El número debe ser positivo." << std::endl;
        return 1;
    }

    // Encontrar los divisores
    std::vector<int> divisores = encontrarDivisores(numero);

    // Imprimir los divisores
    imprimirVector(divisores);

    return 0;
}
