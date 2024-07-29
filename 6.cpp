#include <iostream>
#include <vector>
#include <stdexcept>
class Matrix {
private:
    std::vector<std::vector<int> > data;
    int rows;
    int cols;
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }
    void set(int row, int col, int value) {
        if (row >= rows || col >= cols || row < 0 || col < 0) {
            throw std::out_of_range("Index out of bounds");
        }
        data[row][col] = value;
    }
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrices cannot be multiplied due to incompatible dimensions");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    void display() const {
       for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
             std::cout << data[i][j] << " ";   
            }
            std::cout << std::endl;
        }
    }
    int getRows() const {
        return rows;
    }
    int getCols() const {
        return cols;
    }
};
int main() {
    try {
        Matrix mat1(2, 3); 
        Matrix mat2(3, 2); 
        mat1.set(0, 0, 1);
        mat1.set(0, 1, 2);
        mat1.set(0, 2, 3);
        mat1.set(1, 0, 4);
        mat1.set(1, 1, 5);
        mat1.set(1, 2, 6);
        mat2.set(0, 0, 7);
        mat2.set(0, 1, 8);
        mat2.set(1, 0, 9);
        mat2.set(1, 1, 10);
        mat2.set(2, 0, 11);
        mat2.set(2, 1, 12);
        Matrix result = mat1 * mat2;
        std::cout << "Result of matrix multiplication:" << std::endl;
        result.display();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

