#include<bits/stdc++.h>
using namespace std;

int firstunique(string str){
    int indx = str.size();

    unordered_map<char, pair<int,int>> m ;
    for(int i=0;i<str.size();i++){  
        m[str[i]].first++;
        m[str[i]].second=i;
    }
    for(const auto& [c,p]:m){
        if(p.first==1){

        indx = min(indx,p.second);
        }
    }
        return indx == str.size() ? -1 : indx;
}

int main(){

    cout<<"Enter the string\n";
    string str;
    getline(cin,str);
    
    cout<<firstunique(str);
    return 0;
}