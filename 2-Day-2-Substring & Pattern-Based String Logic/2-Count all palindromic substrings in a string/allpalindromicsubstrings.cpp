#include<iostream>
using namespace std;

int expandFromCenter(string s, int left, int right){
    int count = 0;
    while(left >= 0 && right < s.length() && s[left] == s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}
int countSubstring(string s){
    int n = s.length();
    int total = 0;

    for(int i = 0; i < n; i++){
        total += expandFromCenter(s, i, i);
        total += expandFromCenter(s, i, i+1);
    }
    return total;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Total Palindromic Substrings: " << countSubstring(s) << endl;

    return 0;
}
