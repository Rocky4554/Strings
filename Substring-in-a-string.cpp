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

////////////// working ////////

// Boyer–Moore Algorithm (Bad Character Rule) Explanation

// In the Boyer–Moore substring search algorithm, we use the bad character heuristic to decide how far to shift the pattern when a mismatch occurs.
// In your code:

// int shift = max(1, j - bad_char[text[s + j]]);
// s += shift;


// this line controls the shift amount.

// 🧠 How It Works

// We compare the pattern with the text from right to left.
// If all characters match, we found the pattern.
// If a mismatch occurs at pattern[j] vs text[s + j], we use the bad character rule.

// The bad_char table stores the last index of each character in the pattern.
// For example, for "una":

// bad_char = { {'u':0}, {'n':1}, {'a':2} }


// When a mismatch happens, we calculate:

// shift = max(1, j - bad_char[text[s + j]])


// j → index in the pattern where mismatch occurred.

// text[s + j] → mismatched character in the text.

// bad_char[text[s + j]] → last occurrence of that character in the pattern (if not present, assume -1).

// max(1, …) ensures we shift at least one position forward to avoid infinite loops.

// 🧩 Example

// Text: "Raunak"
// Pattern: "una"

// Step 1: Preprocess pattern →
// bad_char = { 'u':0, 'n':1, 'a':2 }

// Step 2: Start with shift s = 0
// Compare pattern (right to left):

// Step	pattern[j]	text[s+j]	Match?	j	Action
// 1	a	u	❌ mismatch	2	shift = max(1, 2 - 0) = 2

// Shift pattern by 2 → s = 2

// Step 3: Now pattern aligns like this:

// Text:    R  a  u  n  a  k
// Pattern:       u  n  a


// Compare again:

// Step	pattern[j]	text[s+j]	Match?
// 1	a	a	✅
// 2	n	n	✅
// 3	u	u	✅

// ✅ Pattern found at index 2.

// 🧩 Summary Table
// Step	Shift (s)	Mismatch Char	bad_char[char]	j	Shift Amount	New s
// 1	0	'u'	0	2	2	2
// 2	2	—	—	—	Match	2
// ✅ Final Output
// Pattern found at index (Boyer-Moore): 2


// In short:
// The shift max(1, j - bad_char[text[s + j]]) lets the algorithm “jump” ahead intelligently instead of checking each position — making Boyer–Moore much faster than the naive search method.