#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate90Clockwise(vector<vector<int>>& matrix, int n){
    //Transpose
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
             swap(matrix[i][j], matrix[j][i]);
        }
    }

    //Reverse eac Row
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    rotate90Clockwise(mat, n);

    // Output rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}