#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

void generarMatriz(std::vector<std::vector<char>>& matriz, int filas, int columnas) {
    std::srand(std::time(0)); // Semilla para generar números aleatorios

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = 'a' + std::rand() % 26; // Genera una letra aleatoria entre 'a' y 'z'
        }
    }
}

void imprimirMatriz(const std::vector<std::vector<char>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& letra : fila) {
            std::cout << letra << " ";
        }
        std::cout << std::endl;
    }
}

bool buscarPalabra(const std::vector<std::vector<char>>& matriz, const std::string& palabra, int& fila, int& columna) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    int len = palabra.length();

    // Buscar en direcciones: derecha, abajo, diagonal derecha-abajo, diagonal izquierda-abajo
    int direcciones[4][2] = {{0, 1}, {1, 0}, {1, 1}, {1, -1}};

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            for (int d = 0; d < 4; ++d) {
                int x = i, y = j, k = 0;

                while (k < len && x >= 0 && x < filas && y >= 0 && y < columnas && matriz[x][y] == palabra[k]) {
                    ++k;
                    x += direcciones[d][0];
                    y += direcciones[d][1];
                }

                if (k == len) {
                    fila = i;
                    columna = j;
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas y columnas: ";
    std::cin >> filas >> columnas;

    // Crear la matriz dinámicamente
    std::vector<std::vector<char>> matriz(filas, std::vector<char>(columnas));

    // Generar e imprimir la matriz de letras aleatorias
    generarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz);

    std::string palabra;
    while (true) {
        std::cout << "Ingrese una palabra (o 'salir' para terminar): ";
        std::cin >> palabra;

        if (palabra == "salir") {
            break;
        }

        int fila, columna;
        if (buscarPalabra(matriz, palabra, fila, columna)) {
            std::cout << "Respuesta: [" << fila << ", " << columna << "]" << std::endl;
        } else {
            std::cout << "Respuesta: No se encuentra." << std::endl;
        }
    }

    return 0;
}
