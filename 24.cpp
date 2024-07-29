#include <iostream>
#include <iomanip>
int main() {
    int i = 52;
    float a = 425.0;
    float b = 123.500328;
    const char str[] = "Dream. Then make it happend!";
    std::cout.setf(std::ios::showpos);
    std::cout << i << std::endl;
    std::cout.setf(std::ios::showbase | std::ios::uppercase | std::ios::hex, std::ios::basefield);
    std::cout << i << std::endl;
    std::cout.setf(std::ios::oct, std::ios::basefield);
    std::cout << i << std::endl;
    std::cout.fill('0');
    std::cout << "Fill character: " << std::cout.fill() << std::endl;
    std::cout.setf(std::ios::dec, std::ios::basefield);
    std::cout.width(10);
    std::cout << i << std::endl;
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    std::cout.width(10);
    std::cout << i << std::endl;
    std::cout.setf(std::ios::internal, std::ios::adjustfield);
    std::cout.width(10);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout.width(10);
    std::cout << str << std::endl;
    std::cout.width(40);
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    std::cout.width(40);
    std::cout << str << std::endl;
    std::cout.precision(6);
    std::cout << "Precision: " << std::cout.precision() << std::endl;
    std::cout.setf(std::ios::showpoint);
    std::cout.unsetf(std::ios::showpos);
    std::cout << std::endl << a;
    std::cout.unsetf(std::ios::showpoint);
    std::cout << std::endl << a;
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout << std::endl << b;
    std::cout.setf(std::ios::scientific, std::ios::floatfield);
    std::cout << std::endl << b;
    b = 5.375;
    std::cout.precision(14);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout << std::endl << b;
    std::cout.setf(std::ios::scientific, std::ios::floatfield);
    std::cout << std::endl << b;
    return 0;
}


