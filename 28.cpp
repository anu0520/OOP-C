#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
class group {
private:
    struct person {
        char flag;
        char empcode[5];
        char name[40];
        int age;
        float sal;
    } p;
    std::fstream file;
public:
    group();
    void addrec();
    void listrec();
    void modirec();
    void delrec();
    void recallrec();
    void packrec();
    void exit();
    void displayMenu();
};
group::group() {
    file.open("EMP.dat", std::ios::binary | std::ios::in | std::ios::out | std::ios::trunc);
    if (!file) {
        std::cerr << "Unable to open file" << std::endl;
        std::exit(1);
    }
}
void group::addrec() {
    char ch;
    file.seekp(0L, std::ios::end);
    do {
        std::cout << "\nEnter emp code, name, age & salary\n";
        std::cin >> p.empcode >> p.name >> p.age >> p.sal;
        p.flag = ' ';
        file.write(reinterpret_cast<char*>(&p), sizeof(p));
        std::cout << "Add another record? (Y/N): ";
        std::cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}
void group::listrec() {
    int j = 0;
    file.seekg(0L, std::ios::beg);
    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        if (p.flag != '*') {
            std::cout << "\nRecord# " << j++ << std::setw(6) << p.empcode
                      << std::setw(20) << p.name << std::setw(4) << p.age << std::setw(9) << p.sal;
        }
    }
    file.clear();
    std::cout << "\nPress any key to continue...";
    std::cin.get();
    std::cin.get();
}
void group::modirec() {
    char code[5];
    int count = 0;
    long int pos;
    std::cout << "Enter employee code: ";
    std::cin >> code;
    file.seekg(0L, std::ios::beg);
    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        if (std::strcmp(p.empcode, code) == 0) {
            std::cout << "\nEnter new record\n";
            std::cin >> p.empcode >> p.name >> p.age >> p.sal;
            p.flag = ' ';
            pos = count * sizeof(p);
            file.seekp(pos, std::ios::beg);
            file.write(reinterpret_cast<char*>(&p), sizeof(p));
            return;
        }
        count++;
    }
    std::cout << "\nNo employee in file with code = " << code;
    std::cout << "\nPress any key to continue...";
    std::cin.get();
    std::cin.get();
    file.clear();
}
void group::delrec() {
    char code[5];
    long int pos;
    int count = 0;
    std::cout << "Enter employee code: ";
    std::cin >> code;
    file.seekg(0L, std::ios::beg);
    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        if (std::strcmp(p.empcode, code) == 0) {
            p.flag = '*';
            pos = count * sizeof(p);
            file.seekp(pos, std::ios::beg);
            file.write(reinterpret_cast<char*>(&p), sizeof(p));
            return;
        }
        count++;
    }
    std::cout << "\nNo employee in file with code = " << code;
    std::cout << "\nPress any key to continue...";
    std::cin.get();
    std::cin.get();
    file.clear();
}
void group::recallrec() {
    char code[5];
    long int pos;
    int count = 0;
    std::cout << "Enter employee code: ";
    std::cin >> code;
    file.seekg(0L, std::ios::beg);
    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        if (std::strcmp(p.empcode, code) == 0) {
            p.flag = ' ';
            pos = count * sizeof(p);
            file.seekp(pos, std::ios::beg);
            file.write(reinterpret_cast<char*>(&p), sizeof(p));
            return;
        }
        count++;
    }
    std::cout << "\nNo employee in file with code = " << code;
    std::cout << "\nPress any key to continue...";
    std::cin.get();
    std::cin.get();
    file.clear();
}
void group::packrec() {
    std::ofstream outfile;
    outfile.open("TEMP.dat", std::ios::out | std::ios::binary);
    file.seekg(0, std::ios::beg);
    while (file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
        if (p.flag != '*') {
            outfile.write(reinterpret_cast<char*>(&p), sizeof(p));
        }
    }
    outfile.close();
    file.close();
    std::remove("EMP.dat");
    std::rename("TEMP.dat", "EMP.dat");
    file.open("EMP.dat", std::ios::binary | std::ios::in | std::ios::out);
}
void group::exit() {
    file.close();
}
void group::displayMenu() {
    char choice;
    do {
        std::cout << "\n1. Add records";
        std::cout << "\n2. List records";
        std::cout << "\n3. Modify records";
        std::cout << "\n4. Delete records";
        std::cout << "\n5. Recall records";
        std::cout << "\n6. Pack records";
        std::cout << "\n0. Exit";
        std::cout << "\nYour Choice? ";
        std::cin >> choice;
        switch (choice) {
            case '1': addrec(); break;
            case '2': listrec(); break;
            case '3': modirec(); break;
            case '4': delrec(); break;
            case '5': recallrec(); break;
            case '6': packrec(); break;
            case '0': exit(); break;
            default: std::cout << "Invalid choice! Please try again.\n"; break;
        }
    } while (choice != '0');
}
int main() {
    group g;
    g.displayMenu();
    return 0;
}

