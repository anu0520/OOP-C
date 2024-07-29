#include <iostream>
using namespace std;
int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char* ptr = arr;
    cout << "The values of the character array are: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
    return 0;
}


