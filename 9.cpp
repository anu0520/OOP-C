#include <iostream>
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main() {
    double celsius = 25.0;
    double fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;
    return 0;
}

