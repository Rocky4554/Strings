#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end()); // Sort the characters to form a key
        mp[key].push_back(s);         // Group anagrams by the sorted key
    }

    vector<vector<string>> result;
    for (auto& pair : mp) {
        result.push_back(pair.second); // Collect grouped anagrams
    }

    return result;
}

int main() {
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for (auto& group : result) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
