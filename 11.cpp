
#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}
int main() {
    int intResult = max(10, 20);
    std::cout << "Maximum of integers: " << intResult << std::endl;
    double doubleResult = max(3.14, 2.71);
    std::cout << "Maximum of floating-point numbers: " << doubleResult << std::endl;
    char charResult = max('a', 'z');
    std::cout << "Maximum of characters: " << charResult << std::endl;
    return 0;
}

