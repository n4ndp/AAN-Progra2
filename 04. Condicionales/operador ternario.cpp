#include <iostream>

int main() {
    // Ejemplo: determinar si una persona es mayor de edad
    int edad;
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    // Usando el operador ternario para determinar si una persona es mayor de edad o no
    std::string resultado = (edad >= 18) ? "Eres mayor de edad." : "Eres menor de edad.";

    std::cout << resultado << std::endl;

    // Ejemplo: determinar el mayor de dos números
    int numero1, numero2;
    std::cout << "Introduce el primer número: ";
    std::cin >> numero1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> numero2;

    // Usando el operador ternario para encontrar el número mayor
    int mayor = (numero1 > numero2) ? numero1 : numero2;

    std::cout << "El número mayor es: " << mayor << std::endl;

    return 0;
}
