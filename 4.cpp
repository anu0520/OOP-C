#include <iostream>
#include <string>
class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name(name), age(age) {}
    bool operator==(const Person& other) const {
        return (name == other.name && age == other.age);
    }
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
int main() {
    Person person1("anu", 30);
    Person person2("anu", 30);
    Person person3("anu", 25);
    if (person1 == person2) {
        std::cout << "person1 is equal to person2" << std::endl;
    } else {
        std::cout << "person1 is not equal to person2" << std::endl;
    }
    if (person1 == person3) {
        std::cout << "person1 is equal to person3" << std::endl;
    } else {
        std::cout << "person1 is not equal to person3" << std::endl;
    }
    return 0;

}

