#include <iostream>

// Variable global
int globalVar = 20;

// Función sin parámetros y sin valor de retorno
void mostrarMensaje() {
    std::cout << "Hola, mundo!" << std::endl;
}

// Función con parámetros y con valor de retorno
int multiplicar(int x, int y) {
    return x * y;
}

// Función sin parámetros pero con valor de retorno
int obtenerNumeroAleatorio() {
    return rand();
}

// Función con parámetros pero sin valor de retorno
void establecerValor(int &variable, int valor) {
    variable = valor;
}

// Ejemplo de variable local y global
void ejemploLocalGlobal() {
    int localVar = 10;  // Variable local
    std::cout << "Variable local: " << localVar << std::endl;
    std::cout << "Variable global: " << globalVar << std::endl;
}

// Función que demuestra la transferencia por valor
void cambiarValorPorValor(int x) {
    x = 10;  // Esto no afectará la variable original
}

// Función que demuestra la transferencia por referencia
void cambiarValorPorReferencia(int &x) {
    x = 10;  // Esto sí afectará la variable original
}

// Sobrecarga de funciones
int sumar(int a, int b) {
    return a + b;
}

double sumar(double a, double b) {
    return a + b;
}

// Ejemplo de función recursiva para calcular el factorial de un número
int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Caso recursivo
    }
}

int main() {
    // Llamada a la función sin parámetros y sin valor de retorno
    mostrarMensaje();

    // Llamada a la función con parámetros y con valor de retorno
    int resultadoMultiplicacion = multiplicar(5, 3);
    std::cout << "Resultado de multiplicar 5 y 3: " << resultadoMultiplicacion << std::endl;

    // Llamada a la función sin parámetros pero con valor de retorno
    int numeroAleatorio = obtenerNumeroAleatorio();
    std::cout << "Número aleatorio: " << numeroAleatorio << std::endl;

    // Uso de variables locales y globales
    ejemploLocalGlobal();

    // Transferencia por valor
    int valor = 5;
    cambiarValorPorValor(valor);
    std::cout << "Valor después de cambiar por valor: " << valor << std::endl;  // valor seguirá siendo 5

    // Transferencia por referencia
    cambiarValorPorReferencia(valor);
    std::cout << "Valor después de cambiar por referencia: " << valor << std::endl;  // valor será 10

    // Sobrecarga de funciones
    std::cout << "Suma de enteros (2 + 3): " << sumar(2, 3) << std::endl;
    std::cout << "Suma de doubles (2.5 + 3.5): " << sumar(2.5, 3.5) << std::endl;

    // Uso de recursividad para calcular factorial
    int numero = 5;
    std::cout << "Factorial de " << numero << " es: " << factorial(numero) << std::endl;

    return 0;
}
