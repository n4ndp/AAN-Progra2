# **Vectores en C++**

Los vectores en C++ son una estructura de datos poderosa y flexible proporcionada por la Biblioteca Estándar de Plantillas (STL). Un vector es una secuencia de elementos del mismo tipo almacenados en una región contigua de memoria. Los vectores permiten manejar colecciones de datos de manera dinámica y eficiente.

## **Definición y Uso de Vectores**

Para trabajar con vectores, debes incluir el encabezado `<vector>`. Los vectores en C++ están definidos en el espacio de nombres `std` y se gestionan automáticamente en términos de memoria.

### **Declaración e Inicialización**

```cpp
#include <vector>
#include <iostream>

int main() {
    // Declarar un vector vacío
    std::vector<int> vec;

    // Declarar e inicializar un vector con valores
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // Declarar un vector con un tamaño específico y valor inicial
    std::vector<int> vec3(10, 0);  // Vector de 10 elementos, todos inicializados a 0

    return 0;
}
```

## **Operaciones Básicas con Vectores**

### **Añadir Elementos**

Para añadir elementos al final del vector, utiliza el método `push_back`:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
    vec.push_back(10);  // Añadir 10 al final del vector
    vec.push_back(20);  // Añadir 20 al final del vector

    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
```

### **Acceder a Elementos**

Puedes acceder a elementos usando el operador de índice `[]` o el método `at`:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Primer elemento: " << vec[0] << std::endl;
    std::cout << "Segundo elemento: " << vec.at(1) << std::endl;

    return 0;
}
```

### **Eliminar Elementos**

Para eliminar elementos del final, usa `pop_back`. Para eliminar un elemento específico, usa `erase`:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.pop_back();  // Elimina el último elemento (5)

    vec.erase(vec.begin() + 1);  // Elimina el segundo elemento (2)

    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
```

### **Redimensionar el Vector**

Utiliza `resize` para cambiar el tamaño del vector, añadiendo nuevos elementos o eliminando elementos existentes:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3};
    vec.resize(5, 0);  // Redimensiona el vector a 5 elementos, llenando los nuevos elementos con 0

    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
```

## **Métodos Importantes de Vectores**

### **Método `size`**

Devuelve el número de elementos actuales en el vector:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Número de elementos: " << vec.size() << std::endl;
    return 0;
}
```

### **Método `capacity`**

Devuelve la capacidad actual del vector (número de elementos que puede contener sin necesidad de realocar):

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Capacidad del vector: " << vec.capacity() << std::endl;
    return 0;
}
```

### **Método `reserve`**

Aumenta la capacidad del vector para al menos el número de elementos especificado, lo que puede ayudar a optimizar el rendimiento si conoces el tamaño aproximado del vector con anticipación:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
    vec.reserve(100);  // Reserva capacidad para al menos 100 elementos

    std::cout << "Capacidad después de reserve: " << vec.capacity() << std::endl;
    return 0;
}
```

### **Método `clear`**

Elimina todos los elementos del vector, pero no cambia su capacidad:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.clear();  // Elimina todos los elementos

    std::cout << "Número de elementos después de clear: " << vec.size() << std::endl;
    return 0;
}
```

### **Método `empty`**

Devuelve `true` si el vector está vacío, es decir, si su tamaño es 0:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
    std::cout << "¿Está vacío?: " << (vec.empty() ? "Sí" : "No") << std::endl;
    return 0;
}
```

## **Vectores de Vectores**

Puedes usar vectores para crear matrices o listas de listas, lo que te permite manejar estructuras de datos más complejas:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<std::vector<int>> matriz(3, std::vector<int>(4, 0));  // Matriz 3x4 inicializada a 0

    matriz[1][2] = 5;  // Asigna el valor 5 a la posición (1, 2)

    for (const auto& fila : matriz) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
```

## **Iteración sobre Vectores**

Puedes iterar sobre los elementos de un vector utilizando bucles `for`, `for-each` o iteradores:

### **Bucle `for`**

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    return 0;
}
```

### **Bucle `for-each`**

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
```

### **Iteradores**

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
```
