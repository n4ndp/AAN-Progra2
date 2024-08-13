#include <iostream>
#include <cmath>
#include <limits>

// Función para calcular la suma de cubos
unsigned long long sumaCubos(int n) {
    unsigned long long suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += static_cast<unsigned long long>(pow(i, 3));
    }
    return suma;
}

// Función para calcular el valor según la fórmula
unsigned long long formulaCubos(int n) {
    unsigned long long valor = static_cast<unsigned long long>(n) * (n + 1) / 2;
    return valor * valor;
}

int main() {
    int n;
    
    // Solicitar al usuario el valor de n
    std::cout << "Ingrese un valor positivo para n: ";
    std::cin >> n;
    
    // Validar entrada
    if (n <= 0) {
        std::cerr << "El valor de n debe ser mayor que cero." << std::endl;
        return 1;
    }

    // Calcular la suma de cubos y el valor de la fórmula
    unsigned long long suma = sumaCubos(n);
    unsigned long long formula = formulaCubos(n);

    // Calcular el error de aproximación
    long long error = static_cast<long long>(suma) - static_cast<long long>(formula);

    // Mostrar resultados
    std::cout << "Suma de cubos: " << suma << std::endl;
    std::cout << "Valor segun la formula: " << formula << std::endl;
    std::cout << "Error de aproximacion: " << error << std::endl;

    // Pruebas con diferentes valores de n
    // for (n = 10; n <= 1000000; n += 100) {
    //     suma = sumaCubos(n);
    //     formula = formulaCubos(n);
    //     error = static_cast<long long>(suma) - static_cast<long long>(formula);
    //     std::cout << "n = " << n << ", Suma: " << suma << ", Formula: " << formula << ", Error: " << error << std::endl;
    // }

    
    // -   Errores Numéricos: Para valores muy grandes de n, el cálculo puede resultar en errores debido a la limitación de 
    //     la representación numérica en enteros. El uso de unsigned long long ayuda a mitigar estos problemas, pero para 
    //     valores extremadamente grandes, puede ser necesario usar tipos de datos que manejen números grandes o bibliotecas 
    //     especializadas.

    // -   Comparación: En sistemas numéricos finitos, las operaciones pueden generar pequeñas diferencias debido a la precisión 
    //     limitada. Esto puede originar errores al comparar dos grandes números casi iguales.
    

    return 0;
}
