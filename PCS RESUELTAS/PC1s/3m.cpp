#include <iostream>

// Función recursiva para hallar la suma de los cuadrados de los números de 1 a n
int sumaCuadrados(int n) {
    // Caso base: Si n es 1, la suma es 1^2
    if (n == 1) {
        return 1;
    }
    // Caso recursivo: Sumar el cuadrado de n con la suma de los cuadrados de los números menores a n
    return (n * n) + sumaCuadrados(n - 1);
}

// Función recursiva para hallar el residuo de la división entera entre dos números enteros positivos
int residuoDivision(int dividendo, int divisor) {
    // Caso base: Si el dividendo es menor que el divisor, el residuo es el dividendo
    if (dividendo < divisor) {
        return dividendo;
    }
    // Caso recursivo: Restar el divisor del dividendo y llamar recursivamente con el nuevo dividendo
    return residuoDivision(dividendo - divisor, divisor);
}

int main() {
    int opcion, n, dividendo, divisor;

    // Menú para seleccionar la operación
    std::cout << "Seleccione la operacion a realizar:\n";
    std::cout << "1) Suma de cuadrados de 1 a n\n";
    std::cout << "2) Residuo de la division entera\n";
    std::cin >> opcion;

    if (opcion == 1) {
        // Suma de cuadrados
        std::cout << "N : ";
        std::cin >> n;
        int resultadoSuma = sumaCuadrados(n);
        std::cout << "La suma de los cuadrados es : " << resultadoSuma << std::endl;
    } else if (opcion == 2) {
        // Residuo de la división entera
        std::cout << "Dividendo : ";
        std::cin >> dividendo;
        std::cout << "Divisor : ";
        std::cin >> divisor;
        int resultadoResiduo = residuoDivision(dividendo, divisor);
        std::cout << "El residuo es : " << resultadoResiduo << std::endl;
    } else {
        std::cout << "Opción no válida." << std::endl;
    }

    return 0;
}
