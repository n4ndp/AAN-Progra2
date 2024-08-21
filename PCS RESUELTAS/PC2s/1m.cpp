#include <iostream>
#include <vector>
#include <string>

// Función para verificar si un nombre ya está en el vector
bool nombreRepetido(const std::vector<std::string>& nombres, const std::string& nombre) {
    for (const std::string& n : nombres) {
        if (n == nombre) {
            return true;
        }
    }
    return false;
}

// Función para leer nombres y asegurarse de que no haya repeticiones
void leerNombres(std::vector<std::string>& nombres, int cantidad, const std::string& tipo) {
    for (int i = 1; i <= cantidad; ++i) {
        std::string nombre;
        do {
            std::cout << "Nombre " << i << ": ";
            std::getline(std::cin, nombre);
            if (nombreRepetido(nombres, nombre)) {
                std::cout << "El nombre ya está registrado, ingrese otro.\n";
            }
        } while (nombreRepetido(nombres, nombre));

        nombres.push_back(nombre);
    }
}

// Función para imprimir todas las parejas posibles
void imprimirParejas(const std::vector<std::string>& damas, const std::vector<std::string>& varones) {
    std::cout << "Parejas posibles:\n";
    for (const std::string& dama : damas) {
        for (const std::string& varon : varones) {
            std::cout << dama << " " << varon << std::endl;
        }
    }
}

int main() {
    int numDamas, numVarones;
    std::vector<std::string> damas, varones;

    // Leer número de damas y varones
    std::cout << "Numero de damas: ";
    std::cin >> numDamas;
    std::cin.ignore();  // Ignorar el salto de línea después de leer el número

    std::cout << "Numero de varones: ";
    std::cin >> numVarones;
    std::cin.ignore();  // Ignorar el salto de línea después de leer el número

    // Leer nombres de damas
    std::cout << "Nombre de Damas:\n";
    leerNombres(damas, numDamas, "Dama");

    // Leer nombres de varones
    std::cout << "Nombre de Varones:\n";
    leerNombres(varones, numVarones, "Varón");

    // Imprimir nombres registrados
    std::cout << "Nombres registrados de Damas:\n";
    for (const std::string& nombre : damas) {
        std::cout << nombre << std::endl;
    }

    std::cout << "Nombres registrados de Varones:\n";
    for (const std::string& nombre : varones) {
        std::cout << nombre << std::endl;
    }

    // Imprimir todas las parejas posibles
    imprimirParejas(damas, varones);

    return 0;
}
