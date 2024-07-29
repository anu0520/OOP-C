#include <iostream>
using namespace std;
int main() {
    float arr[] = {3.14f, 2.71f, 1.62f, 0.57f, 1.41f};
    float* ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The values of the float array are: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}

