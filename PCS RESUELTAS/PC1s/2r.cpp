#include <iostream>
#include <string>

using namespace std;

// Función para calcular el producto de los dígitos en una subcadena
int calcularProducto(string subcadena) {
    int producto = 1;
    for (char c : subcadena) {
        producto *= (c - '0'); // Convertir el carácter a su valor numérico
    }
    return producto;
}

// Función para encontrar la secuencia de dígitos adyacentes con el producto máximo
string encontrarSecuenciaMaxima(string texto, int d) {
    int longitud = texto.length();
    int maxProducto = 0;
    string secuenciaMaxima;

    for (int i = 0; i <= longitud - d; ++i) {
        string subcadena = texto.substr(i, d); // Obtener la subcadena de longitud d desde la posición i
        int producto = calcularProducto(subcadena);
        if (producto > maxProducto) {
            maxProducto = producto;
            secuenciaMaxima = subcadena;
        }
    }

    return secuenciaMaxima;
}

int main() {
    string texto;
    int d;

    // Leer la entrada
    cin >> texto;
    cin >> d;

    // Encontrar la secuencia con el producto máximo
    string resultado = encontrarSecuenciaMaxima(texto, d);

    // Imprimir el resultado
    cout << resultado << endl;

    return 0;
}
