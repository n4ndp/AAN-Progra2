#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;  // ptr apunta al primer elemento de arr

    cout << "Primer elemento: " << *ptr << endl;

    ptr++;  // Mover ptr al segundo elemento
    cout << "Segundo elemento: " << *ptr << endl;

    ptr++;  // Mover ptr al tercer elemento
    cout << "Tercer elemento: " << *ptr << endl;

    return 0;
}
