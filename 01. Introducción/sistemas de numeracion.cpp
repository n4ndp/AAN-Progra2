#include <iostream>
#include <iomanip>  // std::oct, std::hex
#include <bitset>   // std::bitset

int main() {
    int decimal = 42;
    int octal = 052;
    int hexadecimal = 0x2A;
    int binario = 0b101010;

    // Sistemas de numeración en C++
    // -    En C++, puedes representar números en diferentes sistemas de numeración
    //      como decimal, octal, hexadecimal y binario.
    // -    Para representar un número en octal, debes precederlo con un cero (0).
    // -    Para representar un número en hexadecimal, debes precederlo con 0x.
    // -    Para representar un número en binario, debes precederlo con 0b.


    // Por defecto, la salida de los números enteros es en decimal. Para cambiar
    // la base de salida, puedes utilizar los manipuladores de flujo `std::oct`,
    // `std::hex` y `std::bitset`.

    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Octal: " << std::oct << octal << std::endl;
    std::cout << "Hexadecimal: " << std::hex << hexadecimal << std::endl;
    std::cout << "Binario: " << std::bitset<8>(binario) << std::endl;

    // Al cambiar la base de salida, la base de salida se mantendrá hasta que se
    // cambie nuevamente o se restablezca a la base decimal.
    std::cout << std::dec;

    return 0;
}
