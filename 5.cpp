#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() const = 0;      
    virtual double perimeter() const = 0; 
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};
class Triangle : public Shape {
private:
    double a, b, c; 
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const override {
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }
};
int main() {
    Shape* rectangle = new Rectangle(5.0, 3.0);
    Shape* triangle = new Triangle(3.0, 4.0, 5.0);
    std::cout << "Rectangle Area: " << rectangle->area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle->perimeter() << std::endl;
    std::cout << "Triangle Area: " << triangle->area() << std::endl;
    std::cout << "Triangle Perimeter: " << triangle->perimeter() << std::endl;
    delete rectangle;
    delete triangle;
    return 0;
}
