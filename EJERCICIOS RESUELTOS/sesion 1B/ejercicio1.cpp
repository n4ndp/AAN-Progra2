// Desarrolla un programa que convierta una temperatura dada en grados Celsius a grados Fahrenheit y viceversa. 
// El usuario debe poder seleccionar la dirección de la conversión y proporcionar la temperatura a convertir.
// -    Celsius a Fahrenheit es: F = (C * 9/5) + 32
// -    Fahrenheit a Celsius es: C = (F - 32) * 5/9

#include <iostream>

// Función para convertir de Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Función para convertir de Fahrenheit a Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperatura;
    int direccion;

    std::cout << "Introduce la temperatura a convertir: ";
    std::cin >> temperatura;

    std::cout << "Introduce la dirección de la conversión (0 = Celsius a Fahrenheit, 1 = Fahrenheit a Celsius): ";
    std::cin >> direccion;

    double conversion = (direccion == 0) ? celsiusToFahrenheit(temperatura) : fahrenheitToCelsius(temperatura);

    std::cout << "La temperatura convertida es: " << conversion << std::endl;

    return 0;
}
