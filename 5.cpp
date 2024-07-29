#include <iostream>
#include <string>
#include <sstream>
int countWords(const std::string &str) {
    std::istringstream iss(str);
    std::string word;
    int count = 0;
    while (iss >> word) {
        ++count;
    }
    return count;
}
int main() {
    std::string text = "Hello, how are you doing today?"; 
    int wordCount = countWords(text);
    std::cout << "The number of words in the string is: " << wordCount << std::endl;
    return 0;
}

