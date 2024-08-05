// Escribe un programa que calcule el área de diferentes figuras geométricas. 
// Se proporcionarán las fórmulas de las figuras y el usuario debe ingresar 
// los datos necesarios. El programa debe usar funciones para calcular el área de cada figura.
// -    Triángulo: A = (b * h) / 2
// -    Circulo: A = π * r^2
// -    Rectángulo: A = b * h

#include <iostream>
#include <cmath> // Para M_PI

// Función para calcular el área del triángulo
double areaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}

// Función para calcular el área del círculo
double areaCirculo(double radio) {
    return M_PI * radio * radio;
}

// Función para calcular el área del rectángulo
double areaRectangulo(double ancho, double alto) {
    return ancho * alto;
}

int main() {
    double base = 5.0, altura = 10.0;
    double radio = 7.0;
    double ancho = 8.0, alto = 12.0;

    std::cout << "Área del triángulo: " << areaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << areaCirculo(radio) << std::endl;
    std::cout << "Área del rectángulo: " << areaRectangulo(ancho, alto) << std::endl;

    return 0;
}
