#include <iostream>
#include <vector>
using namespace std;
void calculateSum(const int arr1[], const int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}
void calculateSum(const vector<vector<int> > &mat1, const vector<vector<int> > &mat2, vector<vector<int> > &result) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
		
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main() {
   
	 cout << endl;
    vector<vector<int> > mat1(3, vector<int>(3));
    mat1[0][0] = 1; mat1[0][1] = 2; mat1[0][2] = 3;
    mat1[1][0] = 4; mat1[1][1] = 5; mat1[1][2] = 6;
    mat1[2][0] = 7; mat1[2][1] = 8; mat1[2][2] = 9;
    vector<vector<int> > mat2(3, vector<int>(3));
    mat2[0][0] = 9; mat2[0][1] = 8; mat2[0][2] = 7;
    mat2[1][0] = 6; mat2[1][1] = 5; mat2[1][2] = 4;
    mat2[2][0] = 3; mat2[2][1] = 2; mat2[2][2] = 1;
    vector<vector<int> > matResult(3, vector<int>(3));
    calculateSum(mat1, mat2, matResult);
    cout << "Sum of matrices: " << endl;
    for (int i = 0; i <matResult.size(); ++i) {
        for (int j = 0; j < matResult[i].size(); ++j) {
            cout << matResult[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

