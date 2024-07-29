#include <iostream>
#include <stdexcept>
void innerFunction() {
    try {
        std::cout << "Inner try block\n";
        throw std::runtime_error("Inner function error");
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in inner catch block: " << e.what() << std::endl;
    }
}
void outerFunction() {
    try {
        std::cout << "Outer try block\n";
        innerFunction();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in outer catch block: " << e.what() << std::endl;
    }
}
int main() {
    try {
        std::cout << "Main try block\n";
        outerFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in main catch block: " << e.what() << std::endl;
    }
    return 0;
}

