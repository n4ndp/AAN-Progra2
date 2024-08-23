#include <iostream>

// Clase abstracta con un método virtual puro
class AbstractShape {
public:
    virtual void draw() const = 0; // Método virtual puro
    virtual ~AbstractShape() {} // Destructor virtual
};

class Circle : public AbstractShape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public AbstractShape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    AbstractShape* shape1 = new Circle();
    AbstractShape* shape2 = new Square();
    
    shape1->draw(); // Salida: "Drawing a circle"
    shape2->draw(); // Salida: "Drawing a square"

    delete shape1;
    delete shape2;
    return 0;
}
