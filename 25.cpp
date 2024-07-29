#include <iostream>
#include <fstream>  // Added fstream header for file operations
#include <cstring>

int main() {
    char string[80];
    std::cout << "Enter a String: ";
    std::cin.getline(string, 80); // Use getline to allow spaces in input
    int len = std::strlen(string);

    std::fstream file;
    file.open("TEXT.txt", std::ios::in | std::ios::out | std::ios::trunc); // Use .txt extension and trunc to clear previous content
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    for (int i = 0; i < len; i++) {
        file.put(string[i]);
    }

    file.seekg(0); // Go back to the beginning of the file
    char ch;
    while (file.get(ch)) {
        std::cout << ch;
    }

    file.close(); // Close the file

    return 0;
}

