#include <iostream>
#include <cmath> 
double area(double side) {
    return side * side;
}
double area(double length, double width) {
    return length * width;
}
double area(double radius, bool isCircle) {
    if (isCircle) {
        return M_PI * radius * radius;
    }
    return 0.0; 
}
int main() {
    double squareSide = 5.0;
    std::cout << "Area of the square: " << area(squareSide) << std::endl;
    double rectangleLength = 4.0;
    double rectangleWidth = 6.0;
    std::cout << "Area of the rectangle: " << area(rectangleLength, rectangleWidth) << std::endl;
    double circleRadius = 3.0;
    std::cout << "Area of the circle: " << area(circleRadius, true) << std::endl;
    return 0;
}

