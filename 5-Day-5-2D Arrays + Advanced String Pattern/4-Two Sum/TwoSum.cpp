#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;
    for(int  i = 0; i < nums.size(); i++){
        int Complement = target - nums[i];

        if(map.find(Complement) != map.end()){
            return {map[Complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "[" << result[0] << "," << result[1] << "]";
    return 0;
}