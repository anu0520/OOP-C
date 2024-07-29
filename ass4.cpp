#include <iostream>
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend int findMax(const Number &n1, const Number &n2);
};
int findMax(const Number &n1, const Number &n2) {
    return (n1.value > n2.value) ? n1.value : n2.value;
}
int main() {
    Number num1(10);
    Number num2(20);
std::cout << "The maximum number is: " << findMax(num1, num2) << std::endl;
return 0;
}



