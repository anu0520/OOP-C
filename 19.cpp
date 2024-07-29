#include <iostream>
#include <cmath>  
using namespace std;
int absoluteValue(int n) {
    return abs(n);
}
double absoluteValue(double n) {
    return fabs(n);
}
int main() {
        int intNum = -5;
    cout << "Absolute value of " << intNum << " (integer): " << absoluteValue(intNum) << endl;
    double doubleNum = -3.14;
    cout << "Absolute value of " << doubleNum << " (floating-point): " << absoluteValue(doubleNum) << endl;
    return 0;
}

