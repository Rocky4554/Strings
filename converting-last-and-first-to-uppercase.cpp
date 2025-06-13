#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int len = str.length();
    int wordStart = -1;
    
    for (int i = 0; i < len; i++) {
        // Check if current character is alphabetic (a-z or A-Z)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // If we haven't found the start of a word yet, mark it
            if (wordStart == -1) {
                wordStart = i;
                // Capitalize first character of word
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32; // Convert to uppercase
                }
            }
            // Convert middle characters to lowercase
            else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32; // Convert to lowercase
                }
            }
        }
        // If current character is not alphabetic or we're at the end
        else if (wordStart != -1) {
            // Capitalize the last character of the previous word
            int lastChar = i - 1;
            if (str[lastChar] >= 'a' && str[lastChar] <= 'z') {
                str[lastChar] = str[lastChar] - 32; // Convert to uppercase
            }
            wordStart = -1; // Reset word start
        }
    }
    
    // Handle case where string ends with a word
    if (wordStart != -1) {
        int lastChar = len - 1;
        if (str[lastChar] >= 'a' && str[lastChar] <= 'z') {
            str[lastChar] = str[lastChar] - 32; // Convert to uppercase
        }
    }
    
    cout << "Modified string: " << str << endl;
    
    return 0;
}