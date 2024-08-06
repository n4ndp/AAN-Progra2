#include <iostream>

int main() {
    int numero1 = 10;
    int numero2 = 20;

    // If
    // Este bloque se ejecuta si la condición es verdadera
    if (numero1 < numero2) {
        std::cout << "numero1 es menor que numero2" << std::endl;
    }

    // If-else
    // Este bloque se ejecuta si la primera condición es falsa
    if (numero1 > numero2) {
        std::cout << "numero1 es mayor que numero2" << std::endl;
    } else {
        std::cout << "numero1 no es mayor que numero2" << std::endl;
    }

    // If-else if-else
    // Este bloque permite múltiples condiciones
    if (numero1 > numero2) {
        std::cout << "numero1 es mayor que numero2" << std::endl;
    } else if (numero1 == numero2) {
        std::cout << "numero1 es igual a numero2" << std::endl;
    } else {
        std::cout << "numero1 es menor que numero2" << std::endl;
    }

    // Switch-case
    // Este bloque se utiliza para comparar una variable con múltiples valores
    int opcion = 2;
    switch (opcion) {
        case 1:
            std::cout << "Opción 1 seleccionada" << std::endl;
            break;
        case 2:
            std::cout << "Opción 2 seleccionada" << std::endl;
            break;
        case 3:
            std::cout << "Opción 3 seleccionada" << std::endl;
            break;
        default:
            std::cout << "Opción no válida" << std::endl;
            break;
    }

    return 0;
}
