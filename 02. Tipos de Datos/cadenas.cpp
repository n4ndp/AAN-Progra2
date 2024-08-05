#include <iostream>
#include <cstring>  // Para funciones C-style con char arrays
#include <string>   // Para std::string

int main() {
    // Cadenas de caracteres en C++
    // En C++, hay varias formas de representar y manipular cadenas de caracteres.
    
    // 1. Cadenas de caracteres con const char* (versión C)
    // - Se utilizan punteros a const char para representar cadenas de caracteres en C.
    // - Las cadenas se almacenan en memoria de solo lectura, por lo que no se deben modificar.
    
    const char* saludo = "Hola, Mundo!";
    const char* nombre = "Juan";

    std::cout << "Cadenas de caracteres con const char*:" << std::endl;
    std::cout << "Saludo: " << saludo << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;

    // sizeof(saludo) devuelve el tamaño del puntero (4 o 8 bytes dependiendo de la arquitectura), no del contenido de la cadena
    std::cout << "Tamaño del puntero 'saludo': " << sizeof(saludo) << " bytes" << std::endl;

    // Para obtener la longitud de la cadena, se utiliza la función strlen de <cstring>
    std::cout << "Longitud de 'saludo': " << std::strlen(saludo) << " caracteres" << std::endl;

    // 2. Cadenas de caracteres con char arrays
    // - Se utilizan arrays de caracteres para representar cadenas de caracteres.
    // - Las cadenas se almacenan en una región de memoria modificable, por lo que se pueden cambiar.
    
    char saludoChar[] = "Hola, Mundo!";
    char nombreChar[] = "Juan";

    std::cout << "\nCadenas de caracteres con char arrays:" << std::endl;
    std::cout << "Saludo: " << saludoChar << std::endl;
    std::cout << "Nombre: " << nombreChar << std::endl;

    // sizeof(saludoChar) devuelve el tamaño total del array, incluyendo el carácter nulo '\0'
    std::cout << "Tamaño del array 'saludoChar': " << sizeof(saludoChar) << " bytes" << std::endl;

    // Para obtener la longitud de la cadena, se utiliza la función strlen de <cstring>
    std::cout << "Longitud de 'saludoChar': " << std::strlen(saludoChar) << " caracteres" << std::endl;

    // Modificación de la cadena en un array de caracteres
    saludoChar[5] = 'X';  // Cambia el sexto carácter de la cadena
    std::cout << "Saludo después de modificarlo: " << saludoChar << std::endl;

    // 3. Cadenas de caracteres con std::string
    // - La clase std::string ofrece una forma más segura y flexible para trabajar con cadenas de caracteres en C++.
    // - Internamente, std::string gestiona la memoria y el tamaño de la cadena.
    // - Permite operaciones como concatenación, subcadenas, y comparación de manera sencilla.
    
    std::string saludoString = "Hola, Mundo!";
    std::string nombreString = "Juan";

    std::cout << "\nCadenas de caracteres con std::string:" << std::endl;
    std::cout << "Saludo: " << saludoString << std::endl;
    std::cout << "Nombre: " << nombreString << std::endl;

    // Tamaño de la cadena en std::string
    std::cout << "Tamaño de 'saludoString': " << saludoString.size() << " caracteres" << std::endl;

    // Concatenación de cadenas usando el operador '+'
    std::string mensajeCompleto = saludoString + " Mi nombre es " + nombreString + ".";
    std::cout << "Mensaje completo: " << mensajeCompleto << std::endl;

    // Subcadena usando la función substr(start, length)
    std::string subcadena = mensajeCompleto.substr(6, 5);  // Extrae 5 caracteres empezando desde el índice 6
    std::cout << "Subcadena: " << subcadena << std::endl;

    // Comparación de cadenas usando el operador '=='
    if (saludoString == "Hola, Mundo!") {
        std::cout << "La cadena 'saludoString' es igual a 'Hola, Mundo!'" << std::endl;
    }

    // La clase std::string proporciona muchas más funciones y operadores para trabajar con cadenas de caracteres.
    // Algunas de ellas son: find, replace, erase, insert, etc.

    return 0;
}
