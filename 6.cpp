#include <iostream>
class Animal {
public:
    virtual void move() const = 0; 
};
class Bird : public Animal {
public:
    void move() const override {
        std::cout << "Bird is flying." << std::endl;
    }
};
class Fish : public Animal {
public:
    void move() const override {
        std::cout << "Fish is swimming." << std::endl;
    }
};
int main() {
    Animal* bird = new Bird();
    Animal* fish = new Fish();
    bird->move();
    fish->move();
    delete bird;
    delete fish;
    return 0;
}
