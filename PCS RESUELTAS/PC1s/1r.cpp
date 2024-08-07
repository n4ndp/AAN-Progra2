#include <iostream>
#include <string>

int main() {
    std::string texto;
    std::cout << "Ingrese un texto con dígitos numéricos: ";
    std::cin >> texto;

    // Encontrar el dígito mayor en el texto
    int digitoMayor = '0';

    for (char c : texto) {
        if (c > digitoMayor) {
            digitoMayor = c;
        }
    }

    // Imprimir el dígito mayor
    std::cout << "El dígito mayor es: " << int(digitoMayor - '0') << std::endl;

    // Calcular la suma de los incrementos necesarios
    int sumaIncrementos = 0;
    for (char c : texto) {
        int valorActual = c - '0'; // Convertir el carácter a su valor numérico
        int incremento = digitoMayor - c; // Calcular cuánto se necesita incrementar
        sumaIncrementos += incremento;
    }

    // Imprimir el resultado
    std::cout << sumaIncrementos << std::endl;

    return 0;
}
