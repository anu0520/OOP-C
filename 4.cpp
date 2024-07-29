#include <iostream>
#include <string>
#include <algorithm> 
std::string reverseString(const std::string &str) {
    int n = str.length();
    std::string reversedStr = str;
    for (int i = 0; i < n / 2; ++i) {
        std::swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}
int main() {
    std::string original = "hello"; 
    std::string reversed = reverseString(original);
    std::cout << "Original string: " << original << std::endl;
    std::cout << "Reversed string: " << reversed << std::endl;
    return 0;
}

