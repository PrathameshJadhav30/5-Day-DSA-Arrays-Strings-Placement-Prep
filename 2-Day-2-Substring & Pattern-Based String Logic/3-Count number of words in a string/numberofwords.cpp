#include<iostream>
#include<sstream>
using namespace std;

int countWords(string s){
    istringstream iss(s);
    string word;
    int count = 0;
    while(iss >> word){
        count++;
    }
    return count;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);  

    cout << "Number of words: " << countWords(s) << endl;
    return 0;
}