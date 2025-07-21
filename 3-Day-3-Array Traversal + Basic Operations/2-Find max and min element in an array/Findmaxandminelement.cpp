#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void findMinMax(const vector<int>& arr){
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int num: arr){
        minVal = min (minVal, num);
        maxVal = max(maxVal, num);
    }
    cout<<"Min: "<<minVal <<" Max: "<<maxVal<<endl;
}
int main() {
    vector<int> arr = {3, 5, 1, 8, 2};
    findMinMax(arr);
    return 0;
}