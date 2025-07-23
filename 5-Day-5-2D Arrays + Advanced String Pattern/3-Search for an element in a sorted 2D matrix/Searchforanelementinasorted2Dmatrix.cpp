#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int m = matrix.size(), n = matrix[0].size();
    int low = 0, high = m*n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;
        int midElement = matrix[mid / n][mid % n];
        if(midElement == target){
            return true;
        }
        else if(midElement < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return false;
}
int main() {
    int m, n, target;
    cin >> m >> n >> target;
    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    if (searchMatrix(mat, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}