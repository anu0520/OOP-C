#include <iostream>
#include <stdexcept>
#include <string>
class CustomException : public std::runtime_error {
public:
    CustomException(const std::string& message)
        : std::runtime_error(message) {}
};
void riskyFunction() {
    bool errorCondition = true;
    if (errorCondition) {
        throw CustomException("A custom error occurred in riskyFunction");
    }
    std::cout << "Risky function executed successfully\n";
}
int main() {
    try {
        riskyFunction();
    } catch (const CustomException& e) {
        std::cout << "Caught a custom exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught a standard exception: " << e.what() << std::endl;
    }
    return 0;
}

