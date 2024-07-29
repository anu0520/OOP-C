#include <iostream>
#include <vector>
class Matrix {
private:
    std::vector<std::vector<int> >data;
    int rows, cols;
public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<int>(c)) {}
    void insertElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) 
            data[r][c] = value;
    }
    int retrieveElement(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) 
            return data[r][c];
        return -1; 
    }
    void display() const {
        for (const auto& row :data) {
            for (int val : row) 
                std::cout << val << " ";
            std::cout << "\n";
        }
    }
};
int main() {
    Matrix mat(3, 3);
    mat.insertElement(0, 0, 1);
    mat.insertElement(0, 1, 2);
    mat.insertElement(0, 2, 3);
    mat.insertElement(1, 0, 4);
    mat.insertElement(1, 1, 5);
    mat.insertElement(1, 2, 6);
    mat.insertElement(2, 0, 7);
    mat.insertElement(2, 1, 8);
    mat.insertElement(2, 2, 9);
    std::cout << "Matrix:\n";
    mat.display();
    std::cout << "Element at (1,1): " << mat.retrieveElement(1, 1) << "\n";
    return 0;
}

