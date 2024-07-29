#include <iostream>
#include <stdexcept>
#include <exception>
void testFunction(int errorType) {
    if (errorType == 1) {
        throw std::runtime_error("Runtime error occurred");
    } else if (errorType == 2) {
        throw std::logic_error("Logic error occurred");
    } else if (errorType == 3) {
        throw std::out_of_range("Out of range error occurred");
    } else {
        throw std::exception();
    }
}
int main() {
    try { 
        testFunction(2);
    } catch (const std::runtime_error& e) {
        std::cout << "Caught a runtime error: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught a logic error: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Caught an out of range error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
       std::cout << "Caught a generic exception: " << e.what() << std::endl;
    }
    return 0;
}

