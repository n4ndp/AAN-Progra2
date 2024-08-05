#include <iostream>

int main() {
    // Declaración y definición de variables
    // -    Declaración: Se refiere a la creación de una variable sin asignarle un valor.
    // -    Definición: Se refiere a la creación de una variable con asignación de un valor.

    int edad = 25;
    double altura = 1.75;
    char inicial = 'A';
    bool esMayor = true;

    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "¿Es mayor de edad?: " << (esMayor ? "Sí" : "No") << std::endl;
                                            // Operador ternario (condición ? valor_si_cierto : valor_si_falso)
                                            // -    Si `esMayor` es verdadero, imprime "Sí".
                                            // -    Si `esMayor` es falso, imprime "No".

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
