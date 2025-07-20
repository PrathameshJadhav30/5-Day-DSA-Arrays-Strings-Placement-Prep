#include<iostream>
using namespace std;

bool isRotation(string s1, string s2){
    if(s1.length() != s2.length() || s1.empty()){
        return false;
    }

    string temp = s1 + s1;
    return temp.find(s2) != string :: npos;
}
int main() {
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    if (isRotation(s1, s2))
        cout << "Yes, it's a rotation." << endl;
    else
        cout << "No, it's not a rotation." << endl;

    return 0;
}