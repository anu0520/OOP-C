#include <iostream>
#include <cstring> 
using namespace std;
class MyString { 
    char* name;
    int length;
public:
    MyString() {
        length = 0;
        name = new char[length + 1];
        name[0] = '\0'; 
    }
    MyString(const char* s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    MyString(const MyString& other) { 
        length = other.length;
        name = new char[length + 1];
        strcpy(name, other.name);
    }
    ~MyString() {
        delete[] name;
    }
    void display() const {
        cout << name << "\n";
    }

    void join(const MyString& a, const MyString& b);
};
void MyString::join(const MyString& a, const MyString& b) {
    length = a.length + b.length;
    delete[] name;
    name = new char[length + 1];
    strcpy(name, a.name);
    strcat(name, b.name);
}
int main() {
    MyString name1("deepa"), name2("prabha"), name3("poori"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}

