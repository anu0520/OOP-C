#include <iostream>
class Matrix {
private:
    int rows;
    int cols;
    int** data; 
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    void setElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        } else {
            std::cout << "Index out of bounds!" << std::endl;
        }
    }
    int getElement(int row, int col) const {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        } else {
            std::cout << "Index out of bounds!" << std::endl;
            return -1;
        }
    }
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    Matrix mat(3, 3);
    mat.setElement(0, 0, 1);
    mat.setElement(0, 1, 2);
    mat.setElement(0, 2, 3);
    mat.setElement(1, 0, 4);
    mat.setElement(1, 1, 5);
    mat.setElement(1, 2, 6);
    mat.setElement(2, 0, 7);
    mat.setElement(2, 1, 8);
    mat.setElement(2, 2, 9);
    std::cout << "Matrix:" << std::endl;
    mat.display();
    int value = mat.getElement(1, 1);
    std::cout << "Element at (1, 1): " << value << std::endl;
    return 0;
}

