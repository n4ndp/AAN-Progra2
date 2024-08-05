#include <iostream>

int main() {
    int a = 10;
    int b = 5;
    int c = 10;

    // Operador de igualdad
    if (a == c) { // Devuelve true si a es igual a c
        std::cout << "a es igual a c (a == c)" << std::endl;
    }

    // Operador de desigualdad
    if (a != b) { // Devuelve true si a es diferente de b
        std::cout << "a es diferente de b (a != b)" << std::endl;
    }

    // Operador mayor que
    if (a > b) { // Devuelve true si a es mayor que b
        std::cout << "a es mayor que b (a > b)" << std::endl;
    }

    // Operador menor que
    if (b < a) { // Devuelve true si b es menor que a
        std::cout << "b es menor que a (b < a)" << std::endl;
    }

    // Operador mayor o igual que
    if (a >= c) { // Devuelve true si a es mayor o igual que c
        std::cout << "a es mayor o igual que c (a >= c)" << std::endl;
    }

    // Operador menor o igual que
    if (b <= a) { // Devuelve true si b es menor o igual que a
        std::cout << "b es menor o igual que a (b <= a)" << std::endl;
    }

    return 0;
}
