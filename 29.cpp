#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    int number[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    
    if (argc != 3) {
        std::cout << "argc=" << argc << "\n";
        std::cout << "Error in arguments\n";
        std::exit(1);
    }

    std::ofstream fout1, fout2;
    fout1.open(argv[1]);
    if (fout1.fail()) {
        std::cout << "Could not open the file: " << argv[1] << "\n";
        std::exit(1);
    }

    fout2.open(argv[2]);
    if (fout2.fail()) {
        std::cout << "Could not open the file: " << argv[2] << "\n";
        std::exit(1);
    }

    for (int i = 0; i < 9; i++) {
        if (number[i] % 2 == 0)
            fout2 << number[i] << " ";
        else
            fout1 << number[i] << " ";
    }

    fout1.close();
    fout2.close();

    std::ifstream fin;
    char ch;
    for (int i = 1; i < argc; i++) {
        fin.open(argv[i]);
        if (fin.fail()) {
            std::cout << "Could not open the file: " << argv[i] << "\n";
            std::exit(1);
        }
        
        std::cout << "Contents of " << argv[i] << "\n";
        while (fin.get(ch)) {
            std::cout << ch;
        }
        std::cout << "\n\n";
        fin.close();
    }

    return 0;
}

