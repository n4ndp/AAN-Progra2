#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;  // ptr apunta al primer elemento de arr

    cout << "Usando ptr para acceder a los elementos del array:" << endl;
    cout << "Primer elemento: " << *ptr << endl;
    cout << "Segundo elemento: " << *(ptr + 1) << endl;
    cout << "Tercer elemento: " << *(ptr + 2) << endl;

    for (int *ptr = arr; ptr < arr + 3; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
    
    return 0;
}
