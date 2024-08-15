#include <iostream>
#include <vector>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

// Función para generar un número aleatorio entre 1 y 30
int generarAleatorio() {
    return rand() % 30 + 1;
}

int main() {
    srand((time(0))); // Semilla para números aleatorios

    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    // Crear y llenar el vector con valores aleatorios entre 1 y 30
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

    // Borrar elementos que son múltiplos de 3
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] % 3 == 0) {
            vec.erase(vec.begin() + i);
            --i; // Para no saltar el siguiente elemento
        }
    }

    // Imprimir el vector modificado
    cout << "Vector modificado (sin múltiplos de 3): ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
