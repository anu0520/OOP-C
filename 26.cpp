#include <iostream>
#include <fstream>  // Include the fstream header for file operations

int main() {
    char source[67], target[67];
    char ch;

    std::cout << "Enter source filename: ";
    std::cin >> source;
    std::cout << "Enter target filename: ";
    std::cin >> target;

    std::ifstream infile(source);
    if (!infile) {
        std::cerr << "Error opening source file." << std::endl;
        return 1;
    }

    std::ofstream outfile(target);
    if (!outfile) {
        std::cerr << "Error opening target file." << std::endl;
        return 1;
    }

    while (infile.get(ch)) {
        outfile.put(ch);
    }

    infile.close();
    outfile.close();

    return 0;
}

