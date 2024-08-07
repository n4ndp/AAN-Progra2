#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre 1 y 100
int generarNumeroAleatorio() {
    srand(time(0)); // Inicializar la semilla para la generación de números aleatorios
    return rand() % 100 + 1; // Generar un número aleatorio entre 1 y 100
}

// Función para solicitar y verificar la adivinanza del usuario
void adivinarNumero(int numeroAleatorio) {
    int intento;
    int intentos = 0;

    while (true) {
        std::cout << "Ingresa un numero: ";
        std::cin >> intento;
        intentos++;

        if (intento == numeroAleatorio) {
            std::cout << "Adivinaste el numero" << std::endl;
            break;
        } else if (intento > numeroAleatorio) {
            std::cout << "Ingresaste un numero mayor" << std::endl;
        } else {
            std::cout << "Ingresaste un numero menor" << std::endl;
        }
    }

    std::cout << "Lo hiciste en " << intentos << " intentos." << std::endl;
}

// otra version (con do-while)
// void adivinarNumeroDOWHILE(int numeroAleatorio) {
//     int intento;
//     int intentos = 0;

//     do {
//         std::cout << "Ingresa un numero: ";
//         std::cin >> intento;
//         intentos++;

//         if (intento == numeroAleatorio) {
//             std::cout << "Adivinaste el numero" << std::endl;
//         } else if (intento > numeroAleatorio) {
//             std::cout << "Ingresaste un numero mayor" << std::endl;
//         } else {
//             std::cout << "Ingresaste un numero menor" << std::endl;
//         }
//     } while (intento != numeroAleatorio);

//     std::cout << "Lo hiciste en " << intentos << " intentos." << std::endl;
// }

int main() {
    int numeroAleatorio = generarNumeroAleatorio();
    adivinarNumero(numeroAleatorio);

    return 0;
}
