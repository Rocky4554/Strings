#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string longestWord(string str) {
    // 1. Append a space to handle the last word correctly
    str = str + " ";
    
    string current_word = "";
    string max_word = "";

    // Iterate through every character of the string
    for (char ch : str) {
        
        // Check if the current character is a space (word boundary)
        if (ch == ' ') {
            
            // 2. Check if the completed word is longer than the longest found so far
            if (current_word.size() > max_word.size()) {
                max_word = current_word; // Update the longest word
            }
            
            // 3. Reset the current word for the next word
            current_word = "";
        } 
        else {
            // If it's not a space, build the current word
            current_word += ch;
        }
    }
    
    // Return the longest word found
    return max_word;
}

int main() {
    string input_str;
    cout << "Enter a sentence: ";
    // Use getline to read the entire sentence, including spaces
    getline(cin, input_str);

    cout << "The longest word is: " << longestWord(input_str) << endl;

    return 0;
}g