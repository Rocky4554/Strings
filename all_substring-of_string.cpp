#include <iostream>
#include <string>
using namespace std;

void printAllSubstrings(string str) {
    int n = str.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << str.substr(i, j - i) << endl;
        }
    }
}

int main() {
    string str = "raunak";
    printAllSubstrings(str);
    return 0;
}
