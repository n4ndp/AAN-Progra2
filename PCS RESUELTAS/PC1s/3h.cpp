#include <iostream>

// Función recursiva para calcular e imprimir la representación binaria de un número
void imprimirBinario(int n) {
    if (n > 1) {
        imprimirBinario(n / 2);  // Llamada recursiva dividiendo por 2
    }
    std::cout << n % 2;  // Imprime el residuo de n dividido por 2
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número entero positivo
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    // Verificar si el número ingresado es positivo
    if (n < 0) {
        std::cout << "Por favor, ingrese un número entero positivo." << std::endl;
        return 1;
    }

    // Imprimir la representación binaria del número
    std::cout << "La representación binaria de " << n << " es: ";
    imprimirBinario(n);
    std::cout << std::endl;

    return 0;
}
