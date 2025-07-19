#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string encodeMessage(const string& message) {
    string result = "";
    for (char ch : message) {
        if (isVowel(ch))
            result += '%';
        else if (isdigit(ch))
            result += '#';
        else if (ch == ' ')
            result += '_';
        else
            result += ch;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a message: ";
    getline(cin, input);

    cout << "Encoded message: " << encodeMessage(input) << endl;
    return 0;
}
