#include <iostream>
#include <cstring>  
#include <string>   
std::string concatenate(const std::string& a, const std::string& b) {
    return a + b;
}
char* concatenate(const char* a, const char* b) {
    size_t lengthA = std::strlen(a);
    size_t lengthB = std::strlen(b);
    char* result = new char[lengthA + lengthB + 1]; 
    std::strcpy(result, a);
    std::strcat(result, b);
    return result;
}
int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    std::string strResult = concatenate(str1, str2);
    std::cout << "Concatenated std::string: " << strResult << std::endl;
    const char* cstr1 = "Hello, ";
    const char* cstr2 = "world!";
    char* cstrResult = concatenate(cstr1, cstr2);
    std::cout << "Concatenated C-style string: " << cstrResult << std::endl;
    delete[] cstrResult;
    return 0;
}

