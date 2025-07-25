#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(const vector<vector<int>>& matrix){
    if(matrix.empty()){
        return;
    }

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            cout<<matrix[top][i] <<" ";
        }
        top++;
        for(int i = top; i <= bottom; i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                cout<<matrix[bottom][i] <<" ";

            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout<<matrix[i][left] <<" ";
            }
            left++;
        }
    }
}
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    spiralOrder(mat);
    return 0;
}