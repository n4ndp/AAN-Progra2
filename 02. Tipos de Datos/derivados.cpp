#include <iostream>

// Declaración de la función 'sumar'
int sumar(int a, int b);

// Definición de la función 'sumar'
int sumar(int a, int b) {
    return a + b;
}

int main() {
    // En C++, los tipos de datos derivados se construyen a partir de los tipos de datos primitivos.

    // 1. Arrays
    // -    Un array es una colección de elementos del mismo tipo, almacenados en una memoria contigua.
    // -    La longitud de un array se define en tiempo de compilación y no puede cambiarse.
    // -    La sintaxis para declarar un array es: tipo nombre[longitud].
    // -    También se puede inicializar un array con una lista de valores entre llaves. Si no se 
    //      especifica la longitud, se infiere del número de elementos.
    // -    Los elementos de un array se acceden mediante el operador de corchetes [].
    // -    Un array puede ser modificado asignando un nuevo valor a uno de sus elementos.

    int numeros[] = {1, 2, 3, 4, 5}; // Array de enteros con 5 elementos

    std::cout << "Array de enteros:" << std::endl;
    for(int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
    }

    numeros[2] = 10;  // Modifica el tercer elemento del array
    std::cout << "Elemento 2 después de modificarlo: " << numeros[2] << std::endl;

    // 2. Punteros
    // -    Un puntero es una variable que almacena la dirección de memoria de otra variable.
    // -    La dirección de memoria de una variable se obtiene con el operador &.
    // -    La dirección de memoria almacenada en un puntero (valor de un puntero) se obtiene con el operador *.
    // -    Un puntero puede ser modificado asignándole la dirección de memoria de otra variable.

    int valor = 10;
    int* puntero = &valor;  // Puntero que apunta a la dirección de 'valor'

    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Dirección de 'valor': " << &valor << std::endl;
    std::cout << "Dirección almacenada en el puntero: " << puntero << std::endl;
    std::cout << "Valor apuntado por el puntero: " << *puntero << std::endl;

    *puntero = 20;  // Modifica el valor de 'valor' a través del puntero
    std::cout << "Valor después de modificarlo a través del puntero: " << valor << std::endl;

    int valor2 = 30;
    puntero = &valor2;  // Cambia la dirección almacenada en el puntero
    std::cout << "Dirección de 'valor2': " << &valor2 << std::endl;
    std::cout << "Dirección almacenada en el puntero después de cambiarla: " << puntero << std::endl;
    std::cout << "Valor apuntado por el puntero después de cambiar la dirección: " << *puntero << std::endl;

    // 3. Referencias
    // -    Una referencia es un alias (nombre alternativo) para una variable.
    // -    Una referencia se declara con el tipo de la variable seguido del símbolo &.
    // -    Una referencia no puede ser nula y debe ser inicializada al declararse.
    // -    Una referencia no puede cambiar de variable una vez inicializada.
    // -    Una referencia se comporta como la variable a la que hace referencia.

    int valor3 = 40;
    int& referencia = valor3;  // Referencia a 'valor3'

    std::cout << "Valor de 'valor3': " << valor3 << std::endl;
    std::cout << "Valor de la referencia: " << referencia << std::endl;

    referencia = 50;  // Modifica 'valor3' a través de la referencia
    std::cout << "Valor de 'valor3' después de modificarlo a través de la referencia: " << valor3 << std::endl;

    int valor4 = 60;
    // int& referencia2;  // Error: Una referencia debe ser inicializada al declararse
    // referencia = valor4;  // Error: Una referencia no puede cambiar de variable una vez inicializada

    // 4. Funciones
    // -    Una función es un bloque de código que realiza una tarea específica.
    // -    Una función puede recibir cero o más parámetros y devolver un valor.
    // -    La declaración de una función incluye el tipo de dato que devuelve, el nombre de la función y los parámetros.
    // -    La definición de una función incluye el cuerpo de la función, donde se implementa la tarea.
    // -    Una función se llama con el nombre de la función seguido de los argumentos entre paréntesis.
    // -    El valor devuelto por una función se obtiene con la instrucción return.

    int resultado = sumar(70, 80);
    std::cout << "Resultado de sumar(70, 80): " << resultado << std::endl;

    // int resultado2 = sumar(90, 100, 110);  // Error: La función 'sumar' no acepta tres argumentos

    return 0;
}
