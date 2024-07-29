#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    int intResult = add(5, 7);
    std::cout << "Sum of integers: " << intResult << std::endl;
    double doubleResult = add(3.5, 2.5);
    std::cout << "Sum of floating-point numbers: " << doubleResult << std::endl;
    return 0;
}

