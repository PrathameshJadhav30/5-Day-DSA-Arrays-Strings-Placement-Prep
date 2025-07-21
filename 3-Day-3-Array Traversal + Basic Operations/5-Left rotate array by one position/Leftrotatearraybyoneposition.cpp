#include<iostream>
#include<vector>
using namespace std;

void leftRotateByOne(vector<int>& arr){
    if(arr.empty()){
        return;
    }

    int temp = arr[0];
    for(int i = 1; i < arr.size(); i++){
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    leftRotateByOne(arr);

    cout << "After Left Rotation: ";
    
    for (int num : arr){
      cout << num << " ";
    } 
    cout << endl;
    return 0;
}