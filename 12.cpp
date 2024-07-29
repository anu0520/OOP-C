#include <iostream>
#include <iomanip>
using namespace std;

class matrix {
    int maxrow, maxcol;
    int *ptr;
public:
    matrix(int r, int c) {
        maxrow = r;
        maxcol = c;
        ptr = new int[r * c];
    }
    ~matrix() {
        delete[] ptr;
    }
    void getmat() {
        int i, j, mat_off;
        cout << endl << "Enter elements of the matrix:" << endl;
        for (i = 0; i < maxrow; i++) {
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cin >> ptr[mat_off];
            }
        }
    }
    void printmat() const {
        int i, j, mat_off;
        for (i = 0; i < maxrow; i++) {
            cout << endl;
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cout << setw(3) << ptr[mat_off];
            }
        }
        cout << endl;
    }
    int delmat() const {
        matrix q(maxrow - 1, maxcol - 1);
        int sign = 1, sum = 0, i, j, k, count, pos, newpos, order;
        order = maxrow;
        if (order == 1) {
            return ptr[0];
        }
        for (i = 0; i < order; i++, sign *= -1) {
            for (j = 1; j < order; j++) {
                for (k = 0, count = 0; k < order; k++) {
                    if (k == i) continue;
                    pos = j * order + k;
                    newpos = (j - 1) * (order - 1) + count;
                    q.ptr[newpos] = ptr[pos];
                    count++;
                }
            }
            sum = sum + ptr[i] * sign * q.delmat();
        }
        return sum;
    }
    matrix operator+(const matrix &b) const {
        matrix c(maxrow, maxcol);
        int i, j, mat_off;
        for (i = 0; i < maxrow; i++) {
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                c.ptr[mat_off] = ptr[mat_off] + b.ptr[mat_off];
            }
        }
        return c;
    }
    matrix operator*(const matrix &b) const {
        matrix c(maxrow, b.maxcol);
        int i, j, k, mat_off1, mat_off2, mat_off3;
        for (i = 0; i < c.maxrow; i++) {
            for (j = 0; j < c.maxcol; j++) {
                mat_off3 = i * c.maxcol + j;
                c.ptr[mat_off3] = 0;
                for (k = 0; k < maxcol; k++) {
                    mat_off2 = k * b.maxcol + j;
                    mat_off1 = i * maxcol + k;
                    c.ptr[mat_off3] += ptr[mat_off1] * b.ptr[mat_off2];
                }
            }
        }
        return c;
    }
    bool operator==(const matrix &b) const {
        if (maxrow != b.maxrow || maxcol != b.maxcol) return false;
        for (int i = 0; i < maxrow; i++) {
            for (int j = 0; j < maxcol; j++) {
                int mat_off = i * maxcol + j;
                if (ptr[mat_off] != b.ptr[mat_off]) return false;
            }
        }
        return true;
    }
};
int main() {
    int rowa, cola, rowb, colb;
    cout << "Enter dimensions of matrix A: ";
    cin >> rowa >> cola;
    matrix a(rowa, cola);
    a.getmat();
    cout << "Enter dimensions of matrix B: ";
    cin >> rowb >> colb;
    matrix b(rowb, colb);
    b.getmat();
    if (rowa == rowb && cola == colb) {
        matrix c = a + b;
        cout << "The sum of the two matrices: ";
        c.printmat();
    } else {
        cout << "Matrices A and B cannot be added due to dimension mismatch." << endl;
    }
    if (cola == rowb) {
        matrix d = a * b;
        cout << "The product of the two matrices: ";
        d.printmat();
    } else {
        cout << "Matrices A and B cannot be multiplied due to dimension mismatch." << endl;
    }
    if (rowa == cola) {
        cout << "Determinant of matrix A: " << a.delmat() << endl;
    } else {
        cout << "Matrix A is not a square matrix, cannot calculate determinant." << endl;
    }
    if (a == b) {
        cout << "Matrix A and B are equal." << endl;
    } else {
        cout << "Matrix A and B are not equal." << endl;
    }
    return 0;
}

