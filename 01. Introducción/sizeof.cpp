#include <iostream>

int main() {
    // Uso de `sizeof`: Es una herramienta en C++ que te permite determinar el 
    // tamaño en bytes de un tipo de dato, variable, o estructura.

    // -    `sizeof` puede ser utilizado con cualquier tipo de dato, incluyendo 
    //      tipos definidos por el usuario como estructuras y clases.
    // -    El tamaño devuelto por `sizeof` puede variar según el compilador y
    //      la arquitectura del sistema. Por ejemplo, en una arquitectura de 32
    //      bits, `sizeof(int)` podría ser 4 bytes, mientras que en una
    //      arquitectura de 64 bits podría ser el mismo o diferente, dependiendo
    //      del compilador.

    int entero;
    char caracter;
    float flotante;
    double doble;
    bool booleano;

    std::cout << "Tamaño de int: " << sizeof(entero) << " bytes" << std::endl;
    std::cout << "Tamaño de char: " << sizeof(caracter) << " bytes" << std::endl;
    std::cout << "Tamaño de float: " << sizeof(flotante) << " bytes" << std::endl;
    std::cout << "Tamaño de double: " << sizeof(doble) << " bytes" << std::endl;
    std::cout << "Tamaño de bool: " << sizeof(booleano) << " bytes" << std::endl;

    return 0;
}
