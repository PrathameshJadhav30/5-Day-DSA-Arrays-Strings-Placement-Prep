#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findSecondMinMax(const vector<int>& arr) {
    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int num : arr) {
        // For Min
        if (num < firstMin) {
            secondMin = firstMin;
            firstMin = num;
        } else if (num < secondMin && num != firstMin) {
            secondMin = num;
        }

        // For Max
        if (num > firstMax) {
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax && num != firstMax) {
            secondMax = num;
        }
    }

    cout << "Second Smallest = " << secondMin << ", Second Largest = " << secondMax << endl;
}

int main() {
    vector<int> arr = {3, 5, 1, 8, 2};
    findSecondMinMax(arr);
    return 0;
}
