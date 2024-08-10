#include <iostream>

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Caso recursivo
    }
}

// Función recursiva para calcular el enésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Casos base
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Caso recursivo
    }
}

// Función recursiva para calcular la potencia de un número
int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;  // Caso base: cualquier número elevado a la potencia 0 es 1
    } else {
        return base * potencia(base, exponente - 1);  // Caso recursivo
    }
}

// Función recursiva para invertir una cadena
void invertirCadena(std::string cadena, int indice) {
    if (indice == 0) {
        std::cout << cadena[indice];  // Caso base
    } else {
        std::cout << cadena[indice];
        invertirCadena(cadena, indice - 1);  // Caso recursivo
    }
}

int main() {
    // Ejemplo de cálculo del factorial
    int numero = 5;
    std::cout << "Factorial de " << numero << " es: " << factorial(numero) << std::endl;

    // Ejemplo de cálculo de la secuencia de Fibonacci
    int posicion = 6;
    std::cout << "Fibonacci en la posición " << posicion << " es: " << fibonacci(posicion) << std::endl;

    // Ejemplo de cálculo de potencia
    int base = 2;
    int exponente = 4;
    std::cout << base << " elevado a la " << exponente << " es: " << potencia(base, exponente) << std::endl;

    // Ejemplo de invertir una cadena
    std::string cadena = "recursion";
    std::cout << "Cadena invertida: ";
    invertirCadena(cadena, cadena.length() - 1);
    std::cout << std::endl;

    return 0;
}
