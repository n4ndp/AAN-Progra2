# **Abstracción en Programación Orientada a Objetos en C++**

## **Introducción**

La **Abstracción** es uno de los cuatro pilares fundamentales de la Programación Orientada a Objetos (POO). En C++, la abstracción se refiere a la capacidad de ocultar los detalles complejos y exponer solo la información necesaria para el uso de una clase u objeto. Esto permite que el usuario de una clase interactúe con ella sin necesidad de comprender su implementación interna.

## **Conceptos Clave**

### **1. Definición de Abstracción**

En POO, la abstracción se logra mediante la definición de clases y la implementación de interfaces que permiten a los objetos interactuar sin necesidad de conocer los detalles internos de sus métodos. 

### **2. Clases y Objetos**

- **Clase**: Es una plantilla que define un conjunto de atributos (datos) y métodos (funciones) que operan sobre esos atributos. La clase proporciona una interfaz para interactuar con el objeto sin exponer la implementación interna.
- **Objeto**: Es una instancia de una clase. Los objetos tienen un estado y un comportamiento basado en la clase de la que provienen.

### **3. Encapsulamiento vs. Abstracción**

Aunque están relacionados, **encapsulamiento** y **abstracción** no son lo mismo:
- **Encapsulamiento**: Se refiere a ocultar los datos internos de un objeto y proteger su integridad mediante el uso de métodos públicos y privados.
- **Abstracción**: Se enfoca en simplificar la interacción con un objeto al ocultar los detalles complejos y exponer solo lo necesario.

## **Ejemplo en C++**

Aquí tienes un ejemplo sencillo de cómo aplicar la abstracción en C++:

```cpp
#include <iostream>

// Clase abstracta (Interfaz)
class Shape {
public:
    // Método puro virtual (Función abstracta)
    virtual void draw() const = 0;

    // Destructor virtual
    virtual ~Shape() {}
};

// Clase derivada
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Clase derivada
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    Shape* shape;

    // Crear un objeto de tipo Circle
    shape = new Circle();
    shape->draw(); // Salida: Drawing a circle

    // Crear un objeto de tipo Square
    delete shape;
    shape = new Square();
    shape->draw(); // Salida: Drawing a square

    delete shape;
    return 0;
}
```

### **Explicación del Ejemplo**

1. **Clase Abstracta `Shape`**: Define una interfaz con un método virtual puro `draw()`. Esto significa que `Shape` no puede ser instanciada directamente y debe ser derivada por otras clases que implementen el método `draw()`.
2. **Clases Derivadas `Circle` y `Square`**: Implementan el método `draw()`, proporcionando su propia implementación específica.
3. **Uso en `main()`**: Se crean instancias de `Circle` y `Square`, y se utiliza un puntero a `Shape` para llamar al método `draw()`. Esto demuestra cómo la abstracción permite usar diferentes tipos de `Shape` sin conocer su implementación concreta.
