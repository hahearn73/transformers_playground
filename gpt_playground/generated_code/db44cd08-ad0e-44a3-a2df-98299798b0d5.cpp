#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double getArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    
    double getArea() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double getArea() override {
        return length * width;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        std::cout << "Area of shape " << i+1 << ": " << shapes[i]->getArea() << std::endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}