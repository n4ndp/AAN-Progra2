# **Memoria Dinámica con Punteros en C++**

En C++, la gestión de la memoria es un aspecto fundamental para el desarrollo de aplicaciones eficientes y seguras. Mientras que la memoria estática se asigna en tiempo de compilación, la memoria dinámica se asigna en tiempo de ejecución. Esto permite un uso más flexible y eficiente de la memoria, especialmente cuando el tamaño necesario no se conoce de antemano.

## **Memoria Estática vs. Memoria Dinámica**

- **Memoria Estática:** La memoria para las variables es asignada en tiempo de compilación y tiene un tamaño fijo. Este tipo de memoria es limitada y no se puede modificar durante la ejecución del programa.
  
    **Ejemplo:**
    
    ```cpp
    int arr[10];  // Arreglo estático de tamaño fijo
    ```

- **Memoria Dinámica:** La memoria es asignada en tiempo de ejecución y puede ser modificada o liberada según las necesidades del programa. Se gestiona utilizando punteros y las operaciones `new` y `delete`.

    **Ejemplo:**
  
    ```cpp
    int* arr = new int[10];  // Arreglo dinámico de tamaño 10
    ```

## **Asignación Dinámica de Memoria**

En C++, la memoria dinámica se maneja a través de punteros. Los punteros permiten la creación, manipulación y liberación de bloques de memoria durante la ejecución del programa.

### **Operador `new`**

El operador `new` se utiliza para asignar memoria dinámica. Devuelve un puntero al primer byte del bloque de memoria asignado.

- **Asignación de un solo valor:**
  
    ```cpp
    int* p = new int;  // Asigna memoria para un solo entero
    ```

- **Asignación de un arreglo:**
  
    ```cpp
    int* arr = new int[10];  // Asigna memoria para un arreglo de 10 enteros
    ```

### **Operador `delete`**

El operador `delete` se utiliza para liberar la memoria asignada dinámicamente. Es crucial liberar la memoria que ya no se necesita para evitar fugas de memoria (`memory leaks`).

- **Liberar un solo valor:**
  
    ```cpp
    delete p;  // Libera la memoria asignada al entero
    ```

- **Liberar un arreglo:**
  
    ```cpp
    delete[] arr;  // Libera la memoria asignada al arreglo
    ```

## **Ventajas y Desventajas de la Memoria Dinámica**

### **Ventajas:**

1. **Flexibilidad:** Permite asignar memoria en tiempo de ejecución, lo que es útil cuando no se conoce el tamaño necesario de antemano.
2. **Eficiencia en Uso de Memoria:** Permite utilizar solo la memoria necesaria, reduciendo el desperdicio.

### **Desventajas:**

1. **Fugas de Memoria:** Si no se libera la memoria asignada, puede provocar fugas de memoria, agotando la memoria disponible.
2. **Complejidad Adicional:** El manejo de memoria dinámica añade complejidad al código, requiriendo cuidado adicional para evitar errores.
