#include <iostream>
#include <string>
#include<cctype>
bool isPalindrome(const std::string &str) {
    std::string cleanedStr;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        char ch = str[i];
        if (std::isalnum(ch)) {
            cleanedStr += std::tolower(ch);
        }
    }
    std::string::size_type left = 0;
    std::string::size_type right = cleanedStr.length() - 1;

    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}
int main() {
    std::string text = "A man, a plan, a canal, Panama"; 
    if (isPalindrome(text)) {
        std::cout << "\"" << text << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << text << "\" is not a palindrome." << std::endl;
    }
    return 0;
}

