#include <iostream>
#include <string>

// Función recursiva para reemplazar un carácter en una cadena
std::string reemplazarCaracter(const std::string& texto, char actual, char nuevo, int indice = 0) {
    // Caso base: si el índice ha alcanzado el final de la cadena
    if (indice == texto.length()) {
        return "";
    }

    // Determinar el carácter actual y si debe ser reemplazado
    char caracter = (texto[indice] == actual) ? nuevo : texto[indice];

    // Llamada recursiva para continuar con el siguiente carácter
    return caracter + reemplazarCaracter(texto, actual, nuevo, indice + 1);
}

int main() {
    std::string texto;
    char actual, nuevo;

    // Solicitar al usuario que ingrese el texto, el carácter a reemplazar y el nuevo carácter
    std::cout << "Ingrese el texto: ";
    std::getline(std::cin, texto);
    std::cout << "Ingrese el carácter a reemplazar: ";
    std::cin >> actual;
    std::cout << "Ingrese el nuevo carácter: ";
    std::cin >> nuevo;

    // Llamar a la función recursiva y obtener el resultado
    std::string resultado = reemplazarCaracter(texto, actual, nuevo);

    // Mostrar el texto original y el texto modificado
    std::cout << "Texto original: " << texto << std::endl;
    std::cout << "Texto modificado: " << resultado << std::endl;

    return 0;
}
