#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Boyer-Moore substring search with bad character heuristic
int boyer_moore_search(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    // Edge cases
    if (m == 0 || n < m) return -1;

    // Create bad character table
    unordered_map<char, int> bad_char;
    for (int i = 0; i < m; ++i) {
        bad_char[pattern[i]] = i;
    }

    // Search
    int s = 0; // Shift of the pattern
    while (s <= n - m) {
        int j = m - 1; // Start from end of pattern

        // Compare from right to left
        while (j >= 0 && pattern[j] == text[s + j]) {
            --j;
        }

        if (j < 0) {
            return s; // Pattern found
        }

        // Shift using bad character rule
        int shift = max(1, j - bad_char[text[s + j]]);
        s += shift;
    }

    return -1; // Pattern not found
}

int main() {
    string text = "Raunak";
    string pattern = "una";
    
    // Using Boyer-Moore
    int result = boyer_moore_search(text, pattern);
    if (result != -1) {
        cout << "Pattern found at index (Boyer-Moore): " << result << endl;
    } else {
        cout << "Pattern not found (Boyer-Moore)" << endl;
    }
    return 0;
}