#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool anagram(string str1, string str2) {
    unordered_map<char, int> charCount;
    
    // Early return if lengths are different
    if (str1.size() != str2.size()) {
        return false;
    }
    
    // Count characters in first string
    for (char c : str1) {
        charCount[c]++;
    }
    
    // Decrement count for characters in second string
    for (char c : str2) {
        if (charCount.find(c) == charCount.end()) {
            return false;
        }
        charCount[c]--;
        if (charCount[c] == 0) {
            charCount.erase(c);
        }
    }
    
    return charCount.size() == 0;
}

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);
    
    if (anagram(str1, str2)) {
        cout << "The strings are anagrams: true" << endl;
    } else {
        cout << "The strings are not anagrams: false" << endl;
    }
    
    return 0;
}