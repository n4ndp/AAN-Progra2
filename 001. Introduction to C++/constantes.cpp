#include <iostream>

#define PI_DEFINE 3.14159
const double PI_CONST = 3.14159;
constexpr double PI_CONSTEXPR = 3.14159;

int main() {
    // Constantes en C++
    // -    Una constante es un valor que no puede ser modificado o alterado 
    //      durante la ejecución de un programa.
    // -    En C++, puedes declarar una constante utilizando la palabra clave
    //      `const`, `constexpr` o la directiva de preprocesador `#define`.
    // -    Las constantes son útiles para definir valores que no deben cambiar
    //      durante la ejecución del programa, como el valor de PI en matemáticas.
    // -    Las constantes son útiles para hacer que tu código sea más legible y
    //      mantenible, ya que los valores que no deben cambiar están claramente
    //      marcados como constantes.
    // -    Las constantes definidas con `const` y `constexpr` son más seguras
    //      que las definidas con `#define`, ya que las constantes definidas con
    //      `const` y `constexpr` tienen un tipo de dato asociado, mientras que
    //      las definidas con `#define` no.
    // -    `constexpr` garantiza que el valor de la constante se evalúe en tiempo
    //      de compilación, proporcionando así una mayor optimización.

    const int EDAD = 25;
    const double ALTURA = 1.75;
    constexpr char INICIAL = 'A';
    constexpr bool ES_MAYOR = true;

    std::cout << "Edad (const): " << EDAD << std::endl;
    std::cout << "Altura (const): " << ALTURA << " metros" << std::endl;
    std::cout << "Inicial (constexpr): " << INICIAL << std::endl;
    std::cout << "¿Es mayor de edad? (constexpr): " << (ES_MAYOR ? "Sí" : "No") << std::endl;

    // Intentar modificar una constante generará un error de compilación.
    // EDAD = 30; // Error: No puedes modificar una constante.
    // ES_MAYOR = false; // Error: No puedes modificar una constante.

    return 0;
}
