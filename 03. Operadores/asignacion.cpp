#include <iostream>

int main() {
    // Operador de asignación simple
    int a = 10;
    int b = 5;

    // Operador de asignación simple
    int c = a;
    std::cout << "Asignación simple (c = a): " << c << std::endl;

    // Operador de asignación suma
    c += b; // Equivalente a c = c + b
    std::cout << "Asignación suma (c += b): " << c << std::endl;

    // Operador de asignación resta
    c -= b; // Equivalente a c = c - b
    std::cout << "Asignación resta (c -= b): " << c << std::endl;

    // Operador de asignación multiplicación
    c *= b; // Equivalente a c = c * b
    std::cout << "Asignación multiplicación (c *= b): " << c << std::endl;

    // Operador de asignación división
    c /= b; // Equivalente a c = c / b
    std::cout << "Asignación división (c /= b): " << c << std::endl;

    // Operador de asignación módulo
    c %= b; // Equivalente a c = c % b
    std::cout << "Asignación módulo (c %= b): " << c << std::endl;

    return 0;
}
