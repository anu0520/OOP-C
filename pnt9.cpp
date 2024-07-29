#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person person("John Doe", 30);
    Person* ptr = &person;
    cout << "Using pointer to display the object's attributes:" << endl;
    ptr->display();
    return 0;
}

