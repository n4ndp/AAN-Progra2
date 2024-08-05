#include <iostream>

int main() {
    // Declaración y definición de variables
    int edad = 25;              // Declara una variable entera llamada 'edad' e inicializa con el valor 25
    double altura = 1.75;       // Declara una variable de tipo doble llamada 'altura' e inicializa con el valor 1.75
    char inicial = 'A';         // Declara una variable de tipo carácter llamada 'inicial' e inicializa con el valor 'A'
    bool esMayor = true;        // Declara una variable booleana llamada 'esMayor' e inicializa con el valor true

    // Impresión
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "¿Es mayor de edad?: " << (esMayor ? "Sí" : "No") << std::endl; /* Operador ternario:
                                                                                        * Si 'esMayor' es true, imprime "Sí"
                                                                                        * Si 'esMayor' es false, imprime "No" */

    // Modificación
    edad = 30;
    altura = 1.80;
    inicial = 'B';
    esMayor = false;

    std::cout << "Edad actualizada: " << edad << std::endl;
    std::cout << "Altura actualizada: " << altura << " metros" << std::endl;
    std::cout << "Inicial actualizada: " << inicial << std::endl;
    std::cout << "¿Es mayor de edad ahora?: " << (esMayor ? "Sí" : "No") << std::endl;

    return 0;
}
