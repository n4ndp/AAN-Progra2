# **Funciones en C++**

Las funciones en C++ son bloques de código que encapsulan una tarea específica, permitiendo que el código sea más modular, legible y reutilizable.

## **Definición y Estructura de una Función**

Una función en C++ es un conjunto de declaraciones que realiza una tarea específica. La estructura básica de una función incluye:

- **Tipo de Retorno:** Indica el tipo de dato que la función devolverá. Si la función no devuelve un valor, se utiliza `void`.
- **Nombre de la Función:** Es el identificador que se usa para invocar la función.
- **Parámetros:** Son las entradas que recibe la función para procesar. Pueden ser de diferentes tipos de datos.
- **Cuerpo de la Función:** Es el bloque de código que define las operaciones que realiza la función.
- **Valor de Retorno:** Es el resultado que la función envía de vuelta al código que la llamó.

**Ejemplo:**

```cpp
int sumar(int a, int b) {
    return a + b;
}
```

En este ejemplo, la función `sumar` recibe dos enteros como parámetros y devuelve la suma de ellos.

## **Tipos de Funciones**

Existen diferentes tipos de funciones en C++ dependiendo de su propósito y cómo están definidas:

- **Funciones sin Parámetros y sin Valor de Retorno:**

    Estas funciones no reciben parámetros ni devuelven un valor.

    ```cpp
    void mostrarMensaje() {
        std::cout << "Hola, mundo!" << std::endl;
    }
    ```

- **Funciones con Parámetros y con Valor de Retorno:**

    Estas funciones reciben parámetros y devuelven un valor.

    ```cpp
    int multiplicar(int x, int y) {
        return x * y;
    }
    ```

- **Funciones sin Parámetros pero con Valor de Retorno:**

    Estas funciones no reciben parámetros pero devuelven un valor.

    ```cpp
    int obtenerNumeroAleatorio() {
        return rand();
    }
    ```

- **Funciones con Parámetros pero sin Valor de Retorno:**

    Estas funciones reciben parámetros pero no devuelven un valor.

    ```cpp
    void establecerValor(int &variable, int valor) {
        variable = valor;
    }
    ```

## **Variables Locales vs. Globales**

- **Variables Locales:** Son variables declaradas dentro de una función y solo accesibles dentro de esa función.

    ```cpp
    void ejemploLocal() {
        int local = 10;  // Variable local
        std::cout << local << std::endl;
    }
    ```

- **Variables Globales:** Son variables declaradas fuera de todas las funciones y accesibles desde cualquier parte del programa.

    ```cpp
    int global = 20;

    void ejemploGlobal() {
        std::cout << global << std::endl;
    }
    ```

El uso de variables globales debe ser manejado con cuidado para evitar errores y conflictos en el código.

## **Transferencia por Valor vs. Transferencia por Referencia**

- **Transferencia por Valor:**

    En la transferencia por valor, se pasa una copia de la variable a la función. Los cambios realizados dentro de la función no afectan la variable original.

    ```cpp
    void cambiarValor(int x) {
        x = 10;  // No afecta la variable original
    }
    ```

- **Transferencia por Referencia:**

    En la transferencia por referencia, se pasa la dirección de la variable, permitiendo que la función modifique el valor original.

    ```cpp
    void cambiarValor(int &x) {
        x = 10;  // Modifica la variable original
    }
    ```

## **Sobrecarga de Funciones**

La sobrecarga de funciones permite definir múltiples funciones con el mismo nombre pero con diferentes tipos o números de parámetros. Esto permite realizar operaciones similares con diferentes tipos de datos.

**Ejemplo:**

```cpp
int sumar(int a, int b) {
    return a + b;
}

double sumar(double a, double b) {
    return a + b;
}
```

En este ejemplo, la función `sumar` se ha sobrecargado para trabajar tanto con enteros como con números de punto flotante.

## **Recursividad en C++**

### **Concepto de Recursividad**

La recursividad es una técnica donde una función se llama a sí misma. Esta técnica es útil para resolver problemas que pueden dividirse en versiones más pequeñas del mismo problema.

### **Casos Base y Casos Recursivos**

Una función recursiva debe estar bien estructurada para evitar bucles infinitos. Esto se logra definiendo:

- **Caso Base:** Es la condición que detiene la recursividad. Si no se define un caso base, la función se llamará infinitamente.

- **Caso Recursivo:** Es la parte de la función que se llama a sí misma. Debe acercarse al caso base en cada llamada.

**Ejemplo:**

```cpp
int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Caso recursivo
    }
}
```

En este ejemplo, la función `factorial` calcula el factorial de un número utilizando recursividad.
