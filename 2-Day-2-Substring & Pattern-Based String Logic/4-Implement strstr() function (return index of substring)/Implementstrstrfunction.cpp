#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();

    if (m == 0) return 0; // Edge case: empty needle

    for (int i = 0; i <= n - m; i++) {
        if (haystack.substr(i, m) == needle)
            return i;
    }
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter main string (haystack): ";
    cin >> haystack;
    cout << "Enter substring to find (needle): ";
    cin >> needle;

    int index = strStr(haystack, needle);
    if (index != -1)
        cout << "Substring found at index: " << index << endl;
    else
        cout << "Substring not found." << endl;

    return 0;
}
