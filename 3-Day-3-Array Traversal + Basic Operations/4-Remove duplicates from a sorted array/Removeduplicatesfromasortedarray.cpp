#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
    int i = 0;
    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    int newLength = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew Length = " << newLength << endl;
    return 0;
}