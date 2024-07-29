#include <iostream>
#include <algorithm>  
using namespace std;
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}
int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Original integer array: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;
    sortArray(intArray, intSize);
    cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;
    double doubleArray[] = {3.1, 1.4, 1.5, 2.9, 2.6};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Original double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;
    sortArray(doubleArray, doubleSize);
    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;
    return 0;
}

