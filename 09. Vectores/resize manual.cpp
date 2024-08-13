#include <iostream>

// Función para redimensionar un arreglo dinámico
int* resizeArray(int* arr, int oldSize, int newSize) {
    // Crear un nuevo arreglo con el nuevo tamaño
    int* newArr = new int[newSize];
    
    // Copiar los datos del arreglo original al nuevo arreglo
    // Copiamos solo hasta el tamaño menor de los dos arreglos
    for (int i = 0; i < (oldSize < newSize ? oldSize : newSize); ++i) {
        newArr[i] = arr[i];
    }
    
    // Inicializar los nuevos elementos si el nuevo tamaño es mayor
    for (int i = oldSize; i < newSize; ++i) {
        newArr[i] = 0;  // Opcional: inicializa los nuevos elementos a 0 o cualquier valor predeterminado
    }
    
    // Liberar la memoria del arreglo original
    delete[] arr;
    
    return newArr;
}

int main() {
    // Tamaño inicial del arreglo
    int oldSize = 5;
    
    // Crear un arreglo dinámico y llenarlo con datos
    int* arr = new int[oldSize] {1, 2, 3, 4, 5};
    
    // Mostrar el contenido del arreglo original
    std::cout << "Arreglo original: ";
    for (int i = 0; i < oldSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Tamaño nuevo del arreglo
    int newSize = 10;
    
    // Redimensionar el arreglo
    arr = resizeArray(arr, oldSize, newSize);
    
    // Mostrar el contenido del arreglo redimensionado
    std::cout << "Arreglo redimensionado: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Liberar la memoria del arreglo redimensionado
    delete[] arr;
    
    return 0;
}
