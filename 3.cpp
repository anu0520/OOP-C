#include <iostream>
#include <string>
class Animal {
protected:
    std::string name;
    std::string species;
    int age;
public:
    Animal(std::string n, std::string s, int a) : name(n), species(s), age(a) {}
    std::string getName() {
        return name;
    std::string getSpecies() {
        return species;
    }
    int getAge() {
        return age;
    }
    void setName(std::string n) {
        name = n;
    }
    void setSpecies(std::string s) {
        species = s;
    }
    void setAge(int a) {
        age = a;
    }
};
class Cat : public Animal {
private:
    std::string color;
    std::string breed;
public:
    Cat(std::string n, std::string s, int a, std::string c, std::string b) : Animal(n, s, a), color(c), breed(b) {}
    std::string getColor() {
        return color;
    }
    std::string getBreed() {
        return breed;
    }
    void setColor(std::string c) {
        color = c;
    }
    void setBreed(std::string b) {
        breed = b;
    }
};
class Dog : public Animal {
private:
    double weight;
    std::string breed;
public:
    Dog(std::string n, std::string s, int a, double w, std::string b) : Animal(n, s, a), weight(w), breed(b) {}
    double getWeight() {
        return weight;
    }
    std::string getBreed() {
        return breed;
    }
    void setWeight(double w) {
        weight = w;
    }
    void setBreed(std::string b) {
        breed = b;
    }
};
int main() {
    Cat cat("Whiskers", "Domestic Shorthair", 3, "Brown", "British Shorthair");
    Dog dog("Fido", "Golden Retriever", 5, 30.5, "Golden Retriever");
    std::cout << "Cat's Name: " << cat.getName() << std::endl;
    std::cout << "Cat's Species: " << cat.getSpecies() << std::endl;
    std::cout << "Cat's Age: " << cat.getAge() << std::endl;
    std::cout << "Cat's Color: " << cat.getColor() << std::endl;
    std::cout << "Cat's Breed: " << cat.getBreed() << std::endl;
    std::cout << "Dog's Name: " << dog.getName() << std::endl;
    std::cout << "Dog's Species: " << dog.getSpecies() << std::endl;
    std::cout << "Dog's Age: " << dog.getAge() << std::endl;
    std::cout << "Dog's Weight: " << dog.getWeight() << std::endl;
    std::cout << "Dog's Breed: " << dog.getBreed() << std::endl;
    return 0;
}
