#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int lengthofLongestSubstring(string s){
    unordered_map<char, int> lastIndex;
    int maxLen = 0, start = 0;
    for(int end = 0; end < s.length(); end++ ){
        char ch = s[end];

        if(lastIndex.find(ch) != lastIndex.end() && lastIndex[ch] >= start){
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = end;
        maxLen = max(maxLen, end - start + 1);
    }
    return maxLen;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);

    int res = lengthofLongestSubstring(s);
    cout<<"Longest Sunstring without Repeat Character: "<<res<<endl;
    return 0;
}