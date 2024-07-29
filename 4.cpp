#include <iostream>
class Number {
private:
    int value;
public:
     Number(int v) : value(v) {}
    friend int findMaximum(const Number& num1, const Number& num2);
    int getValue() const {
        return value;
    }
};
int findMaximum(const Number& num1, const Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}
int main() {
    Number num1(10); 
    Number num2(20); 
    int max = findMaximum(num1, num2);
    std::cout << "The maximum value is: " << max << std::endl;
    return 0;
}

