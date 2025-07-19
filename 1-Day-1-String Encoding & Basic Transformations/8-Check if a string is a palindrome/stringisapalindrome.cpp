#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin >> s;

    if(isPalindrome(s)){
        cout<<"String is Palindrome.";
    }else{
        cout<<"String is not palindrome.";
    }

    return 0;
}