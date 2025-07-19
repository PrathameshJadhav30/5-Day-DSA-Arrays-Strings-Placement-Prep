#include<iostream>
#include<unordered_set>
using namespace std;

string RemoveDuplicates(string s){
    unordered_set<char> seen;
    string result = " ";

    for( char ch : s){
        if(seen.find(ch) == seen.end()){
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    string result = RemoveDuplicates(s);
    cout<<"After duplicates remove: "<<result<<endl;

    return 0;
}