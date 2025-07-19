#include<iostream>
#include<string>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string replaceVowel(string s){
    for(char &ch : s){
        if(isVowel(ch)){
            ch = '%';
        }
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);

    string result = replaceVowel(s);
    cout<<"Modified String: "<< result<<endl;

    return 0;
}