// Escribe un programa en C++ que tome un número entero de 4 cifras 
// introducido por el usuario y lo invierta.

#include <iostream>

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número entero de 4 cifras
    std::cout << "Introduce un número entero de 4 cifras: ";
    std::cin >> numero;

    // Extraer las cifras del número
    int mil = numero / 1000;          // Cifra de los miles
    int centena = (numero % 1000) / 100; // Cifra de las centenas
    int decena = (numero % 100) / 10;   // Cifra de las decenas
    int unidad = numero % 10;           // Cifra de las unidades

    // Construir el número invertido
    int numeroInvertido = unidad * 1000 + decena * 100 + centena * 10 + mil;

    // Mostrar el número invertido
    std::cout << "El número invertido es: " << numeroInvertido << std::endl;

    return 0;
}
