#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> anagram(vector<string>& ss){
    vector<vector<string>> ans;
    map<string, vector<string>> m;

    for(int i=0;i<ss.size();i++){
        string p=ss[i];
        sort(ss[i].begin(),ss[i].end());

        m[ss[i]].push_back(p);
    }

    for(auto it:m){
        ans.push_back(it.second);
    }

    return ans;

}

int main(){
    int n;
    cin>>n;

    vector<string> ss;
    for(int i=0;i<n;i++){
    string s;
    cin>>s;
    ss.push_back(s);
    }
    cout<<"All anagrams are\n";
    vector<vector<string>> result=anagram(ss);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}


