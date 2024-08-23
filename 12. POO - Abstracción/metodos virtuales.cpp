#include <iostream>

class Base {
public:
    virtual void show() const { // Método virtual
        std::cout << "Base class show function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() const override { // Sobrescribir el método virtual
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show(); // Salida: "Derived class show function"
    delete b;
    return 0;
}
