#include <iostream>
#include <cmath> 
class Shape {
public:
    virtual double area() const = 0; 
    virtual ~Shape() {}
};
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    Circle circ(2.0);
    std::cout << "Area of Circle: " << circ.area() << std::endl;
    Shape* shapes[2];
    shapes[0] = &rect;
    shapes[1] = &circ;
    std::cout << "Area of shapes[0]: " << shapes[0]->area() << std::endl;
    std::cout << "Area of shapes[1]: " << shapes[1]->area() << std::endl;

    return 0;
}

