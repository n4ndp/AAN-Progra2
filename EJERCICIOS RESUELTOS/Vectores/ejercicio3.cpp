#include <iostream>
#include <vector>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time>

using namespace std;

// Función para generar un número aleatorio entre 1 y 10
int generarAleatorio() {
    return rand() % 10 + 1;
}

// Función para calcular la multiplicación de todos los números impares
int multiplicarImpares(const vector<int>& vec) {
    int producto = 1;
    bool hayImpares = false;

    for (int num : vec) {
        if (num % 2 != 0) {
            producto *= num;
            hayImpares = true;
        }
    }

    if (!hayImpares) {
        return 0; // Si no hay impares, devolver 0
    }

    return producto;
}

// Función para calcular la suma de todos los números pares
int sumarPares(const vector<int>& vec) {
    int suma = 0;
    for (int num : vec) {
        if (num % 2 == 0) {
            suma += num;
        }
    }
    return suma;
}

// Función para generar un nuevo vector con valores en posiciones múltiplo de 3 (incluyendo la posición 0)
vector<int> generarVectorMultiploDeTres(const vector<int>& vec) {
    vector<int> nuevoVector;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i % 3 == 0) {
            nuevoVector.push_back(vec[i]);
        }
    }
    return nuevoVector;
}

int main() {
    srand((time(0))); // Semilla para números aleatorios

    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    // Crear y llenar el vector con valores aleatorios entre 1 y 10
    vector<int> vec;
    for (int i = 0; i < N; ++i) {
        vec.push_back(generarAleatorio());
    }

    // Imprimir el vector original
    cout << "Vector original: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // a. Calcular la multiplicación de todos los números impares
    int productoImpares = multiplicarImpares(vec);
    cout << "Producto de los números impares: " << productoImpares << endl;

    // b. Calcular la suma de todos los números pares
    int sumaPares = sumarPares(vec);
    cout << "Suma de los números pares: " << sumaPares << endl;

    // c. Generar un nuevo vector con valores en posiciones múltiplo de 3 (incluyendo la posición 0)
    vector<int> vectorMultiploTres = generarVectorMultiploDeTres(vec);
    cout << "Vector con valores en posiciones múltiplo de 3: ";
    for (int val : vectorMultiploTres) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
