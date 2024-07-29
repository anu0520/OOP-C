#include <iostream>
#include <string>
class Manager {
private:
    std::string name;
    int age;
public:
    Manager(const std::string &n, int a) : name(n), age(a) {}
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
int main() {
  const int numManagers = 3;
    Manager managers[numManagers] = {
        Manager("anu", 20),
        Manager("prabha", 19),
        Manager("poori", 19)
    };
    std::cout << "List of Managers:\n";
    for (int i = 0; i < numManagers; ++i) {
        managers[i].display();
    }
 return 0;
}

