#include<iostream>
#include<vector>
using namespace std;

bool isSortedAndRotated(const vector<int>& arr){
    int count = 0, n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[(i + 1) % n]){
            count++;
        }
    }
    return count <= 1;
}
int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << (isSortedAndRotated(arr) ? "true" : "false") << endl;
    return 0;
}