#include <iostream>
#include <string>

// Función que retorna el tiempo de vuelo según el destino
int obtenerTiempoVuelo(const std::string& destino) {
    if (destino == "Berlin") return 15;
    else if (destino == "Madrid") return 12;
    else if (destino == "Sidney") return 24;
    else if (destino == "Seul") return 27;
    return 0;  // En caso de que el destino no sea válido
}

// Función que calcula el costo del boleto
int calcularCosto(const std::string& destino, const std::string& temporada, const std::string& clase) {
    int tiempoVuelo = obtenerTiempoVuelo(destino);
    int costoBase = tiempoVuelo * 50;

    // Ajuste por temporada
    if (temporada == "alta") {
        costoBase *= 2;
    }

    // Ajuste por clase
    if (clase == "business") {
        costoBase *= 4;
    }

    // Ajuste por destino
    if (destino == "Madrid") {
        costoBase += 500;
    } else if (destino == "Berlin") {
        costoBase += 1000;
    } else if (destino == "Sidney") {
        costoBase += 1500;
    } else if (destino == "Seul") {
        costoBase += 2000;
    }

    return costoBase;
}

// Función para solicitar datos de entrada
void pedirDatos(std::string& destino, std::string& temporada, std::string& clase) {
    std::cout << "Ingrese destino (Berlin, Madrid, Sidney, Seul): ";
    std::cin >> destino;
    std::cout << "Ingrese temporada (alta, baja): ";
    std::cin >> temporada;
    std::cout << "Ingrese clase (business, economy): ";
    std::cin >> clase;
}

int main() {
    std::string destino, temporada, clase;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Boleto #" << i + 1 << ":\n";
        pedirDatos(destino, temporada, clase);
        int costo = calcularCosto(destino, temporada, clase);
        std::cout << "El costo del boleto es: " << costo << " USD" << std::endl << std::endl;
    }

    return 0;
}
