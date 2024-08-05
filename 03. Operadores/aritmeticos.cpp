#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    // Suma
    int suma = a + b;
    std::cout << "Suma (" << a << " + " << b << "): " << suma << std::endl;

    // Resta
    int resta = a - b;
    std::cout << "Resta (" << a << " - " << b << "): " << resta << std::endl;

    // Multiplicación
    int multiplicacion = a * b;
    std::cout << "Multiplicación (" << a << " * " << b << "): " << multiplicacion << std::endl;

    // División entera
    int division = a / b;
    std::cout << "División entera (" << a << " / " << b << "): " << division << std::endl;

    // División con punto flotante
    double division_float = static_cast<double>(a) / b;
    std::cout << "División con punto flotante (" << a << " / " << b << "): " << division_float << std::endl;

    // Módulo (resto de la división)
    int modulo = a % b;
    std::cout << "Módulo (" << a << " % " << b << "): " << modulo << std::endl;

    return 0;
}
