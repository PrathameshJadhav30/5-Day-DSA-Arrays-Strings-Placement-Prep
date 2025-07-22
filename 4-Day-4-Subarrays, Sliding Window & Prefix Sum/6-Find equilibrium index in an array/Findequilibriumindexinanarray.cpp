#include<iostream>
#include<vector>
using namespace std;

int findEquilibriumIndex(vector<int>& nums){
    int totalSum = 0, leftSum = 0;

    for(int num : nums){
        totalSum += num;
    }

    for(int i = 0; i < nums.size(); i++){
        if(leftSum == totalSum - leftSum - nums[i]){
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}
int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    int index = findEquilibriumIndex(arr);
    if (index != -1)
        cout << "Equilibrium index: " << index << endl;
    else
        cout << "No equilibrium index found.\n";
    return 0;
}