#include <iostream>
#include <vector>
#include <cmath> // Para sqrt()

// Función para calcular el promedio de un vector
double calcularPromedio(const std::vector<double>& vec) {
    double suma = 0;
    for (double num : vec) {
        suma += num;
    }
    return suma / vec.size();
}

// Función para calcular la desviación estándar poblacional
double calcularDesviacionEstandar(const std::vector<double>& vec) {
    double media = calcularPromedio(vec);
    double sumaDiferenciasCuadradas = 0;

    for (double num : vec) {
        sumaDiferenciasCuadradas += (num - media) * (num - media);
    }

    return sqrt(sumaDiferenciasCuadradas / vec.size());
}

int main() {
    int N;
    std::vector<double> vec;

    // Solicitar al usuario el tamaño del vector
    std::cout << "Ingrese el número de elementos (N): ";
    std::cin >> N;

    // Solicitar al usuario que ingrese los números reales
    std::cout << "Ingrese " << N << " números reales:\n";
    for (int i = 0; i < N; ++i) {
        double numero;
        std::cin >> numero;
        vec.push_back(numero);
    }

    // Calcular y mostrar la desviación estándar
    double desviacionEstandar = calcularDesviacionEstandar(vec);
    std::cout << "La desviación estándar poblacional es: " << desviacionEstandar << std::endl;

    return 0;
}
