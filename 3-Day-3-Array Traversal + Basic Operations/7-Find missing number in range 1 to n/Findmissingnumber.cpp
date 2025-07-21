#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int n){
    int expectedSum = n * (n + 1)/ 2;
    int actualSum = 0;

    for(int num : arr){
        actualSum += num;
    }
    return expectedSum - actualSum;
}
int main() {
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    cout << "Missing Number: " << findMissingNumber(arr, n) << endl;
    return 0;
}