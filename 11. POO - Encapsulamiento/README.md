# **Encapsulamiento en Programación Orientada a Objetos en C++**

## **Introducción**

El **Encapsulamiento** es uno de los principios fundamentales de la Programación Orientada a Objetos (POO). En C++, el encapsulamiento se refiere a la práctica de ocultar los detalles internos de una clase y proteger el acceso a sus datos mediante la definición de métodos públicos y privados. Esto ayuda a mantener la integridad del objeto y facilita el mantenimiento del código.

## **Conceptos Clave**

### **1. Definición de Encapsulamiento**

El encapsulamiento implica:
- **Ocultar Datos**: Los atributos de una clase se declaran como privados para que no puedan ser accedidos directamente desde fuera de la clase.
- **Proveer Métodos Públicos**: Se utilizan métodos públicos (conocidos como getters y setters) para acceder y modificar los atributos privados, proporcionando una interfaz controlada para interactuar con el objeto.

### **2. Acceso a Miembros**

En C++, el acceso a los miembros de una clase se controla mediante los siguientes especificadores de acceso:
- **`public`**: Miembros accesibles desde cualquier parte del código.
- **`protected`**: Miembros accesibles solo desde dentro de la clase y sus clases derivadas.
- **`private`**: Miembros accesibles solo desde dentro de la misma clase.

## **Ejemplo en C++**

Aquí tienes un ejemplo que demuestra el uso del encapsulamiento en C++:

```cpp
#include <iostream>

class BankAccount {
private:
    // Atributos privados
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    // Método público para depositar dinero
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Método público para retirar dinero
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // Método público para obtener el saldo
    double getBalance() const {
        return balance;
    }

    // Método público para obtener el número de cuenta
    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    // Crear un objeto BankAccount
    BankAccount account("123456", 1000.0);

    // Interactuar con el objeto usando métodos públicos
    std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << account.getBalance() << std::endl;

    account.deposit(500.0);
    std::cout << "Balance after deposit: $" << account.getBalance() << std::endl;

    account.withdraw(200.0);
    std::cout << "Balance after withdrawal: $" << account.getBalance() << std::endl;

    return 0;
}
```

### **Explicación del Ejemplo**

1. **Clase `BankAccount`**: Contiene atributos privados `accountNumber` y `balance`, que están ocultos al exterior.
2. **Métodos Públicos**: Proporcionan una interfaz controlada para interactuar con los atributos privados. Métodos como `deposit()`, `withdraw()`, `getBalance()`, y `getAccountNumber()` permiten modificar y consultar el estado del objeto sin acceder directamente a sus datos internos.
3. **Uso en `main()`**: Se crea un objeto `BankAccount` y se interactúa con él a través de sus métodos públicos, demostrando cómo el encapsulamiento protege la integridad del objeto y facilita su manipulación.

## **Beneficios del Encapsulamiento**

- **Protección de Datos**: Previene la modificación accidental o malintencionada de los datos internos de un objeto.
- **Control de Acceso**: Permite controlar cómo se accede y modifica el estado del objeto.
- **Facilidad de Mantenimiento**: Facilita la modificación del diseño interno de una clase sin afectar el código que utiliza la clase.
