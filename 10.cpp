#include <iostream>
class Person {
public:
    virtual void work() const = 0;
};
class Employee : public Person {
public:
    void work() const override {
        std::cout << "Employee is working on tasks." << std::endl;
    }
};
class Manager : public Person {
public:
    void work() const override {
        std::cout << "Manager is overseeing the team." << std::endl;
    }
};
int main() {
    Person* employee = new Employee();
    Person* manager = new Manager();
    employee->work();
    manager->work();
    delete employee;
    delete manager;
    return 0;
}
