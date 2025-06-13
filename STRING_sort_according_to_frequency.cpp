#include<bits/stdc++.h>
using namespace std;

int count(string str,char ch){

    int count=0;
    for(int i=0;i<str.size();i++){
    if(str[i]== ch){
        count++;
    }
    }s
    return count;
}

void sorted(string str){
      int n=str.size();
      vector<pair<int,char>> hash;
      for(int i=0;i<n;i++){
          hash.push_back(make_pair(count(str,str[i]),str[i]));
      }

      sort(hash.begin(),hash.end());

      for(int i=0;i<hash.size();i++){
          cout<<hash[i].second;
      }
}


int main(){
    cout<<"Enter a string\n";
    string str;
    getline(cin,str);

    sorted(str);

    return 0;
}