#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

string reverseEachWord(string sentence){
    stringstream ss(sentence);
    string word, result = " ";

    while(ss >> word){
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    if(!result.empty()){
        result.pop_back();
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a Sentence: ";
    getline(cin, str);

    string rev = reverseEachWord(str);
    cout<<"Reverse string: "<<rev<<endl;

    return 0;
}