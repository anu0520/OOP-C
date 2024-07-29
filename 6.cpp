#include <iostream>
class Complex;
Complex add(const Complex& c1, const Complex& c2);
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend Complex add(const Complex& c1, const Complex& c2);
    void display() const {
        std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
    }
};
Complex add(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    std::cout << "Original complex numbers:" << std::endl;
    c1.display();
    c2.display();
    Complex sum = add(c1, c2);
    std::cout << "Sum of the complex numbers:" << std::endl;
    sum.display();
    return 0;
}

