#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Vector de tamaño 256 para contar la frecuencia de cada carácter ASCII
    vector<int> frecuencias(256, 0);

    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    // Contar la frecuencia de cada carácter en el texto
    for (char c : texto) {
        frecuencias[static_cast<unsigned char>(c)]++;
    }

    // Imprimir la frecuencia de cada carácter
    cout << "Frecuencia de caracteres:\n";
    for (int i = 0; i < 256; ++i) {
        if (frecuencias[i] > 0) {
            cout << "Carácter '" << static_cast<char>(i) << "' (Código ASCII " << i << "): " << frecuencias[i] << " veces\n";
        }
    }

    return 0;
}
