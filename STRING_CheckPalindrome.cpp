#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int i=0,j=s.size()-1;

    while(i<=j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}

int main(){

    string s;
    cin>>s;

    if(check(s)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}