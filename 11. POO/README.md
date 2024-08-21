# **Programación Orientada a Objetos (POO) en C++**

La Programación Orientada a Objetos (POO) es un paradigma de programación que organiza el software en torno a objetos y clases, permitiendo un enfoque modular y reutilizable en el desarrollo de aplicaciones. 

## **1. Struct**

En C++, un `struct` (estructura) es un tipo de dato que agrupa diferentes tipos de datos bajo un mismo nombre. Se utiliza principalmente para agrupar variables relacionadas.

```cpp
#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    double altura;
};

int main() {
    Persona p1;
    p1.nombre = "Adriano";
    p1.edad = 25;
    p1.altura = 1.75;

    std::cout << "Nombre: " << p1.nombre << std::endl;
    std::cout << "Edad: " << p1.edad << std::endl;
    std::cout << "Altura: " << p1.altura << std::endl;

    return 0;
}
```

### **Diferencias entre `struct` y `class`**

En C++, la principal diferencia entre `struct` y `class` es que en `struct` los miembros son públicos por defecto, mientras que en `class` son privados por defecto.

## **2. Class**

Una `class` en C++ es una plantilla para crear objetos. Define atributos (datos) y métodos (funciones) que operan sobre esos datos.

```cpp
#include <iostream>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string nom, int ed) : nombre(nom), edad(ed) {}

    // Método para mostrar información
    void mostrarInfo() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

int main() {
    Persona p1("Adriano", 25);
    p1.mostrarInfo();

    return 0;
}
```

## **3. Constructores**

Un constructor es una función miembro especial de una clase que se ejecuta automáticamente cuando se crea un objeto de esa clase. Se utiliza para inicializar los atributos del objeto.

### **Tipos de Constructores**

- **Constructor por defecto**: No toma argumentos y se proporciona automáticamente si no se define ninguno.
- **Constructor parametrizado**: Toma uno o más argumentos y permite inicializar los atributos con valores específicos.

```cpp
class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor por defecto
    Persona() : nombre(""), edad(0) {}

    // Constructor parametrizado
    Persona(std::string nom, int ed) : nombre(nom), edad(ed) {}
};
```


Aquí tienes un README completo sobre Clases y Programación Orientada a Objetos (POO) en C++:

## **1. ¿Qué es una Clase?**

Una **clase** es una plantilla o modelo que define las propiedades (atributos) y comportamientos (métodos) que tendrán los objetos. Una clase en C++ puede contener variables, funciones, y puede accederse a través de la creación de instancias u "objetos".

### **Ejemplo Básico de Clase en C++**

```cpp
#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string nom, int ed) : nombre(nom), edad(ed) {}

    // Método para mostrar la información
    void mostrarInfo() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

int main() {
    Persona p1("Adriano", 25);
    p1.mostrarInfo();

    return 0;
}
```

## **2. Objetos**

Un **objeto** es una instancia de una clase. Es una entidad concreta que tiene un estado (valores de los atributos) y un comportamiento (definido por los métodos de la clase). Puedes crear múltiples objetos a partir de una clase, y cada uno tendrá sus propios valores para los atributos.

### **Ejemplo de Creación de Objetos**

```cpp
Persona p1("Adriano", 25);
Persona p2("Elisa", 30);
```

## **3. Constructores**

Los **constructores** son funciones especiales dentro de una clase que se ejecutan automáticamente al crear un objeto. Su principal función es inicializar los atributos del objeto. 

### **Tipos de Constructores**

- **Constructor por defecto:** No toma argumentos y es proporcionado automáticamente si no se define ningún constructor.
- **Constructor parametrizado:** Toma uno o más argumentos y permite inicializar los atributos con valores específicos.

### **Ejemplo de Constructor**

```cpp
class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor parametrizado
    Persona(std::string nom, int ed) : nombre(nom), edad(ed) {}
};
```

## **8. Relación Clase-Objeto**

Una **clase** define la estructura y el comportamiento de los objetos que pertenecen a ella, mientras que un **objeto** es una instancia concreta de esa clase. La relación entre clase y objeto es fundamental en la POO, ya que las clases sirven como plantillas a partir de las cuales se crean los objetos.

### **Ejemplo de Relación Clase-Objeto**

```cpp
class Coche {
private:
    std::string marca;
    int velocidad;

public:
    Coche(std::string m, int v) : marca(m), velocidad(v) {}

    void acelerar(int incremento) {
        velocidad += incremento;
    }

    void mostrarInfo() {
        std::cout << "Marca: " << marca << ", Velocidad: " << velocidad << std::endl;
    }
};

int main() {
    Coche miCoche("Toyota", 120);
    miCoche.acelerar(20);
    miCoche.mostrarInfo();

    return 0;
}
```

Aquí, `Coche` es la clase, y `miCoche` es un objeto creado a partir de esa clase.


## **4. Abstracción**

La **abstracción** es el proceso de ocultar los detalles de implementación y exponer solo las funcionalidades esenciales. En C++, esto se logra mediante el uso de clases y métodos que permiten interactuar con el objeto sin conocer los detalles internos de su funcionamiento.

### **Ejemplo de Abstracción**

```cpp
class CuentaBancaria {
private:
    double saldo;

public:
    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
        }
    }

    double consultarSaldo() {
        return saldo;
    }
};
```

En este ejemplo, el usuario no necesita saber cómo se implementa el cálculo del saldo; solo necesita interactuar con los métodos públicos.

## **5. Encapsulamiento**

El **encapsulamiento** es la práctica de restringir el acceso directo a los datos de un objeto y permitir su manipulación solo a través de métodos definidos. Esto asegura que los datos estén protegidos y se mantengan en un estado coherente.

### **Ejemplo de Encapsulamiento**

```cpp
class Coche {
private:
    int velocidad;

public:
    void acelerar(int incremento) {
        if (incremento > 0) {
            velocidad += incremento;
        }
    }

    int obtenerVelocidad() {
        return velocidad;
    }
};
```

Aquí, la variable `velocidad` está protegida dentro de la clase y solo se puede modificar a través del método `acelerar`.

## **6. Herencia**

La **herencia** es un principio de la POO que permite crear nuevas clases basadas en clases existentes. La clase derivada hereda los atributos y métodos de la clase base, y puede agregar sus propios atributos y métodos o sobreescribir los existentes.

### **Ejemplo de Herencia**

```cpp
class Vehiculo {
public:
    void encender() {
        std::cout << "El vehículo está encendido." << std::endl;
    }
};

class Coche : public Vehiculo {
public:
    void tocarBocina() {
        std::cout << "¡Bip bip!" << std::endl;
    }
};
```

En este ejemplo, `Coche` hereda de `Vehiculo`, lo que significa que un objeto de tipo `Coche` puede usar los métodos de `Vehiculo`.

## **7. Polimorfismo**

El **polimorfismo** permite que una función o método adopte diferentes formas. En C++, se puede lograr mediante la sobrecarga de funciones y la sobrescritura de métodos en clases derivadas.

### **Ejemplo de Polimorfismo**

```cpp
class Animal {
public:
    virtual void hacerSonido() {
        std::cout << "El animal hace un sonido." << std::endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {
        std::cout << "El perro ladra." << std::endl;
    }
};
```

En este ejemplo, `hacerSonido` es un método polimórfico, ya que su comportamiento varía dependiendo de la clase del objeto.
