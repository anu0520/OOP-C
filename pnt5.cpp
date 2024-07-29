#include <iostream>
#include <string>
int main() {
    std::string str = "Hello, World!";
    std::string *ptr = &str;
    std::cout << "Value of str: " << *ptr << std::endl;
    return 0;
}
