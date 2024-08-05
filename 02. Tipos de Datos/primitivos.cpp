#include <iostream>
#include <limits> // std::numeric_limits

int main() {
    // En C++, los tipos de datos primitivos se dividen en cuatro categorías principales:
    // 1. Enteros: Representan números enteros, positivos o negativos.
    // 2. Punto Flotante: Representan números reales, con decimales.
    // 3. Caracteres: Representan caracteres individuales.
    // 4. Booleanos: Representan valores lógicos, verdadero o falso.

    int edad = 30;                          // Entero estándar (4 bytes en la mayoría de las plataformas)
    short altura = 175;                     // Entero corto (2 bytes)
    long poblacion = 1000000L;              // Entero largo (4 bytes o 8 bytes, dependiendo de la plataforma)
    long long distancia = 10000000000LL;    // Entero muy largo (8 bytes)
    unsigned int positivos = 4000;          // Entero sin signo (4 bytes)

    float pi = 3.14f;                       // Precisión simple (4 bytes)
    double e = 2.7182818284;                // Doble precisión (8 bytes)
    long double phi = 1.6180339887;         // Precisión extendida (10 bytes o más, dependiendo de la plataforma)

    char letra = 'A';                       // Carácter estándar (1 byte)
    unsigned char letraSinSigno = 'B';      // Carácter sin signo (1 byte)
    signed char letraConSigno = 'C';        // Carácter con signo (1 byte)

    bool esMayorDeEdad = true;              // Valor booleano, puede ser true o false (1 byte)
    
    // Se pueden obtener los límites de los tipos de datos con las siguientes funciones
    std::cout << "El valor máximo de un entero es: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "El valor mínimo de un entero es: " << std::numeric_limits<int>::min() << std::endl;

    std::cout << "El valor máximo de un flotante es: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "El valor mínimo de un flotante es: " << std::numeric_limits<float>::min() << std::endl;

    return 0;
}
