#include <iostream>
#include <vector>
#include <algorithm>

// Función para eliminar elementos repetidos
// std::vector<int> eliminarRepetidos(std::vector<int>& arr) {
//     std::vector<int> arrSinRepetidos;

//     for (int i = 0; i < arr.size(); ++i) {
//         // Si el elemento no está en arrSinRepetidos, lo agregamos
//         if (std::find(arrSinRepetidos.begin(), arrSinRepetidos.end(), arr[i]) == arrSinRepetidos.end()) {
//             arrSinRepetidos.push_back(arr[i]);
//         }
//     }

//     return arrSinRepetidos;
// }
std::vector<int> eliminarRepetidos(const std::vector<int>& arr) {
    std::vector<int> arrSinRepetidos;

    for (int i = 0; i < arr.size(); ++i) {
        bool encontrado = false;
        // Verificar si el elemento ya está en arrSinRepetidos
        for (int j = 0; j < arrSinRepetidos.size(); ++j) {
            if (arr[i] == arrSinRepetidos[j]) {
                encontrado = true;
                break;
            }
        }
        // Si no se encontró, agregar el elemento
        if (!encontrado) {
            arrSinRepetidos.push_back(arr[i]);
        }
    }

    return arrSinRepetidos;
}

// Función para imprimir el arreglo
void imprimirArreglo(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int tam;
    
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> tam;

    std::vector<int> arr(tam);
    std::cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < tam; ++i) {
        std::cin >> arr[i];
    }

    // Eliminar los elementos repetidos
    std::vector<int> arrSinRepetidos = eliminarRepetidos(arr);
    
    // Imprimir el arreglo sin repetidos y su nuevo tamaño
    std::cout << "Arreglo sin repetidos: ";
    imprimirArreglo(arrSinRepetidos);
    std::cout << "Nuevo tamaño: " << arrSinRepetidos.size() << std::endl;

    return 0;
}
