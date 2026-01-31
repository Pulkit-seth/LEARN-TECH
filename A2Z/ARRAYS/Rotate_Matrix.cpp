#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotateMatrix(vector<int>& matrix, int n, int m) {
    vector<int> rotated;
    for (int col = 0; col < m; ++col) {
        for (int row = n - 1; row >= 0; --row) {
            rotated.push_back(matrix[row * m + col]);
        }
    }
    return rotated;
}


int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<int> matrix(n * m);
    cout << "Enter matrix elements row-wise:" << endl;
    for (int i = 0; i < n * m; ++i) {
        cin >> matrix[i];
    }

    vector<int> rotatedMatrix = rotateMatrix(matrix, n, m);

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < rotatedMatrix.size(); ++i) {
        cout << rotatedMatrix[i] << " ";
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }

    return 0;
}