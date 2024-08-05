#include <iostream>
#include <limits>  // Biblioteca para valores especiales
#include <cmath>   // Biblioteca para funciones matemáticas

int main() {
    double x = 9.0;
    double y = 16.0;
    double z = 2.0;
    double angleRadians = M_PI / 4;  // 45 grados en radianes

    // Funciones Aritméticas
    std::cout << "Funciones Aritméticas:" << std::endl;
    std::cout << "abs(-x) = " << std::abs(-x) << std::endl;        // Valor absoluto
    std::cout << "fmod(x, y) = " << std::fmod(x, y) << std::endl;  // Resto de la división

    // Funciones Exponenciales y Logarítmicas
    std::cout << "\nFunciones Exponenciales y Logarítmicas:" << std::endl;
    std::cout << "exp(x) = " << std::exp(x) << std::endl;       // e^x
    std::cout << "log(x) = " << std::log(x) << std::endl;       // Logaritmo natural (base e)
    std::cout << "log10(x) = " << std::log10(x) << std::endl;   // Logaritmo en base 10
    std::cout << "pow(x, z) = " << std::pow(x, z) << std::endl;  // x^z
    std::cout << "sqrt(x) = " << std::sqrt(x) << std::endl;     // Raíz cuadrada

    // Funciones Trigonométricas
    std::cout << "\nFunciones Trigonométricas:" << std::endl;
    std::cout << "sin(angleRadians) = " << std::sin(angleRadians) << std::endl; // Seno
    std::cout << "cos(angleRadians) = " << std::cos(angleRadians) << std::endl; // Coseno
    std::cout << "tan(angleRadians) = " << std::tan(angleRadians) << std::endl; // Tangente
    std::cout << "asin(0.5) = " << std::asin(0.5) << std::endl; // Arco seno (radianes)
    std::cout << "acos(0.5) = " << std::acos(0.5) << std::endl; // Arco coseno (radianes)
    std::cout << "atan(1) = " << std::atan(1) << std::endl;   // Arco tangente (radianes)

    // Funciones de Redondeo
    std::cout << "\nFunciones de Redondeo:" << std::endl;
    std::cout << "ceil(2.3) = " << std::ceil(2.3) << std::endl; // Redondeo hacia arriba
    std::cout << "floor(2.7) = " << std::floor(2.7) << std::endl; // Redondeo hacia abajo
    std::cout << "round(2.5) = " << std::round(2.5) << std::endl; // Redondeo al entero más cercano
    std::cout << "trunc(2.9) = " << std::trunc(2.9) << std::endl; // Truncamiento (elimina la parte decimal)

    return 0;
}
