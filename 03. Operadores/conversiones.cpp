#include <iostream>

int main() {
    // Conversión de tipos de datos
    // -    Conversión implícita: el compilador realiza la conversión de forma automática
    // -    Conversión explícita: el programador realiza la conversión de forma manual

    // Conversión implícita
    int entero = 42;
    double decimal = entero;  // Conversión implícita de int a double

    std::cout << "Valor entero: " << entero << std::endl;
    std::cout << "Valor decimal: " << decimal << std::endl;

    // Conversión explícita C-style
    double decimal2 = 3.14;
    int entero2 = (int) decimal2;  // Casteo explícito de double a int

    std::cout << "Valor decimal2: " << decimal2 << std::endl;
    std::cout << "Valor entero2: " << entero2 << std::endl;

    // Conversión explícita C++-style
    int entero3 = static_cast<int>(decimal2);  // Casteo explícito de double a int con static_cast

    std::cout << "Valor entero3: " << entero3 << std::endl;

    return 0;
}
