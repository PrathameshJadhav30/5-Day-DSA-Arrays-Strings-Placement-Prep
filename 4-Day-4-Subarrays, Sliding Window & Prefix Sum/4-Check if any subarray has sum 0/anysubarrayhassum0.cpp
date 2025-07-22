#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool hasZeroSumSubarray(vector<int> & nums){
    unordered_set<int> seen;
    int prefixSum = 0;

    for(int num :nums){
        prefixSum += num;
        if(prefixSum == 0 || seen.count(prefixSum)){
            return true;
        }
        seen.insert(prefixSum);
    }
    return false;
}
int main() {
    vector<int> arr = {4, 2, -3, 1, 6};
    if (hasZeroSumSubarray(arr))
        cout << "Subarray with sum 0 exists.\n";
    else
        cout << "No subarray with sum 0 found.\n";
    return 0;
}