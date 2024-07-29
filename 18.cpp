#include <iostream>
#include <cmath>  
using namespace std;
int power(int base, int exponent) {
    return static_cast<int>(pow(base, exponent));
}
double power(double base, double exponent) {
    return pow(base, exponent);
}
int main() {
    int intBase = 2;
    int intExponent = 3;
    cout << intBase << " raised to the power of " << intExponent << " is: " << power(intBase, intExponent) << endl;
    double doubleBase = 2.5;
    double doubleExponent = 3.5;
    cout << doubleBase << " raised to the power of " << doubleExponent << " is: " << power(doubleBase, doubleExponent) << endl;
    return 0;
}

