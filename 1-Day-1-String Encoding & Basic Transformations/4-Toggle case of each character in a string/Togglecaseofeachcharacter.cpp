#include<iostream>
#include<string>
using namespace std;

string togglCase(string s){
    for(char &ch : s){
        if(islower(ch)){
            ch = toupper(ch);
        }else if(isupper(ch)){
            ch = tolower(ch);
        }
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);

    string result = togglCase(s);
    cout<<"Toggle case String: "<<result<<endl;

    return 0;
}