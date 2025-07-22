#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countSubarraysDivByK(vector<int>& nums, int k){
    unordered_map<int, int> modCount;
    modCount[0] = 1; // Count subarrays starting from index 0
     
    int prefixSum = 0, count = 0;
    for(int num : nums){
      prefixSum += num;
      int mod = ((prefixSum % k) + k) % k; //Ensure Positive remainder
      count += modCount[mod]; //add count same mod seen
      modCount[mod]++;
    }
    return count;
}
int main() {
    vector<int> arr = {4, 5, 0, -2, -3, 1};
    int k = 5;
    cout << "Subarrays with sum divisible by " << k << ": " << countSubarraysDivByK(arr, k) << endl;
    return 0;
}