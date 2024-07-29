#include <iostream>
using namespace std;
int main() {
    char value = 'A';
    char* ptr = &value;
    cout << "The value of the char is: " << *ptr << endl;
    return 0;
}

