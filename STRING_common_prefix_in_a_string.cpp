#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string longestCommonPrefix(vector<string> S) {
    if (S.size() == 0) return "";
    for (int i = 0; i < S[0].length() ; i++){
        char c = S[0][i];
        for (int j = 1; j < S.size(); j++) {
            if (i == S[j].length() || S[j][i] != c)
                return S[0].substr(0, i);             
        }
    }
    return S[0];
}

int main() {
    // Your code goes here;
    vector<string> s = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(s) << endl;
    return 0;
}