#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class MyString {
private:
    char str[20];
public:
    MyString() {
        str[0] = '\0';
    }

    MyString(const char* s) {
        strcpy(str, s);
    }

    MyString(int a) {
        string temp = to_string(a);
        strcpy(str, temp.c_str());
    }

    operator int() {
        int ss = 0;
        int k = 1;
        int l = strlen(str) - 1;
        while (l >= 0) {
            ss = ss + (str[l] - '0') * k;
            l--;
            k *= 10;
        }
        return ss;
    }

    void displayData() {
        cout << str;
    }
};

int main() {
    MyString s1 = 123;
    cout << endl << "s1 = ";
    s1.displayData();

    s1 = 150;

