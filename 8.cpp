#include <iostream>
#include <cmath>    
#include <stdexcept> 
double calculateCircleArea(double radius) {
    if (radius < 0) {
        throw std::invalid_argument("Radius cannot be negative");
    }
    return M_PI * std::pow(radius, 2);
}
int main() {
    double radius = 5.0; 
    try {
        double area = calculateCircleArea(radius);
        std::cout << "The area of the circle with radius " << radius << " is " << area << std::endl;
    } catch (const std::invalid_argument &e) { 
        std::cerr << e.what() << std::endl; 
    }
    return 0;
}

