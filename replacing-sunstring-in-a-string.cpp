#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Boyer-Moore search for finding substring positions
int boyer_moore_search(string& text,string& pattern, int start) {
    int n = text.length();
    int m = pattern.length();

    // Edge cases
    if (m == 0 || n < m || start >= n) return -1;

    // Create bad character table
    unordered_map<char, int> bad_char;
    for (int i = 0; i < m; ++i) {
        bad_char[pattern[i]] = i;
    }
    // it will create a map like [ R-0]
                            //   [ a-1]   
                            //   [ u-2].... 

    // Search from start position
    int s = start;
    while (s <= n - m) { 
        int j = m - 1;

        // Compare from right to left
        while (j >= 0 && pattern[j] == text[s + j]) { // s-j means incresing s by j times 
            --j;
        }

        if (j < 0) {// means new substring length is over.
            return s; // Pattern found 
        }

        // Shift using bad character rule
        int shift = max(1, j - bad_char[text[s + j]]); // suppose s+j=2 then text[2] ,taking example of Raunak text[2] = u
        s += shift;                                    // bad_char[text[s + j]] ,map[u]=2 so max(1,2)=2
    }                                                   // s=s=2

    return -1; // Pattern not found
}

// Custom substring replace function using Boyer-Moore
string replace_substring_custom(string& text,string& old_str,string& new_str) {
    string result = text;
    int m = old_str.length();
    int pos = 0;
    string temp;

    // Find and replace all occurrences
    while ((pos = boyer_moore_search(result, old_str, pos)) != -1) { // taking the starting posting of substr to be replaced
        temp = result.substr(0, pos) + new_str + result.substr(pos + m);// ex :new str=xy, old =una so (Ra + xy + k)
        result = temp;
        pos += new_str.length(); // Move past the replacement to start a new search
    }

    return result;
}

// Main function to demonstrate both methods
int main() {
    string text,old_str,new_str;
    cout<<"Enter a string"<<endl;
    cin>>text;

    cout<<"Enter a substring to be replaced"<<endl;
    cin>>old_str;

    cout<<"Enter the new substring"<<endl;
    cin>>new_str;

    // Using custom Boyer-Moore-based replace
    string result_custom = replace_substring_custom(text, old_str, new_str);
    cout << "Custom replace result: " << result_custom << endl;

    return 0;
}