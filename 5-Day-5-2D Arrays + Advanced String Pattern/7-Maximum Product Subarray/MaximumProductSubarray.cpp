#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find maximum product subarray
int maxProduct(vector<int>& nums) {
    int maxProd = nums[0];
    int currMax = nums[0];
    int currMin = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        // If negative number, swap max and min
        if (nums[i] < 0)
            swap(currMax, currMin);

        // Update current max and min product
        currMax = max(nums[i], currMax * nums[i]);
        currMin = min(nums[i], currMin * nums[i]);

        // Update overall max product
        maxProd = max(maxProd, currMax);
    }

    return maxProd;
}

// Main function with sample input
int main() {
    vector<int> nums = {2, 3, -2, 4};
    int result = maxProduct(nums);
    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}
