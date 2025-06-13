#include<bits/stdc++.h>
using namespace std;

string reverse(string s,int len){
    if(len>=0){
        char ch=s[len];
        cout<<ch;
        return reverse(s,len-1);
        
    }
    
}

int main(){

    string s;
    cout<<"Enter the string \n";
    cin>>s;
    int len=s.size()-1;
    reverse(s,len);
    // string str=reverse(s,len);

    // if(str==s)
    // cout<<true<<endl;
    // else
    // cout<<false;

    return 0;
}