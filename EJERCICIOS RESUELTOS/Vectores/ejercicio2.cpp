#include <iostream>
#include <vector>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time>
#include <numeric>

using namespace std;

// Función para generar un número aleatorio entre 0 y 99
int generarAleatorio() {
    return rand() % 100;
}

// Función para calcular el promedio de todos los números del vector
double calcularPromedio(vector<int> vec) {
    // double suma = accumulate(vec.begin(), vec.end(), 0);
    double suma = 0;
    for (int num : vec) {
        suma += num;
    }

    return suma / vec.size();
}

// Función para calcular la suma de todos los números menores a un valor dado
int sumarMenoresQue(const vector<int>& vec, int valor) {
    int suma = 0;
    for (int num : vec) {
        if (num < valor) {
            suma += num;
        }
    }
    return suma;
}

// Función para generar un nuevo vector con la diferencia entre el promedio y cada número
vector<double> generarVectorDiferencias(const vector<int>& vec, double promedio) {
    vector<double> diferencias;
    for (int num : vec) {
        diferencias.push_back(promedio - num);
    }
    return diferencias;
}

int main() {
    srand((time(0))); // Semilla para números aleatorios

    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    // Crear y llenar el vector con valores aleatorios entre 0 y 99
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

    // a. Calcular el promedio de todos los números del vector
    double promedio = calcularPromedio(vec);
    cout << "Promedio de los números del vector: " << promedio << endl;

    // b. Calcular la suma de todos los números menores a un valor dado
    int valor;
    cout << "Ingrese un valor para calcular la suma de los números menores: ";
    cin >> valor;
    int sumaMenores = sumarMenoresQue(vec, valor);
    cout << "Suma de todos los números menores a " << valor << ": " << sumaMenores << endl;

    // c. Generar un nuevo vector que almacena para cada número la diferencia entre el promedio y el número
    vector<double> diferencias = generarVectorDiferencias(vec, promedio);
    cout << "Vector de diferencias (promedio - número): ";
    for (double dif : diferencias) {
        cout << dif << " ";
    }
    cout << endl;

    return 0;
}
