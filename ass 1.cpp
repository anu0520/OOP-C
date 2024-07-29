#include <iostream>
class MyClass {
private:
    static int objectCount;
public:
    MyClass() {
        ++objectCount;
    }
    static void showCount() {
        std::cout << "Number of objects created: " << objectCount << std::endl;
    }
};
int MyClass::objectCount = 0;
int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    MyClass::showCount();
 return 0;
}

