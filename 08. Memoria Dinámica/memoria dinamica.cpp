#include <iostream>

using namespace std;

int main() {
    // Asignación de memoria dinámica para un solo entero
    int* ptr = new int;  // 'new' asigna memoria en el heap y devuelve un puntero
    *ptr = 42;  // Asignación de valor a la dirección de memoria dinámica

    cout << "Valor de ptr: " << *ptr << endl;

    // Liberación de la memoria dinámica asignada
    delete ptr;  // Se libera la memoria asignada por 'new'
    ptr = nullptr;  // Buenas prácticas: establecer el puntero a nullptr después de liberar la memoria

    // Asignación de memoria dinámica para un array de enteros
    int size = 5;
    int* arr = new int[size];  // 'new[]' asigna memoria para un array

    // Asignación de valores al array dinámico
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    cout << "Elementos del array dinámico:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Liberación de la memoria dinámica del array
    delete[] arr;  // 'delete[]' se usa para liberar memoria asignada con 'new[]'
    arr = nullptr;  // Establecer el puntero a nullptr para evitar punteros colgantes

    return 0;
}
