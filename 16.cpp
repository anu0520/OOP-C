#include <iostream>
#include <cmath>  
using namespace std;
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative integers." << endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
double factorial(double n) {
    if (n < 0.0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0.0;
    }
    return tgamma(n + 1);
}
int main() {
    int intNum = 5;
    cout << "Factorial of " << intNum << " (integer): " << factorial(intNum) << endl;
    double floatNum = 5.5;
    cout << "Factorial of " << floatNum << " (floating-point): " << factorial(floatNum) << endl;
    return 0;
}

