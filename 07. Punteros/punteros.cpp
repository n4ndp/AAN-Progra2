#include <iostream>

using namespace std;

int main() {
    int var1 = 10;
    int *ptr1 = &var1;  // ptr1 apunta a la dirección de var1

    cout << "Valor de var: " << var1 << endl;
    cout << "Direccion de var (&var): " << &var1 << endl;
    cout << "Direccion almacenada en ptr: " << ptr1 << endl;
    cout << "Valor al que apunta ptr (*ptr): " << *ptr1 << endl;


    int *ptr2 = nullptr;  // ptr2 es un puntero nulo

    if (ptr2 == nullptr) {
        cout << "El puntero es nulo y no apunta a ninguna direccion valida." << endl;
    }


    int *ptr3;  // Puntero salvaje, no inicializado

    // Esta operación es peligrosa, ya que ptr3 no apunta a ninguna dirección válida.
    // cout << *ptr3 << endl;  // Comportamiento indefinido


    int var2 = 10;
    int *const ptr4 = &var2;  // ptr4 es un puntero constante, siempre apuntará a var2

    // No se puede cambiar la dirección a la que apunta ptr4
    // int otroVar = 20;
    // ptr4 = &otroVar;  // Esto causará un error de compilación

    *ptr4 = 20;  // Se puede cambiar el valor de var2 a través del puntero
    cout << "Nuevo valor de var: " << var2 << endl;

    return 0;
}
