#include <iostream>
#include <string>
using namespace std;

string remove_non_alpha(string str) {
    string result;
    for (char c : str) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string output = remove_non_alpha(str);
    cout << output << endl; // Output: "CProgramming"
    return 0;
}