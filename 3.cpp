#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculatePay() const = 0;
};
class Manager : public Employee {
public:
    double calculatePay() const override {
        return 5000.0; 
    }
};
class Engineer : public Employee {
public:
    double calculatePay() const override {
        return 50.0 * 160; 
    }
};
int main() {
    Manager manager;
    Engineer engineer;
    Employee* emp1 = &manager;
    Employee* emp2 = &engineer;
    cout << "Manager's Pay: $" << emp1->calculatePay() << endl;
    cout << "Engineer's Pay: $" << emp2->calculatePay() << endl;
    return 0;
}
