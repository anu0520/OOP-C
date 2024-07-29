#include <iostream>
using namespace std;
int main() {
    double value = 3.14159;
    double* ptr = &value;
    cout << "The value of the double is: " << *ptr << endl;
    return 0;
    
}

