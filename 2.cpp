#include <iostream>
class Animal {
public:
    virtual void speak() const = 0; 
};
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow" << std::endl;
    }
};
class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof" << std::endl;
    }
};
int main() {
    Animal* animal1 = new Cat();
    Animal* animal2 = new Dog();
    animal1->speak();
    animal2->speak();
    delete animal1;
    delete animal2;
    return 0;
}
