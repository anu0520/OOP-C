#include<iostream>
using namespace std;
class Complex {
    private:
        float real;
        float imag;
    public:
        Complex() : real(0), imag(0) {}
        Complex(float r, float i) : real(r), imag(i) {}
        void getData() {
            cout << "Enter real and imaginary part: ";
            cin >> real >> imag;
        }
        void setData(float r, float i) {
            real = r;
            imag = i;
        }
        void displayData() {
            cout << "Real = " << real << endl;
            cout << "Imaginary = " << imag << endl;
        }
        Complex operator+(const Complex& c) {
            return Complex(real + c.real, imag + c.imag);
        }
        Complex operator*(const Complex& c) {
            return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
        }
};
int main() {
    Complex c1, c2(1.2, -2.5), c3, c4;
    c1.setData(2.0, 2.0);
    c3 = c1 + c2;
    c3.displayData();
    c4.getData();
    Complex c5(2.5, 3.0), c6;
    c6 = c4 * c5;
    c6.displayData();
    Complex c7;
    c7 = c1 + c2 * c3;
    c7.displayData();
    return 0;
}

