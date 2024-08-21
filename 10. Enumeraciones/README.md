# **Enumeraciones (`enum`) en C++**

## **Introducción**

En C++, una **enumeración** (o `enum`) es un tipo de dato definido por el usuario que consiste en un conjunto de valores simbólicos llamados **enumeradores**. Las enumeraciones son útiles cuando se desea trabajar con un grupo de valores relacionados y darle un nombre significativo a cada uno, lo que mejora la legibilidad y la mantenibilidad del código.

## **Sintaxis Básica**

La declaración de una enumeración en C++ sigue esta sintaxis:

```cpp
enum NombreEnumeracion {
    VALOR1,
    VALOR2,
    VALOR3,
    // ...
};
```

Cada uno de los valores en la enumeración se asigna automáticamente a un entero, comenzando desde `0` por defecto, a menos que se especifique otro valor.

```cpp
#include <iostream>

enum Color {
    ROJO,    // 0
    VERDE,   // 1
    AZUL     // 2
};

int main() {
    Color miColor = ROJO;
    std::cout << "El valor de miColor es: " << miColor << std::endl;  // Salida: 0
    return 0;
}
```

En este ejemplo, `ROJO`, `VERDE`, y `AZUL` son los enumeradores que se asignan a los valores `0`, `1`, y `2`, respectivamente.

## **Asignación de Valores Personalizados**

Es posible asignar valores personalizados a los enumeradores si se desea comenzar en un número diferente o establecer valores específicos para cada enumerador:

```cpp
enum DiaSemana {
    LUNES = 1,
    MARTES,
    MIERCOLES,
    JUEVES = 10,
    VIERNES,
    SABADO,
    DOMINGO
};
```

En este caso, los valores de los enumeradores serían:
- `LUNES = 1`
- `MARTES = 2`
- `MIERCOLES = 3`
- `JUEVES = 10`
- `VIERNES = 11`
- `SABADO = 12`
- `DOMINGO = 13`

## **Uso de `enum` en el Código**

### **Declaración e Inicialización**

Puedes declarar una variable de tipo `enum` y asignarle un valor de la enumeración:

```cpp
DiaSemana hoy = LUNES;
```

### **Comparación**

Las variables de tipo `enum` se pueden comparar directamente:

```cpp
if (hoy == LUNES) {
    std::cout << "Hoy es lunes." << std::endl;
}
```

### **Ejemplo Completo:**

```cpp
#include <iostream>

enum Estado {
    ENCENDIDO,
    APAGADO,
    EN_ESPERA
};

void imprimirEstado(Estado estado) {
    switch (estado) {
        case ENCENDIDO:
            std::cout << "El dispositivo está encendido." << std::endl;
            break;
        case APAGADO:
            std::cout << "El dispositivo está apagado." << std::endl;
            break;
        case EN_ESPERA:
            std::cout << "El dispositivo está en espera." << std::endl;
            break;
        default:
            std::cout << "Estado desconocido." << std::endl;
    }
}

int main() {
    Estado miEstado = ENCENDIDO;
    imprimirEstado(miEstado);

    miEstado = APAGADO;
    imprimirEstado(miEstado);

    return 0;
}
```

Este código define una enumeración `Estado` con tres posibles valores (`ENCENDIDO`, `APAGADO`, `EN_ESPERA`) y utiliza un `switch` para imprimir un mensaje dependiendo del estado actual.

## **Enumeraciones `enum class`**

C++11 introdujo `enum class`, también conocido como **enumeración fuertemente tipada**, que ofrece varias ventajas sobre el `enum` tradicional:

1. **Evita la conversión implícita**: Los valores de `enum class` no se convierten implícitamente a enteros, lo que evita errores comunes.
2. **Mayor alcance**: Los enumeradores de `enum class` no se exportan al espacio de nombres circundante, lo que evita colisiones de nombres.

```cpp
enum class Color {
    ROJO,
    VERDE,
    AZUL
};

Color miColor = Color::ROJO;
```

En este ejemplo, `Color::ROJO` es un valor de la enumeración `Color`, y no se puede asignar directamente a un entero.

```cpp
#include <iostream>

enum class Direccion {
    NORTE,
    SUR,
    ESTE,
    OESTE
};

void mover(Direccion dir) {
    switch (dir) {
        case Direccion::NORTE:
            std::cout << "Moviendo al norte." << std::endl;
            break;
        case Direccion::SUR:
            std::cout << "Moviendo al sur." << std::endl;
            break;
        case Direccion::ESTE:
            std::cout << "Moviendo al este." << std::endl;
            break;
        case Direccion::OESTE:
            std::cout << "Moviendo al oeste." << std::endl;
            break;
    }
}

int main() {
    Direccion dir = Direccion::NORTE;
    mover(dir);

    return 0;
}
```

## **Ventajas de Usar `enum` y `enum class`**

- **Claridad**: Facilitan la lectura del código al usar nombres simbólicos en lugar de valores numéricos.
- **Seguridad**: `enum class` añade seguridad al evitar conversiones implícitas.
- **Mantenibilidad**: Los cambios en el conjunto de valores posibles requieren cambios mínimos en el código.
