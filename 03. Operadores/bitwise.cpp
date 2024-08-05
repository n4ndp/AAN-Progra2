#include <iostream>
#include <bitset>

int main() {
    int a = 5;  // 5 en binario: 0101
    int b = 9;  // 9 en binario: 1001

    // Operador AND bitwise (&)
    // Compara cada bit de los operandos y devuelve 1 solo si ambos bits son 1
    int andResult = a & b;  // 0101 & 1001 = 0001
    std::cout << "a & b: " << andResult << " (binario: " << std::bitset<4>(andResult) << ")" << std::endl;

    // Operador OR bitwise (|)
    // Compara cada bit de los operandos y devuelve 1 si al menos uno de los bits es 1
    int orResult = a | b;  // 0101 | 1001 = 1101
    std::cout << "a | b: " << orResult << " (binario: " << std::bitset<4>(orResult) << ")" << std::endl;

    // Operador XOR bitwise (^)
    // Compara cada bit de los operandos y devuelve 1 si los bits son diferentes
    int xorResult = a ^ b;  // 0101 ^ 1001 = 1100
    std::cout << "a ^ b: " << xorResult << " (binario: " << std::bitset<4>(xorResult) << ")" << std::endl;

    // Operador NOT bitwise (~)
    // Invierte todos los bits del operando
    int notResult = ~a;  // ~0101 = 1010 (depende del tamaño del int, usualmente 32 bits)
    std::cout << "~a: " << notResult << " (binario: " << std::bitset<8>(notResult) << ")" << std::endl;

    // Operador de desplazamiento a la izquierda (<<)
    // Desplaza los bits del operando a la izquierda por el número de posiciones especificado
    int leftShiftResult = a << 1;  // 0101 << 1 = 1010
    std::cout << "a << 1: " << leftShiftResult << " (binario: " << std::bitset<4>(leftShiftResult) << ")" << std::endl;

    // Operador de desplazamiento a la derecha (>>)
    // Desplaza los bits del operando a la derecha por el número de posiciones especificado
    int rightShiftResult = b >> 1;  // 1001 >> 1 = 0100
    std::cout << "b >> 1: " << rightShiftResult << " (binario: " << std::bitset<4>(rightShiftResult) << ")" << std::endl;

    return 0;
}
