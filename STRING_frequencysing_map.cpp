#include<bits/stdc++.h>
using namespace std;

void frequency(string str){
    int n=str.size();
    unordered_map<char,int> m;
    for(int i=0;i<n;i++){
       m[str[i]]++;
    }

    for(auto p:m){
        cout<<p.first<<"-->"<<p.second<<endl;

    }
}

int main(){

    cout<<"Enter a string\n";
    string str;
    getline(cin,str);

    frequency(str);

    return 0;
}