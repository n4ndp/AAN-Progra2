# **Condicionales en C++**

Los condicionales permiten tomar decisiones basadas en el valor de una expresión lógica y ejecutar diferentes bloques de código según el resultado. A continuación, se presentan los principales tipos de estructuras condicionales en C++.

## **1. Estructura `if`**

La estructura `if` es la más básica de las estructuras condicionales. Se utiliza para ejecutar un bloque de código solo si una condición especificada es verdadera.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
}
```

### **Ejemplo**

```cpp
int x = 10;
if (x > 5) {
    std::cout << "x es mayor que 5" << std::endl;
}
```

En este ejemplo, el mensaje "x es mayor que 5" se imprime solo si la variable `x` es mayor que 5.

## **2. Estructura `if-else`**

La estructura `if-else` permite manejar dos caminos diferentes de ejecución. Si la condición es verdadera, se ejecuta el primer bloque de código; si es falsa, se ejecuta el bloque `else`.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
} else {
    // Código a ejecutar si la condición es falsa
}
```

### **Ejemplo**

```cpp
int x = 3;
if (x > 5) {
    std::cout << "x es mayor que 5" << std::endl;
} else {
    std::cout << "x es 5 o menor" << std::endl;
}
```

En este ejemplo, el programa imprime "x es 5 o menor" porque `x` no es mayor que 5.

## **3. Estructura `if-else if-else`**

La estructura `if-else if-else` se utiliza cuando se tienen múltiples condiciones que necesitan ser evaluadas en secuencia.

```cpp
if (condición1) {
    // Código a ejecutar si la condición1 es verdadera
} else if (condición2) {
    // Código a ejecutar si la condición2 es verdadera
} else {
    // Código a ejecutar si ninguna de las condiciones anteriores es verdadera
}
```

### **Ejemplo**

```cpp
int x = 7;
if (x > 10) {
    std::cout << "x es mayor que 10" << std::endl;
} else if (x > 5) {
    std::cout << "x es mayor que 5 pero menor o igual a 10" << std::endl;
} else {
    std::cout << "x es 5 o menor" << std::endl;
}
```

En este caso, el mensaje "x es mayor que 5 pero menor o igual a 10" se imprime porque `x` cumple con la segunda condición.

## **4. Operador Ternario**

El operador ternario `?:` es una forma compacta de la estructura `if-else` que permite evaluar una condición en una sola línea.

```cpp
resultado = (condición) ? valor_si_verdadero : valor_si_falso;
```

### **Ejemplo**

```cpp
int x = 4;
std::string mensaje = (x % 2 == 0) ? "x es par" : "x es impar";
std::cout << mensaje << std::endl;
```

En este ejemplo, `mensaje` será "x es par" si `x` es divisible por 2, de lo contrario, será "x es impar".

## **5. Uso de `switch`**

La estructura `switch` se utiliza para ejecutar uno de varios bloques de código basados en el valor de una expresión. Es útil cuando se tienen múltiples casos posibles para una sola variable.

```cpp
switch (variable) {
    case valor1:
        // Código a ejecutar si variable == valor1
        break;
    case valor2:
        // Código a ejecutar si variable == valor2
        break;
    // ...
    default:
        // Código a ejecutar si variable no coincide con ninguno de los casos anteriores
}
```

### **Ejemplo**

```cpp
int dia = 3;
switch (dia) {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    default:
        std::cout << "Día inválido" << std::endl;
}
```

En este caso, el programa imprimirá "Miércoles" porque `dia` es igual a 3.
