#include <iostream>

int main() {
    bool a = true;
    bool b = false;

    // Operador AND lógico (&&)
    if (a && b) {
        std::cout << "a y b son ambos verdaderos (a && b)" << std::endl;
    } else {
        std::cout << "a y b no son ambos verdaderos (a && b)" << std::endl;
    }

    // Operador OR lógico (||)
    if (a || b) {
        std::cout << "Al menos uno de a o b es verdadero (a || b)" << std::endl;
    } else {
        std::cout << "Ninguno de a o b es verdadero (a || b)" << std::endl;
    }

    // Operador NOT lógico (!)
    if (!a) {
        std::cout << "a es falso (!a)" << std::endl;
    } else {
        std::cout << "a es verdadero (!a)" << std::endl;
    }

    return 0;
}
