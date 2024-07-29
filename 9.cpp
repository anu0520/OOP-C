#include <iostream>
using namespace std;
class matrix {
    int **p;
    int d1, d2;
public:
    matrix(int x, int y);
    ~matrix(); 
    void get_element(int i, int j, int value) {
        p[i][j] = value;
    }
    int& put_element(int i, int j) {
        return p[i][j];
    }
};
matrix::matrix(int x, int y) {
    d1 = x;
    d2 = y;
    p = new int*[d1];
    for(int i = 0; i < d1; i++) {
        p[i] = new int[d2];
    }
}
matrix::~matrix() {
    for(int i = 0; i < d1; i++) {
        delete[] p[i];
    }
    delete[] p;
}
int main() {
    int m, n;
    cout << "Enter size of matrix: ";
    cin >> m >> n;
    matrix a(m, n);
    cout << "Enter matrix elements row by row:" << endl;
    int value;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> value;
            a.get_element(i, j, value);
        }
    }
    cout << "\nMatrix element at (1,2): " << a.put_element(1, 2) << endl;
    return 0;
}

