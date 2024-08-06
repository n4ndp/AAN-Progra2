# **Bucles en C++**

Los bucles permiten repetir un bloque de código varias veces, facilitando la ejecución repetitiva de tareas. A continuación, se presentan los principales tipos de bucles en C++ y su uso.

## **1. Bucle `for`**

El bucle `for` se utiliza cuando se conoce de antemano el número de iteraciones. Es ideal para recorrer secuencias de datos o realizar una acción un número determinado de veces.

```cpp
for (inicialización; condición; actualización) {
    // Código a ejecutar en cada iteración
}
```

### **Ejemplo**

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteración: " << i << std::endl;
    }
    return 0;
}
```

En este ejemplo, el bucle `for` imprime los números del 0 al 4. La variable `i` se inicializa en 0, y el bucle continúa mientras `i` sea menor que 5. En cada iteración, `i` se incrementa en 1.

## **2. Bucle `while`**

El bucle `while` se utiliza cuando no se conoce el número de iteraciones por adelantado. El bucle continúa ejecutándose mientras la condición especificada sea verdadera.

```cpp
while (condición) {
    // Código a ejecutar mientras la condición sea verdadera
}
```

### **Ejemplo**

```cpp
#include <iostream>

int main() {
    int i = 0;
    while (i < 5) {
        std::cout << "Iteración: " << i << std::endl;
        ++i;
    }
    return 0;
}
```

En este ejemplo, el bucle `while` imprime los números del 0 al 4. La variable `i` se incrementa en cada iteración hasta que `i` alcanza 5, momento en el cual la condición se vuelve falsa y el bucle termina.

## **3. Bucle `do-while`**

El bucle `do-while` es similar al bucle `while`, pero garantiza que el bloque de código se ejecute al menos una vez antes de evaluar la condición. Esto se debe a que la condición se verifica después de ejecutar el código.

```cpp
do {
    // Código a ejecutar
} while (condición);
```

### **Ejemplo**

```cpp
#include <iostream>

int main() {
    int i = 0;
    do {
        std::cout << "Iteración: " << i << std::endl;
        ++i;
    } while (i < 5);
    return 0;
}
```

En este ejemplo, el bucle `do-while` también imprime los números del 0 al 4. La diferencia con el bucle `while` es que el bloque de código se ejecuta al menos una vez, independientemente de la condición inicial.

## **4. Uso de `break` y `continue` en Bucles**

- **`break`**: Termina la ejecución del bucle y sale del mismo, independientemente de la condición.

    ### **Ejemplo**

    ```cpp
    #include <iostream>

    int main() {
        for (int i = 0; i < 10; ++i) {
            if (i == 5) {
                break; // Sale del bucle cuando i es igual a 5
            }
            std::cout << "Iteración: " << i << std::endl;
        }
        return 0;
    }
    ```

    En este caso, el bucle `for` se detiene cuando `i` es igual a 5, y no se imprimen más números.

- **`continue`**: Salta el resto del código en la iteración actual y pasa a la siguiente iteración del bucle.

    ### **Ejemplo**

    ```cpp
    #include <iostream>

    int main() {
        for (int i = 0; i < 10; ++i) {
            if (i % 2 == 0) {
                continue; // Salta la impresión si i es par
            }
            std::cout << "Iteración: " << i << std::endl;
        }
        return 0;
    }
    ```

    En este ejemplo, el `continue` hace que el bucle omita la impresión cuando `i` es un número par, imprimiendo solo los números impares.
