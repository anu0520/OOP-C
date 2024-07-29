#include <iostream>
class Class2; 
class Class1 {
private:
    int data1;
public:
    Class1(int d) : data1(d) {}
    friend void swapData(Class1& obj1, Class2& obj2);
    void display() const {
        std::cout << "Class1 data: " << data1 << std::endl;
    }
};
class Class2 {
private:
    int data2;

public:
    Class2(int d) : data2(d) {}
    friend void swapData(Class1& obj1, Class2& obj2);
    void display() const {
        std::cout << "Class2 data: " << data2 << std::endl;
    }
};
void swapData(Class1& obj1, Class2& obj2) {
    int temp = obj1.data1;
    obj1.data1 = obj2.data2;
    obj2.data2 = temp;
}
int main() {
    Class1 obj1(10);
    Class2 obj2(20);
    std::cout << "Before swapping:" << std::endl;
    obj1.display();
    obj2.display();
    swapData(obj1, obj2);
    std::cout << "After swapping:" << std::endl;
    obj1.display();
    obj2.display();
    return 0;
}

