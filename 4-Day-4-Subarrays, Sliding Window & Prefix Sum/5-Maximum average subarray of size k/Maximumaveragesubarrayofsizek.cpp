#include<iostream>
#include<vector>
using namespace std;

double findMaxAverage(vector<int> &nums, int k){
    int windowSum = 0;

    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;
    for(int i = k; i < nums.size(); i++){
       windowSum += nums[i] - nums[ i- k];
       maxSum = max(maxSum, windowSum);
    }

    return (double) maxSum / k;
}

int main() {
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << "Maximum average of subarray of size " << k << ": " << findMaxAverage(arr, k) << endl;
    return 0;
}