#include <iostream>
#include <cstring>
using namespace std;
class person {
    char name[20];
    float age;
public:
    person(const char* s, float a) {
        strcpy(name, s);
        age = a;
    }
    person& greater1(person& x) {
        if (x.age >= age)
            return x;
        else
            return *this;
    }

    void display(void) {
        cout << "Name: " << name << "\n";
    }
};
int main() {
    person p1("anu", 37.50);
    person p2("poori", 29.0);
    person p3("deepa", 40.5);

    person p = p1.greater1(p3);
    cout << "Elder person is:\n";
    p.display();

    p = p1.greater1(p2);
    cout << "Elder person is:\n";
    p.display();

    return 0;
}

