#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The values of the array are: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}

