#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSubArraySum(vector<int> &nums){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int num : nums){
        currSum = max(num, currSum + num);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArraySum(arr) << endl;
    return 0;
}