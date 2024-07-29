#include <iostream>
using namespace std;
void greet() {
    cout << "Hello, World!" << endl;
}
int main() {
    void (*funcPtr)() = &greet;
    cout << "Calling the function using the pointer:" << endl;
    (*funcPtr)();

    return 0;
}

