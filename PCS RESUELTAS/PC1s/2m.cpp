#include <iostream>

// Función para calcular la suma de los divisores propios de un número
int sumaDivisoresPropios(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            suma += i;
        }
    }
    
    return suma;
}

int main() {
    int num1, num2;

    // Leer y validar los números
    do {
        std::cout << "Numero 1 (positivo y diferente de 0): ";
        std::cin >> num1;
        std::cout << "Numero 2 (positivo y diferente de 0): ";
        std::cin >> num2;
    } while (num1 <= 0 || num2 <= 0 || num1 == num2);

    // Calcular la suma de los divisores propios
    int suma1 = sumaDivisoresPropios(num1);
    int suma2 = sumaDivisoresPropios(num2);

    // Verificar si los números son amigos
    if (suma1 == num2 && suma2 == num1) {
        std::cout << num1 << " y " << num2 << " son numeros amigos." << std::endl;
    } else {
        std::cout << num1 << " y " << num2 << " No, son numeros amigos." << std::endl;
    }

    return 0;
}
