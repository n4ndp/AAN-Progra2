#include <iostream>

int main() {
    int count = 0;

    // Bucle while
    std::cout << "Bucle while:" << std::endl;
    while (count < 5) {
        std::cout << "Contador: " << count << std::endl;
        ++count;
    }

    // Reiniciar el contador para el siguiente bucle
    count = 0;

    // Bucle do-while
    std::cout << "\nBucle do-while:" << std::endl;
    do {
        std::cout << "Contador: " << count << std::endl;
        ++count;
    } while (count < 5);




    // Ejemplo para ilustrar el caso en que la condición es falsa desde el inicio

    // Reiniciar el contador para el siguiente bucle
    count = 10;

    // Bucle while con condición falsa
    std::cout << "\nBucle while con condición falsa al inicio:" << std::endl;
    while (count < 5) {
        std::cout << "Contador: " << count << std::endl;
        ++count;
    }
    // Mostrar que el bucle while no ejecutó ninguna iteración
    if (count == 10) {
        std::cout << "El bucle while no ejecutó ninguna iteración." << std::endl;
    }

    // Reiniciar el contador para el siguiente bucle
    count = 10;

    // Bucle do-while con condición falsa
    std::cout << "\nBucle do-while con condición falsa al inicio:" << std::endl;
    do {
        std::cout << "Contador: " << count << std::endl;
        ++count;
    } while (count < 5);

    // Mostrar que el bucle do-while ejecutó al menos una iteración
    if (count == 11) {
        std::cout << "El bucle do-while ejecutó al menos una iteración." << std::endl;
    }

    return 0;
}
