#include <iostream>
class Vehicle {
public:
    virtual void drive() const = 0; 
};
class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is driving." << std::endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is driving." << std::endl;
    }
};
int main() {
    Vehicle* car = new Car();
    Vehicle* truck = new Truck();
    car->drive();
    truck->drive();
    delete car;
    delete truck;
    return 0;
}
