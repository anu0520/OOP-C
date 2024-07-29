#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>
void findMinAndMax(const std::vector<int> &arr, int &minElement, int &maxElement) {
    if (arr.empty()) {
        throw std::invalid_argument("Array is empty");
    }
    minElement = std::numeric_limits<int>::max();
    maxElement = std::numeric_limits<int>::min();
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
}
int main() {
    std::vector<int> arr;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(-2);
    arr.push_back(7);
    arr.push_back(10);

    int minElement, maxElement;
    try {
        findMinAndMax(arr, minElement, maxElement);
        std::cout << "Minimum element: " << minElement << std::endl;
        std::cout << "Maximum element: " << maxElement << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

