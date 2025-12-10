#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string &s : strs) {
        // frequency array for 26 lowercase letters
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        // convert freq[] into a unique key
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += to_string(freq[i]) + "#";
        }

        // using find() as you prefer
        if (mp.find(key) != mp.end()) {
            mp[key].push_back(s);
        } else {
            mp[key] = {s};
        }
    }

    // converting map → output vector
    vector<vector<string>> ans;
    for (auto &p : mp) {
        ans.push_back(p.second);
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> result = groupAnagrams(strs);

    cout << "\nGrouped Anagrams:\n";
    for (auto &group : result) {
        cout << "[ ";
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
