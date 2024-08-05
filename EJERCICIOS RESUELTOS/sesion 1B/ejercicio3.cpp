// Desarrolla un programa en C++ que convierta una cantidad de segundos proporcionada.
// Por el usuario en horas, minutos y segundos. Por ejemplo, si el usuario introduce 
// 3665 segundos, el programa deberá mostrar el resultado de la conversión de la siguiente 
// forma: 3665 segundos son 1 horas, 1 minutos y 5 segundos.

#include <iostream>

int main() {
    int totalSegundos;
    int horas, minutos, segundos;

    std::cout << "Introduce la cantidad de segundos a convertir: ";
    std::cin >> totalSegundos;

    horas = totalSegundos / 3600;              // Calcular horas
    minutos = (totalSegundos % 3600) / 60;     // Calcular minutos
    segundos = totalSegundos % 60;             // Calcular segundos

    std::cout << totalSegundos << " segundos son " 
              << horas << " horas, " 
              << minutos << " minutos y " 
              << segundos << " segundos." << std::endl;

    return 0;
}
