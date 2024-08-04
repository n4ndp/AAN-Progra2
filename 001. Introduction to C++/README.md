# **Introducción a C++**

C++ es un lenguaje de programación de propósito general que fue desarrollado como una extensión del lenguaje C, añadiendo características como clases, objetos y excepciones. Combina características de programación de alto nivel y bajo nivel, lo que lo hace versátil y eficiente. C++ es ampliamente utilizado en el desarrollo de sistemas operativos, software de aplicación, juegos y motores gráficos, entre otros.

## **Características Principales**

1. **Programación Orientada a Objetos (OOP)**: C++ soporta conceptos OOP como clases, objetos, herencia, polimorfismo y encapsulamiento.
2. **Tipos de Datos Estáticos**: Los tipos de datos se definen en tiempo de compilación, lo que permite una mayor eficiencia y detección temprana de errores.
3. **Eficiencia y Control**: Permite un control detallado sobre la gestión de memoria y el uso de recursos del sistema.
4. **Compatibilidad con C**: C++ es compatible con el lenguaje C, lo que permite utilizar código C en programas C++.
5. **Librería Estándar**: Incluye una amplia biblioteca estándar (STL) que proporciona estructuras de datos, algoritmos y funciones de utilidad.
6. **Manejo de Excepciones**: Facilita el manejo de errores y situaciones excepcionales de manera controlada.

## **Estructura Básica de un Programa en C++**

Un programa en C++ típicamente sigue una estructura básica que incluye directivas de preprocesador, la función principal, declaraciones de variables y funciones, y el flujo de ejecución del programa. A continuación se muestra un ejemplo de un programa básico en C++ que imprime "¡Hola, Mundo!" en la consola:

```cpp
#include <iostream>

int main() {
    std::cout << "¡Hola, Mundo!" << std::endl;
    return 0;
}
```

### **Explicación del Código**

1. **Directivas de Preprocesador**: 
   ```cpp
   #include <iostream>
   ```
   Las directivas de preprocesador son instrucciones que se ejecutan antes de la compilación del programa. `#include` es una directiva que se utiliza para incluir archivos de encabezado. En este caso, `#include <iostream>` incluye la biblioteca de entrada y salida estándar de C++ que permite usar `std::cout` para imprimir en la consola.

2. **Espacio de Nombres (`namespace`)**:
   ```cpp
   using namespace std;
   ```
   Aunque no está incluido en el ejemplo inicial, es común ver la directiva `using namespace std;` en programas simples. Esta directiva permite usar nombres del espacio de nombres `std` sin tener que escribir `std::` antes de ellos. Sin embargo, su uso puede ser desaconsejado en programas grandes debido a posibles conflictos de nombres.

3. **Función Principal (`main`)**:
   ```cpp
   int main() {
       ...
       return 0;
   }
   ```
   La función `main` es el punto de entrada de todo programa C++. Su ejecución comienza aquí. La función `main` debe devolver un valor entero, donde `return 0;` indica que el programa terminó correctamente. Cualquier otro valor puede indicar que ocurrió un error.

4. **Salida en Consola**:
   ```cpp
   std::cout << "¡Hola, Mundo!" << std::endl;
   ```
   `std::cout` es un objeto de la biblioteca estándar de C++ que representa la salida estándar de la consola. El operador `<<` se utiliza para enviar datos a `std::cout`. `std::endl` es un manipulador que inserta un carácter de nueva línea y vacía el búfer de salida, asegurando que el mensaje se muestre inmediatamente.

### **Más Conceptos Importantes**

5. **Comentarios**:
   Los comentarios son anotaciones en el código que no afectan su ejecución. Se utilizan para explicar y documentar el código. En C++, los comentarios de una sola línea comienzan con `//`, y los comentarios de múltiples líneas están delimitados por `/*` y `*/`.

   ```cpp
   // Esto es un comentario de una sola línea
   /* Esto es un comentario
      de múltiples líneas */
   ```

6. **Declaración de Variables**:
   Las variables son contenedores para almacenar datos. Deben ser declaradas con un tipo específico antes de usarse.

   ```cpp
   int edad = 25;
   ```

7. **Tipos de Datos**:
   C++ soporta varios tipos de datos, incluyendo tipos de datos primitivos como `int`, `char`, `float`, `double` y `bool`, así como tipos de datos compuestos como arrays, estructuras y clases.

   ```cpp
   char inicial = 'A';
   float altura = 1.75;
   bool esMayor = true;
   ```

8. **Condicionales y Bucles**:
   Las estructuras de control, como las condicionales (`if`, `else`, `switch`) y los bucles (`for`, `while`, `do-while`), controlan el flujo de ejecución del programa.

   ```cpp
   if (edad >= 18) {
       std::cout << "Eres mayor de edad." << std::endl;
   } else {
       std::cout << "Eres menor de edad." << std::endl;
   }

   for (int i = 0; i < 10; i++) {
       std::cout << i << " ";
   }
   std::cout << std::endl;
   ```

9. **Funciones**:
   Las funciones son bloques de código reutilizables que realizan una tarea específica. Se declaran con un tipo de retorno, un nombre y una lista de parámetros.

   ```cpp
   int sumar(int a, int b) {
       return a + b;
   }

   int main() {
       int resultado = sumar(5, 3);
       std::cout << "La suma es: " << resultado << std::endl;
       return 0;
   }
   ```
