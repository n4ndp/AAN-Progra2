#include <iostream>

// Clase base con diferentes niveles de acceso
class Base {
private:
    int privateData;   // Solo accesible dentro de la clase Base

protected:
    int protectedData; // Accesible dentro de Base y clases derivadas

public:
    int publicData;    // Accesible desde cualquier parte del programa

    // Constructor para inicializar los datos
    Base(int p, int pr, int pub) : privateData(p), protectedData(pr), publicData(pub) {}

    // Método público para mostrar los datos
    void showData() const {
        std::cout << "Base::showData()" << std::endl;
        std::cout << "Private Data: " << privateData << std::endl;
        std::cout << "Protected Data: " << protectedData << std::endl;
        std::cout << "Public Data: " << publicData << std::endl;
    }

    // Métodos públicos para modificar los datos privados
    void setPrivateData(int p) { privateData = p; }
    int getPrivateData() const { return privateData; }

    // Método protegido para acceso dentro de clases derivadas
    protected:
    void setProtectedData(int pr) { protectedData = pr; }
    int getProtectedData() const { return protectedData; }
};

// Clase derivada que hereda de Base
class Derived : public Base {
public:
    // Constructor para inicializar los datos de la clase base
    Derived(int p, int pr, int pub) : Base(p, pr, pub) {}

    // Método para mostrar datos desde la clase derivada
    void showDerivedData() const {
        std::cout << "Derived::showDerivedData()" << std::endl;
        // std::cout << "Private Data: " << privateData << std::endl; // Error: privateData no es accesible
        std::cout << "Protected Data: " << getProtectedData() << std::endl; // Accesible a través del método protegido
        std::cout << "Public Data: " << publicData << std::endl;
    }

    // Método para modificar datos protegidos a través de la clase derivada
    void modifyProtectedData(int pr) {
        setProtectedData(pr); // Modificar datos protegidos usando el método protegido
    }
};

// Función principal
int main() {
    Base base(1, 2, 3);
    Derived derived(4, 5, 6);

    std::cout << "Base object data:" << std::endl;
    base.showData();

    std::cout << "\nDerived object data:" << std::endl;
    derived.showDerivedData();

    // Modificar datos públicos y protegidos
    base.publicData = 10;
    base.setPrivateData(20);
    base.setProtectedData(30); // Error: setProtectedData es protected en Base

    derived.modifyProtectedData(40); // Modificar datos protegidos a través de Derived

    std::cout << "\nBase object data after modification:" << std::endl;
    base.showData();

    std::cout << "\nDerived object data after modification:" << std::endl;
    derived.showDerivedData();

    return 0;
}
