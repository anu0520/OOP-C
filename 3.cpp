#include <iostream>
#include <string>
class Manager {
private:
    std::string name;
    int age;
public:
    Manager(const std::string& name, int age) : name(name), age(age) {}
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
int main() {
    const int numManagers = 3; 
    Manager managers[numManagers] = {
        Manager("Alice", 34),
        Manager("Bob", 45),
        Manager("Charlie", 29)
    };
    std::cout << "Manager List:" << std::endl;
    for (int i = 0; i < numManagers; ++i) {
        managers[i].display();
    }
    return 0;
}

