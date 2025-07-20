#include<iostream>
#include<unordered_set>
using namespace std;

string removeSpecifiedChars(string s, string removechars){
    unordered_set<char> toremove (removechars.begin(), removechars.end());
    string result = " ";

    for(char ch : s){
        if(toremove.find(ch) == toremove.end()){
            result += ch;
        }
    }
    return result;
}
int main() {
    string s, removeChars;
    cout << "Enter main string: ";
    cin >> s;
    cout << "Enter characters to remove: ";
    cin >> removeChars;

    string cleaned = removeSpecifiedChars(s, removeChars);
    cout << "Result after removal: " << cleaned << endl;

    return 0;
}