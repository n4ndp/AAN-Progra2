#include <iostream>

int main() {
    // 1. Bucle for tradicional
    std::cout << "Bucle for tradicional:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Índice i: " << i << std::endl;
    }

    // 2. Bucle for con múltiples variables
    std::cout << "\nBucle for con múltiples variables:" << std::endl;
    for (int i = 0, j = 10; i < 5; ++i, --j) {
        std::cout << "Índice i: " << i << ", j: " << j << std::endl;
    }

    // 3. Bucle for basado en rango (C++11 y versiones posteriores)
    std::cout << "\nBucle for basado en rango:" << std::endl;
    int numeros[] = {1, 2, 3, 4, 5};
    for (int numero : numeros) {
        std::cout << "Número: " << numero << std::endl;
    }

    // 4. Bucle for con inicialización fuera del bucle
    std::cout << "\nBucle for con inicialización fuera del bucle:" << std::endl;
    int k = 0;
    for (; k < 5; ++k) {
        std::cout << "Índice k: " << k << std::endl;
    }

    // 5. Bucle for infinito con break
    std::cout << "\nBucle for infinito con break:" << std::endl;
    int count = 0;
    for (;;) {
        std::cout << "Bucle infinito: Se ejecutará solo 3 veces." << std::endl;
        if (++count >= 3) break;
    }

    return 0;
}
