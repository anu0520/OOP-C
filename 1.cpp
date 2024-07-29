#include <iostream>
class ObjectCounter {
private:
    static int objectCount;
public:
    ObjectCounter() {
        ++objectCount;
    }
    ~ObjectCounter() {
        --objectCount;
    }
    static void showCount() {
        std::cout << "Number of objects created: " << objectCount << std::endl;
    }
};
int ObjectCounter::objectCount = 0;
int main() {
    ObjectCounter::showCount(); 
    ObjectCounter obj1; 
    ObjectCounter obj2; 
    ObjectCounter obj3; 
    ObjectCounter::showCount(); 
    return 0;
}

