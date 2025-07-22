#include<iostream>
#include<vector>
using namespace std;

int longestSubarrayWithSumK (vector<int> &nums, int k){
    int start = 0, currSum = 0, maxLen = 0;
    for(int end = 0; end < nums.size(); end++){
        currSum += nums[end];
        while(currSum > k){
            currSum -= nums[start];
            start++;
        }

        if(currSum == k){
            maxLen = max(maxLen, end - start + 1);
        }
    }
    return maxLen;
}
int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 1};
    int k = 5;
    cout << "Length of longest subarray with sum " << k << ": " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}