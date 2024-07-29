#include <iostream>
#include <functional>
#include <stdexcept> 
class Finally {
public:
    Finally(std::function<void()> func) : func_(func) {}
    ~Finally() { func_(); }
private:
    std::function<void()> func_;
};

void riskyFunction() {
    Finally finalAction([]() {
        std::cout << "This will always be executed." << std::endl;
    });

    std::cout << "Performing some risky operations..." << std::endl;
    throw std::runtime_error("An error occurred");
}
int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}

